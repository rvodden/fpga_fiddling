import math

from common import style, base01, base0, base03
from manim import (
    Scene,
    Line,
    Polygon,
    Text,
    VMobject,
    VGroup,
    LEFT,
    RIGHT,
    UP,
    DOWN,
    Mobject,
)

BIT_LEFT = -0.5
BIT_RIGHT = 0.5
BIT_TOP = 0.3
BIT_BOTTOM = -0.3

EDGE_LEFT = -0.35
EDGE_RIGHT = -0.15


class BitValue(VMobject):
    def __init__(self, length: int = 1, **kwargs):
        super().__init__(length, **kwargs)
        self.shade = Polygon(
            [BIT_LEFT, BIT_BOTTOM, 0],
            [BIT_RIGHT, BIT_BOTTOM, 0],
            [BIT_RIGHT, BIT_TOP, 0],
            [BIT_LEFT, BIT_TOP, 0],
            fill_color=base03,
            fill_opacity=1,
            color=base03,
        )
        self.add(self.shade)


class Zero(BitValue):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.lines = [
            Line([BIT_LEFT, BIT_BOTTOM, 0], [BIT_RIGHT, BIT_BOTTOM, 0], color=base0),
        ]
        self.add(*self.lines)


class One(BitValue):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.lines = [
            Line([BIT_LEFT, BIT_TOP, 0], [BIT_RIGHT, BIT_TOP, 0], color=base0),
        ]
        self.add(*self.lines)


class DontCare(BitValue):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.lines = [
            Line([BIT_LEFT, 0, 0], [BIT_RIGHT, 0, 0], color=base0),
        ]
        self.add(*self.lines)


class MultiByte(BitValue):
    def __init__(self, length: int = 1, **kwargs):
        super().__init__(length, **kwargs)
        self.lines = [
            Line([BIT_LEFT, BIT_BOTTOM, 0], [BIT_RIGHT, BIT_BOTTOM, 0], color=base0),
            Line([BIT_LEFT, BIT_TOP, 0], [BIT_RIGHT, BIT_TOP, 0], color=base0),
        ]
        self.add(*self.lines)


class Invalid(BitValue):
    def __init__(self, length: int = 1, **kwargs):
        super().__init__(length, **kwargs)
        self.lines = [
            Line([BIT_LEFT, BIT_BOTTOM, 0], [BIT_RIGHT, BIT_BOTTOM, 0], color=base0),
            Line([BIT_LEFT, BIT_TOP, 0], [BIT_RIGHT, BIT_TOP, 0], color=base0),
        ]
        self.shade = Polygon(
            [BIT_LEFT, BIT_BOTTOM, 0],
            [BIT_RIGHT, BIT_BOTTOM, 0],
            [BIT_RIGHT, BIT_TOP, 0],
            [BIT_LEFT, BIT_TOP, 0],
            fill_color=base01,
            fill_opacity=1,
            color=base01,
        )
        self.add(self.shade, *self.lines)


class FallingEdge(VMobject):
    def __init__(
        self,
        connect_from_multibyte: bool = False,
        connect_to_multibyte: bool = False,
        **kwargs,
    ):
        super().__init__(**kwargs)
        self.lines = [
            Line([BIT_LEFT, BIT_TOP, 0], [EDGE_LEFT, BIT_TOP, 0], color=base0),
            Line([EDGE_LEFT, BIT_TOP, 0], [EDGE_RIGHT, BIT_BOTTOM, 0], color=base0),
            Line([EDGE_RIGHT, BIT_BOTTOM, 0], [BIT_RIGHT, BIT_BOTTOM, 0], color=base0),
        ]
        if connect_from_multibyte:
            self.lines.append(
                Line([BIT_LEFT, BIT_BOTTOM, 0], [BIT_RIGHT, BIT_BOTTOM, 0], color=base0)
            )

        if connect_to_multibyte:
            self.lines.append(
                Line([BIT_LEFT, BIT_TOP, 0], [BIT_RIGHT, BIT_TOP, 0], color=base0)
            )
        self.add(*self.lines)


class RisingEdge(FallingEdge):
    def __init__(
        self, connect_from_multibyte=False, connect_to_multibyte=False, **kwargs
    ):
        super().__init__(
            connect_from_multibyte=connect_from_multibyte,
            connect_to_multibyte=connect_to_multibyte,
            *kwargs,
        )
        self.flip(LEFT)


class CrossingSignal(VMobject):
    def __init__(self, connect_from_invalid=False, **kwargs):
        super().__init__()
        self.add(
            RisingEdge(**kwargs),
            FallingEdge(**kwargs),
        )
        if connect_from_invalid:
            self.add(
                Polygon(
                    [BIT_LEFT, BIT_TOP, 0],
                    [EDGE_LEFT, BIT_TOP, 0],
                    [(EDGE_LEFT + EDGE_RIGHT) / 2, 0, 0],
                    [EDGE_LEFT, BIT_BOTTOM, 0],
                    [BIT_LEFT, BIT_BOTTOM, 0],
                    fill_color=base01,
                    fill_opacity=1,
                    stroke_width=0,
                )
            )


