import math

from common import style, base01, base0
from manim import Scene, Line, Polygon, Text, VMobject, VGroup, LEFT, RIGHT, UP, DOWN

class Zero(VMobject):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.lines = [
            Line([-0.5, -0.5, 0], [0.5, -0.5, 0], color=base0),
        ]
        self.add(*self.lines)

class One(VMobject):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.lines = [
            Line([-0.5, 0.5, 0], [0.5, 0.5, 0], color=base0),
        ]
        self.add(*self.lines)

class MultiByte(VMobject):
    def __init__(self, length: int = 1, **kwargs):
        super().__init__(length, **kwargs)
        self.lines = [
            Line([-0.5, -0.5, 0], [0.5, -0.5, 0], color=base0),
            Line([-0.5, 0.5, 0], [0.5, 0.5, 0], color=base0),
        ]
        self.add(*self.lines)

class Invalid(VMobject):
    def __init__(self, length: int = 1, **kwargs):
        super().__init__(length, **kwargs)
        self.lines = [
            Line([-0.5, -0.5, 0], [0.5, -0.5, 0], color=base0),
            Line([-0.5, 0.5, 0], [0.5, 0.5, 0], color=base0),
        ]
        self.shade = Polygon(
            [-0.5, -0.5, 0], [0.5, -0.5, 0], [0.5, 0.5, 0], [-0.5, 0.5, 0], 
            fill_color=base01, fill_opacity=1, color=base01)
        self.add(self.shade, *self.lines)


class FallingEdge(VMobject):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.lines = [
            Line([-0.5, 0.5, 0], [-0.15, 0.5, 0], color=base0),
            Line([-0.15, 0.5, 0], [0.15, -0.5, 0], color=base0),
            Line([0.15, -0.5, 0], [0.5, -0.5, 0], color=base0),
        ]

        self.add(*self.lines)

class ClockPulse(VMobject):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.lines = [
            Line([-0.5, -0.5, 0], [-0.5, 0.5, 0], color=base0),
            Line([-0.5, 0.5, 0], [0, 0.5, 0], color=base0),
            Line([0, 0.5, 0], [0, -0.5, 0], color=base0),
            Line([0, -0.5, 0], [0.5, -0.5, 0], color=base0),
            Line([0.5, -0.5, 0], [0.5, 0.5, 0], color=base0),
        ]

        self.add(*self.lines)


class RisingEdge(FallingEdge):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.flip(LEFT)

class HighPulse(VMobject):
    def __init__(self, length=1, **kwargs):
        super().__init__(**kwargs)
        self.rising_edge = RisingEdge().move_to(LEFT * length / 2)
        self.falling_edge = FallingEdge().move_to(RIGHT * length / 2)
        self.line = Line([(1 - length) / 2, 0.5, 0], [(length - 1) / 2, 0.5, 0])
        self.add(self.rising_edge, self.falling_edge, self.line)

class LowPulse(HighPulse):
    def __init__(self, length=1, **kwargs):
        super().__init__(length, **kwargs)
        self.flip(LEFT)

class HighOrLowPulse(VMobject):
    def __init__(self, length=1, **kwargs):
        super().__init__(**kwargs)
        self.high_pulse = HighPulse(length, **kwargs)
        self.low_pulse = LowPulse(length, **kwargs)
        self.add(self.high_pulse, self.low_pulse)

class Byte(HighOrLowPulse):
    def __init__(self, value: int, **kwargs):
        self.text = Text(f"{value:x}", **style)
        length = math.ceil(self.text.width, **kwargs)
        super().__init__(length)
        self.add(self.text)

class Label(HighOrLowPulse):
    def __init__(self, value: str, **kwargs):
        self.text = Text(value, **style)
        length = math.ceil(self.text.width, **kwargs)
        super().__init__(length)
        self.add(self.text)

class InvalidStart(VMobject):
    def __init__(self, length: int = 1, **kwargs):
        super().__init__(length, **kwargs)
        self.shade = Polygon(
            [-length / 2 + 0.15, 0.5, 0],
            [length / 2 - 0.15 ,0.5,0], 
            [length / 2,0,0], 
            [length / 2 - 0.15 ,-0.5,0], 
            [-length / 2 + 0.15, -0.5, 0],
            fill_color=base01, fill_opacity=1, color=base0)
        self.line = Line(
            [-length / 2 + 0.15, 0.5, 0],
            [-length / 2 + 0.15, -0.5, 0],
            color=base01
        )
        self.add(self.shade, self.line)


class SignalBuilder:

    def build(line: str) -> VGroup:
        retval = VGroup()
        start = math.floor(len(line) / 2)
        state = None
        for i, char in enumerate(line):
            print(f"state: {state}; char: {char}")
            if char == '.':
                char = state
            if state is None:
                state = char
            print(f"state: {state}; char: {char}")
            match(char, state):
                case ('p', _):
                    print("clock")
                    retval.add(ClockPulse().move_to(RIGHT*(i - start)))
                case ('=', _):
                    print("multibyte")
                    retval.add(MultiByte().move_to(RIGHT*(i - start)))
                case ('0', '1') | ('0', '='):
                    print("falling edge")
                    retval.add(FallingEdge().move_to(RIGHT*(i - start)))
                case ('x', _):
                    print("invalid")
                    retval.add(Invalid().move_to(RIGHT*(i - start)))
                case ('1', '0'):
                    print("rising edge")
                    retval.add(RisingEdge().move_to(RIGHT*(i - start)))
                case ('1', _):
                    print("one")
                    retval.add(One().move_to([i - start, 0.5, 0]))
                case ('0', _):
                    print("zero")
                    retval.add(Zero().move_to([i - start, -0.5, 0]))
                case _:
                    print("failure")

            state=char
        return retval



class TimingDiagram(Scene):
    def construct(self):
        self.add(SignalBuilder.build("=..0.."))
        # self.add(One())
        # self.add(Zero().move_to(RIGHT))
        self.wait(2)