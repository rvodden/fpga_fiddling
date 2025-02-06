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
    DoubleArrow,
)

from common import *


def text_box(
    text: list[str],
    height: float = 2,
    text_params: dict = style | {"font_size": 250},
    aspect_ratio: int = 1.618,
    icon=None,
    icon_scale=1,
    icon_spacing=0.3
) -> VGroup:
    if icon is not None:
        paragraph = VGroup(
            icon.copy().scale(icon_scale),
            Paragraph(*text, **text_params, alignment="center").scale(0.1),
        )
        paragraph.arrange(buff=icon_spacing * icon_scale)
    else:
        paragraph = Paragraph(*text, **text_params, alignment="center").scale(0.1)

    return VGroup(
        Rectangle(height=height, width=height * aspect_ratio, color=base0), paragraph
    )


class Overview(MovingCameraScene):
    def construct(self):

        processor = text_box(["processor"])
        processor.move_to(2 * LEFT)

        ram = text_box(["ram"], icon=ram_icon)
        ram.move_to(2 * RIGHT)

        arrow = DoubleArrow(start=LEFT * 0.618, end=RIGHT * 0.618, color=base0)

        self.add(processor, ram, arrow)

        self.wait(2)

        self.camera.frame.save_state()
        self.play(
            self.camera.frame.animate.set(width=processor.width * 2).move_to(processor)
        )

        self.wait(2)

        rectangle = Rectangle(height=2, width=2 * 1.618, color=base0)
        rectangle.move_to(2 * LEFT)

        instruction_decoder = text_box(
            ["instruction", "decoder"],
            height=0.6,
            aspect_ratio=1.8,
            text_params=style | {"font_size": 100},
            icon=instruction_decoder_icon,
            icon_spacing=0.2,
            icon_scale=0.4, 
        )
        instruction_decoder.move_to(2.75 * LEFT + 0.5 * UP)

        finite_state_machine = text_box(
            ["finite state", "machine"],
            height=0.6,
            aspect_ratio=1.8,
            text_params=style | {"font_size": 100},
            icon=finite_state_machine_icon,
            icon_spacing=0.2,
            icon_scale=0.4, 
        )
        finite_state_machine.move_to(1.25 * LEFT + 0.5 * UP)
        
        arithmetic_logic_unit = text_box(
            ["arithmetic", "logic unit"],
            height=0.6,
            aspect_ratio=1.8,
            text_params=style | {"font_size": 100},
            icon=arithmetic_logic_unit_icon,
            icon_scale=0.4, 
        )
        arithmetic_logic_unit.move_to(2.75 * LEFT + 0.5 * DOWN)

        register_file = text_box(
            ["register", "file"],
            height=0.6,
            aspect_ratio=1.8,
            text_params=style | {"font_size": 100},
            icon=register_file_icon,
            icon_scale=0.4,
        )
        register_file.move_to(1.25 * LEFT + 0.5 * DOWN)

        processor2 = VGroup(
            rectangle, instruction_decoder, arithmetic_logic_unit, register_file, finite_state_machine
        )
        self.play(FadeOut(processor), FadeIn(processor2))

        self.wait(1)
        self.play(Indicate(register_file, color=yellow))

        self.wait(1)
        self.play(Indicate(instruction_decoder, color=yellow))

        self.wait(1)
        self.play(Indicate(arithmetic_logic_unit, color=yellow))

        self.wait(1)
        self.play(Indicate(finite_state_machine, color=yellow))

        self.wait(1)
