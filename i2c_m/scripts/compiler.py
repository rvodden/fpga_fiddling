import fileinput

def flat_map (f, xs):
    return [y for ys in xs for y in f(ys)]

ADDRESS = 0x27

START_CMD   = 0 << 8 # Send a start condition
RESTART_CMD = 1 << 8 # Send a stop condition
STOP_CMD    = 2 << 8 # Send a reset condition
READ_CMD    = 3 << 8 # Read a byte
WRITE_CMD   = 4 << 8 # Write a byte


CLEAR_DISPLAY               = 1 << 0;

RETURN_HOME                 = 1 << 1;

ENTRY_MODE                  = 1 << 2;
ENTRY_MODE_INCREMENT        = 1 << 1;
ENTRY_MODE_DISPLAY_SHIFT    = 1 << 0;

DISPLAY_ON_OFF              = 1 << 3;
DISPLAY_ON_OFF_DISPLAY      = 1 << 2;
DISPLAY_ON_OFF_CURSOR       = 1 << 1;
DISPLAY_ON_OFF_CURSOR_BLINK = 1 << 0;

SHIFT                       = 1 << 4;
SHIFT_DISPLAY_NOT_CURSOR    = 1 << 3;
SHIFT_RIGHT                 = 1 << 2;

FUNCTION_SET                = 1 << 5;
FUNCTION_SET_DATA_LENGTH    = 1 << 4;
FUNCTION_SET_LINES          = 1 << 3;
FUNCTION_SET_FONT           = 1 << 2;

SET_CGRAM                   = 1 << 6;
SET_DDRAM                   = 1 << 7;

RS_PIN                      = 1 << 0;
RW_PIN                      = 1 << 1;
ENABLE_PIN                  = 1 << 2;
BACKLIGHT_PIN               = 1 << 3;

INIT_SEQUENCE = [
    0x3,
    0x3,
    0x3,
    0x2
];

CONFIG_SEQUENCE = [
    FUNCTION_SET | FUNCTION_SET_LINES,
    DISPLAY_ON_OFF | DISPLAY_ON_OFF_DISPLAY,
    ENTRY_MODE | ENTRY_MODE_INCREMENT,
    RETURN_HOME,
    CLEAR_DISPLAY
]

CHAR_SEQENCE = "kate"

def write_8bit(value: int, rs_rw: int = 0x00) -> list[int]:
    reg = rs_rw | BACKLIGHT_PIN
    lower = (value & 0x0F) << 4
    upper = (value & 0xF0)

    return [
        START_CMD, 
        WRITE_CMD | (ADDRESS << 1),
        WRITE_CMD | reg | upper | ENABLE_PIN, 
        WRITE_CMD | reg | lower,
        WRITE_CMD | reg | lower | ENABLE_PIN, 
        WRITE_CMD | reg | lower,
        STOP_CMD
    ]

def write_4bit(value: int, rs_rw: int = 0x00) -> list[int]:
    reg = rs_rw | BACKLIGHT_PIN
    lower = (value & 0x0F) << 4
    return [
        START_CMD, 
        WRITE_CMD | (ADDRESS << 1),
        WRITE_CMD | reg | lower | ENABLE_PIN, 
        WRITE_CMD | reg | lower,
        STOP_CMD
    ];
    

def main():
    output = []

    output += flat_map(write_4bit, INIT_SEQUENCE)
    output += flat_map(write_8bit, CONFIG_SEQUENCE)
    
    output += flat_map(lambda x: write_8bit(int.from_bytes(x.encode("ascii")), RS_PIN), list(CHAR_SEQENCE))
    # output += flat_map(lambda x: write_8bit(x, RS_PIN), [0x9D])

    print("\n".join([ "{:0>11b}".format(v) for v in output ]))
    

if __name__ == "__main__":
    main()
