import struct

from manim import (
    Group,
    Scene,
    Square,
    FadeIn,
    FadeOut,
    Text,
    VGroup,
    Rectangle,
    BraceLabel,
    BraceBetweenPoints,
    TransformMatchingShapes,
    ManimColor,
    UP
)

base03 = ManimColor("#002b36")
base02 = ManimColor("#073642")
base01 = ManimColor("#586e75")
base00 = ManimColor("#657b83")
base0  = ManimColor("#839496")
base1  = ManimColor("#93a1a1")
base2  = ManimColor("#eee8d5")
base3  = ManimColor("#fdf6e3")

int_to_four_bytes = struct.Struct('>I').pack

Text.set_default(font="Noto Sans", color=base0)

class Bit(VGroup):
    def __init__(self, value: str, size=0.5):
        super().__init__()
        self.square = Square(side_length=size)
        self.square.set_stroke(width=1, color=base01)
        self.text = Text(value)
        self.text.height = size * 0.5
        self.add(self.square)
        self.add(self.text)

class Byte(VGroup):
    def __init__(self, value: int, width=4):
        super().__init__()
        string = "{:08b}".format(value)[0:8]
        for c in list(string):
            self.add(Bit(c, size = width / 8))
        self.arrange(buff=0)
        self.add(Rectangle(height=width / 8, width=width, color=base01))

class Word(VGroup):
    def __init__(self, value: int, width = 12):
        super().__init__()
        for byte in int_to_four_bytes(value):
            self.add(Byte(byte, width = width / 4))

        self.arrange(buff = 0)

class BitRangeLabel(VGroup):
    def __init__(self, start: int, end: int, label: str, width = 12, offset = -0.1):
        super().__init__()
        bit_width = width / 32
        left = 6 - bit_width * (end + 1) + 0.1
        right = 6 - bit_width * start - 0.1
        center = ( left + right ) / 2
        brace = BraceBetweenPoints([left, offset, 0], [right, offset, 0], color=base1)
        opcode = Text(label, font_size=16, color=base1)
        opcode.move_to([center, offset - 0.9, 0])
        self.add(brace)
        self.add(opcode)

class BitLabel(VGroup):
    def __init__(self, bit: int, width = 12, offset=0.35):
        super().__init__()
        text0 = Text(str(bit), font_size=12, color=base1)
        text0.move_to([6 - bit * (width / 32) - (width / 64), offset, 0])
        self.add(text0)

class SubField(VGroup):
    def __init__(self, start: int, end: int, label: str):
        super().__init__()
        bit0 = BitLabel(start)
        bit6 = BitLabel(end)
        opcode = BitRangeLabel(start, end, label)
        self.add(bit0, bit6, opcode)

class Default(Scene):
    def construct(self):
        text = Text("Instruction Set Encoding\nfrom assembly to machine code", font_size=48)
        self.play(FadeIn(text))

        self.wait(2)

        self.play(FadeOut(text))

        self.wait(1)

        operation = Text("addi ", font_size=48)
        destination_register = Text("x1", font_size=48)
        source_register = Text("x1", font_size=48)
        immediate = Text("1", font_size=48)
      
        instruction = VGroup(operation, destination_register, source_register, immediate)
        instruction.arrange(buff=0.3)

        self.play(FadeIn(instruction))

        instruction_brace = BraceLabel(operation, "operation", label_constructor=Text)
        destination_register_brace = BraceLabel(destination_register, "destination register", label_constructor=Text)
        source_register_brace = BraceLabel(source_register, "source register", label_constructor=Text)
        immediate_brace = BraceLabel(immediate, "immediate", label_constructor=Text)

        for brace in [instruction_brace, destination_register_brace, source_register_brace, immediate_brace]:
            self.wait(1)
            self.play(FadeIn(brace))
            self.wait(1)
            self.play(FadeOut(brace))

        self.wait(1)

        operation2 = Text("+", font_size=40 )
        equals = Text("=", font_size=40)
        destination_register2 = Text("x1", font_size=48)
        source_register2 = Text("x1", font_size=48)
        immediate2 = Text("1", font_size=48)

        
        instruction2 = VGroup(destination_register2, equals, source_register2, operation2, immediate2)
        instruction2.arrange(buff=0.3)
        
        self.play(TransformMatchingShapes(instruction, instruction2))

        self.wait(2)
        
        self.play(TransformMatchingShapes(instruction2, instruction))

        self.wait(2)

        self.play(FadeOut(instruction))

        self.wait(1)

        title = Text("I-Type instruction", font_size=22, font="Noto Sans")
        title.move_to(2*UP)
        word = Word(0x00108093)
        opcode = SubField(0, 6, "opcode")
        rd = SubField(7, 11, "rd")
        funct3 = SubField(12, 14, "funct3")
        rs1 = SubField(15, 19, "rs1")
        imm = SubField(20, 31, "imm[11:0]")
        self.play(FadeIn(Group(title, word, opcode, rd, funct3, rs1, imm)))  # show the shapes on screen
        self.wait(1)