class HalfFallingEdge(BitValue):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.lines = [
            Line([BIT_LEFT, BIT_TOP, 0], [EDGE_LEFT, BIT_TOP, 0], color=base0),
            Line([EDGE_LEFT, BIT_TOP, 0], [EDGE_RIGHT, 0, 0], color=base0),
            Line([EDGE_RIGHT, 0, 0], [BIT_RIGHT, 0, 0], color=base0),
        ]
        self.add(*self.lines)


class HalfRisingEdge(HalfFallingEdge):
    def __init__(
        self,
        **kwargs,
    ):
        super().__init__(**kwargs)
        self.flip(LEFT)


class MergeSignal(BitValue):
    def __init__(
        self,
        **kwargs,
    ):
        super().__init__(**kwargs)
        self.lines = [
            Line([BIT_LEFT, BIT_TOP, 0], [EDGE_LEFT, BIT_TOP, 0], color=base0),
            Line([EDGE_LEFT, BIT_TOP, 0], [EDGE_RIGHT, 0, 0], color=base0),
            Line([EDGE_RIGHT, 0, 0], [BIT_RIGHT, 0, 0], color=base0),
            Line([EDGE_LEFT, BIT_BOTTOM, 0], [EDGE_RIGHT, 0, 0], color=base0),
            Line([BIT_LEFT, BIT_BOTTOM, 0], [EDGE_LEFT, BIT_BOTTOM, 0], color=base0),
        ]
        self.add(*self.lines)


class ClockPulse(VMobject):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.lines = [
            Line([BIT_LEFT, BIT_BOTTOM, 0], [BIT_LEFT, BIT_TOP, 0], color=base0),
            Line([BIT_LEFT, BIT_TOP, 0], [0, BIT_TOP, 0], color=base0),
            Line([0, BIT_TOP, 0], [0, BIT_BOTTOM, 0], color=base0),
            Line([0, BIT_BOTTOM, 0], [BIT_RIGHT, BIT_BOTTOM, 0], color=base0),
            Line([BIT_RIGHT, BIT_BOTTOM, 0], [BIT_RIGHT, BIT_TOP, 0], color=base0),
        ]

        self.add(*self.lines)


class InvalidStart(VMobject):
    def __init__(self, length: int = 1, **kwargs):
        super().__init__(length, **kwargs)
        self.shade = Polygon(
            [-length / 2 + 0.15, 0.5, 0],
            [length / 2 - 0.15, 0.5, 0],
            [length / 2, 0, 0],
            [length / 2 - 0.15, -0.5, 0],
            [-length / 2 + 0.15, -0.5, 0],
            fill_color=base01,
            fill_opacity=1,
            color=base0,
        )
        self.line = Line(
            [-length / 2 + 0.15, 0.5, 0], [-length / 2 + 0.15, -0.5, 0], color=base01
        )
        self.add(self.shade, self.line)


class SignalBuilder:

    def build(line: str) -> VGroup:
        retval = VGroup()
        start = math.floor(len(line) / 2)
        state = None
        for i, char in enumerate(line):
            if char == ".":
                char = state
            if state is None:
                state = char

            def add(thing: Mobject):
                retval.add(thing.move_to(RIGHT * (i - start)))

            match (char, state):
                # CLOCKS
                case ("p", _):
                    add(ClockPulse())

                # MULTIBYTE
                case ("=", "1"):
                    add(FallingEdge(connect_to_multibyte=True))
                case ("=", "0"):
                    add(RisingEdge(connect_to_multibyte=True))
                case ("=", "x"):
                    add(CrossingSignal(connect_from_invalid=True))
                case ("=", _):
                    add(MultiByte())

                # INVALID
                case ("x", "="):
                    add(CrossingSignal())
                case ("x", _):
                    add(Invalid())

                # DONT CARE
                case ("z", "="):
                    add(MergeSignal())
                case ("z", _):
                    add(DontCare())

                # ZEROS
                case ("0", "1") | ("0", "="):
                    add(FallingEdge(connect_from_multibyte=(state == "=")))
                case ("0", _):
                    add(Zero())

                # ONES
                case ("1", "0") | ("1", "="):
                    add(RisingEdge(connect_from_multibyte=(state == "=")))
                case ("1", _):
                    add(One())
                case _:
                    # raise NotImplementedError()
                    pass

            state = char
        return retval


class TimingDiagram(Scene):
    def construct(self):
        font_size = 20

        clk =SignalBuilder.build("ppppp").move_to(UP*2) 
        self.add(clk)
        self.add(Text("CLK", font_size=font_size).next_to(clk, LEFT))

        memory_address = SignalBuilder.build("x=.z.").move_to(UP)
        self.add(memory_address)
        self.add(Text("memory_address", font_size=font_size).next_to(memory_address, LEFT))

        memory_read_strobe = SignalBuilder.build("0.10.")
        self.add(memory_read_strobe)
        self.add(Text("memory_read_strobe", font_size=font_size).next_to(memory_read_strobe, LEFT))

        memory_value = SignalBuilder.build("x..=.").move_to(DOWN*2)
        self.add(memory_value)
        self.add(Text("memory_value", font_size=font_size).next_to(memory_value, LEFT))
        # self.add(One())
        # self.add(Zero().move_to(RIGHT))
        self.wait(2)
