from manim import Scene, Line, VMobject, LEFT, RIGHT

class FallingEdge(VMobject):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.lines = [
            Line([-0.5, 0.5, 0], [-0.15, 0.5, 0]),
            Line([-0.15, 0.5, 0], [0.15, -0.5, 0]),
            Line([0.15, -0.5, 0], [0.5, -0.5, 0]),
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

class TimingDiagram(Scene):
    def construct(self):
        high_or_low_pulse = HighOrLowPulse(2)
        self.add(
            high_or_low_pulse
        )
        self.wait(2)
