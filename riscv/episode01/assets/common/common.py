import struct

from manim import (
    BraceBetweenPoints,
    ManimColor,
    Rectangle,
    SVGMobject,
    Square,
    Text,
    VGroup
)

base03 = ManimColor("#002b36")
base02 = ManimColor("#073642")
base01 = ManimColor("#586e75")
base00 = ManimColor("#657b83")
base0  = ManimColor("#839496")
base1  = ManimColor("#93a1a1")
base2  = ManimColor("#eee8d5")
base3  = ManimColor("#fdf6e3")

yellow = ManimColor("#b58900")
orange = ManimColor("#cb4b16")
red = ManimColor("#dc322f")
magenta = ManimColor("#d33682")
violet = ManimColor("#6c71c4")
blue = ManimColor("#268bd2")
cyan = ManimColor("#2aa198")
green = ManimColor("#859900")

ram_icon = SVGMobject("common/dataset_24dp_E8EAED_FILL0_wght400_GRAD0_opsz24.svg", fill_color=base1).scale(0.2)
register_file_icon = SVGMobject("common/tv_options_edit_channels_24dp_E8EAED_FILL0_wght400_GRAD0_opsz24.svg", fill_color=base1).scale(0.2)
arithmetic_logic_unit_icon = SVGMobject("common/function_24dp_E8EAED_FILL0_wght400_GRAD0_opsz24.svg", fill_color=base1).scale(0.2)
instruction_decoder_icon = SVGMobject("common/translate_24dp_E8EAED_FILL0_wght400_GRAD0_opsz24.svg", fill_color=base1).scale(0.2)
finite_state_machine_icon = SVGMobject("common/graph_3_24dp_E8EAED_FILL0_wght400_GRAD0_opsz24.svg", fill_color=base1).scale(0.2)

style = {
    "font_size": 40,
    "font": "Noto Sans",
    "color": base0,
    "line_spacing": 0.8
}

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
