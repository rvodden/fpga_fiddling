from manim import (
    Group,
    Scene,
    Square,
    FadeIn,
    FadeOut,
    Text,
    Paragraph,
    VGroup,
    Rectangle,
    Indicate,
    BraceLabel,
    BraceBetweenPoints,
    ReplacementTransform,
    Transform,
    TransformMatchingShapes,
    ManimColor,
    MovingCameraScene,
    UP,
    DOWN,
    LEFT,
    RIGHT,
    DoubleArrow
)

from common import *

def text_box(text: list[str], height: float = 2, text_params: dict = style | { "font_size" : 250}) -> VGroup:
    return VGroup(
            Rectangle(height=height, width=height*1.618, color=base0),
            Paragraph(*text, **text_params, alignment="center" ).scale(0.1)
        )

class Register(MovingCameraScene):
    def construct(self):
        processor = text_box(["processor"])
        processor.move_to(2 * LEFT)
        
        ram = text_box(["ram"])
        ram.move_to(2 * RIGHT)

        arrow = DoubleArrow(
            start=LEFT*0.618,
            end=RIGHT*0.618
        )

        self.add(processor, ram, arrow)

        self.wait(2)

        self.camera.frame.save_state()
        self.play(self.camera.frame.animate.set(width=processor.width *2).move_to(processor))

        self.wait(2)

        rectangle = Rectangle(height=2, width=2*1.618, color=base0)
        rectangle.move_to(2*LEFT)

        instruction_decoder = text_box(["instruction","decoder"], height=0.6, text_params=style | {"font_size": 100})
        instruction_decoder.move_to(2.75*LEFT + 0.5*UP)
        
        arithmetic_logic_unit = text_box(["arithmetic","logic unit"], height=0.6, text_params=style | {"font_size": 100})
        arithmetic_logic_unit.move_to(2.75*LEFT + 0.5*DOWN)

        register_file = text_box(["register","file"], height=0.6, text_params=style | {"font_size": 100})
        register_file.move_to(1.25*LEFT + 0.5*DOWN)

        processor2 = VGroup(rectangle, instruction_decoder, arithmetic_logic_unit, register_file)
        self.play(FadeOut(processor), FadeIn(processor2))

        self.wait(1)
        self.play(Indicate(register_file, color=yellow))

        self.wait(1)
        self.play(Indicate(instruction_decoder, color=yellow))

        self.wait(1)
        self.play(Indicate(arithmetic_logic_unit, color=yellow))

        self.wait(1)
