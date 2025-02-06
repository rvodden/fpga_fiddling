from manim import (
    FadeIn,
    FadeOut,
    Indicate,
    Text,
    VGroup,
    MovingCameraScene,
    Restore,
    UP,
    LEFT,
    ReplacementTransform,
    Transform,
    Wiggle
)

from common import *

REGISTER_NAMES = [
    "zero",
    "ra",
    "sp",
    "gp",
    "tp",
    "t0",
    "t1",
    "t2",
    "fp",
    "s1",
    "a0",
    "a1",
    "a2",
    "a3",
    "a4",
    "a5",
    "a6",
    "a7",
    "s3",
    "s3",
    "s4",
    "s5",
    "s6",
    "s7",
    "s8",
    "s9",
    "s10",
    "s11",
    "t3",
    "t4",
    "t5",
    "t6",
]


class RegisterFile(MovingCameraScene):
    def construct(self):
        register_names = VGroup()
        alt_register_names = VGroup()

        for i in range(0, 32):
            register_names.add(Text(f"x{i}"))
        register_names.arrange_in_grid(
            rows=4, cols=8,  col_alignment="llllllll", buff=1.2
        ).scale(0.6)

        print(len(REGISTER_NAMES))

        for i, register_name in enumerate(REGISTER_NAMES):
            alt_register_names.add(Text(register_name).scale(0.6).move_to(register_names[i]))

        general_purpose_registers = Text("general purpose registers")
        general_purpose_registers.move_to(UP*3)

        special_purpose_registers = Text("special purpose registers")
        special_purpose_registers.move_to(general_purpose_registers)

        pc = Text("pc").scale(0.6)

        self.camera.frame.save_state()
        self.camera.frame.set(width=register_names[0].width * 5).move_to(
            register_names[0]
        )
        x0 = register_names[0].copy()
        self.add(x0)
        self.wait(1)
        self.play(FadeIn(register_names), Restore(self.camera.frame))
        self.remove(x0)
        
        register_names.save_state()
        self.wait(1)
        self.play(Transform(register_names, alt_register_names))
        
        self.wait(1)
        self.play(Restore(register_names))

        self.wait(1)
        self.play(FadeIn(general_purpose_registers))
        
        self.wait(1)
        self.play(Indicate(register_names[0], color=yellow))

        self.wait(1)
        self.play(Transform(general_purpose_registers, special_purpose_registers), FadeOut(register_names))

        self.wait(1)
        self.play(FadeIn(pc))
