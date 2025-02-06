from manim import (
    Group,
    Scene,
    FadeIn,
    FadeOut,
    Text,
    VGroup,
    BraceLabel,
    ReplacementTransform,
    TransformMatchingShapes,
    UP,
    DOWN,
    LEFT,
    RIGHT
)

from common import *


class InstructionDecoder(Scene):
    def construct(self):

        text = Text("Instruction Set Encoding\nfrom assembly to machine code", font_size=48)
        self.play(FadeIn(text))

        self.wait(2)

        self.play(FadeOut(text))

        self.wait(1)

        operation = Text("addi ", **style)
        destination_register = Text("x1", **style)
        source_register = Text("x1", **style)
        immediate = Text("1", **style)
      
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

        operation2 = Text("+", **style)
        equals = Text("=", **style)
        destination_register2 = Text("x1", **style)
        source_register2 = Text("x1", **style)
        immediate2 = Text("1", **style)

        
        instruction2 = VGroup(destination_register2, equals, source_register2, operation2, immediate2)
        instruction2.arrange(buff=0.3)
        
        operation3 = Text("opcode", **style)
        destination_register3 = Text("destination register", **style)
        source_register3 = Text("source register", **style)
        immediate3 = Text("immediate", **style)
        description = VGroup(operation3, destination_register3, source_register3, immediate3)
        
        riscv_operation = Text("opcode", **style)
        riscv_funct3 = Text("funct3", **style)
        riscv_destination_register = Text("rd", **style)
        riscv_source_register = Text("rs1", **style)
        riscv_immediate = Text("imm", **style)
        riscv_description = VGroup(riscv_operation, riscv_destination_register, riscv_source_register, riscv_immediate)
        
        riscv_operation2 = riscv_operation.copy()
        riscv_funct3 = Text("funct3", **style)
        riscv_destination_register2 = riscv_destination_register.copy()
        riscv_source_register2 = riscv_source_register.copy()
        riscv_immediate2 = riscv_immediate.copy()
        riscv_description2 = VGroup(riscv_operation2, riscv_funct3, riscv_destination_register2, riscv_source_register2, riscv_immediate2)

        self.play(TransformMatchingShapes(instruction, instruction2))

        self.wait(2)
        
        self.play(TransformMatchingShapes(instruction2, instruction))

        self.wait(1)

        self.play(instruction.animate.arrange(direction=DOWN, buff=0.3))

        self.wait(1)
        
        self.play(instruction.animate.move_to(LEFT*2))

        description.arrange(direction=DOWN).move_to(RIGHT*2)
        riscv_description.arrange(direction=DOWN).move_to(RIGHT*2)
        riscv_description2.arrange(direction=DOWN).move_to(RIGHT*2)
        
        self.play(FadeIn(description))
        self.wait(1)

        self.play(ReplacementTransform(description, riscv_description))
        self.wait(1)
        
        self.play(ReplacementTransform(riscv_description, riscv_description2))
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
