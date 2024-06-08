enum class DEFINES{
    ERROR = -1,
    MY_VMIN = 0,
    MY_VTIME = 60,
    NUM_BYTES = 1,
    DONE = 0,
    CLEAR_SCREEN_BYTES = 4,
    REPOSITION_BYTES   = 3,
};

enum class KEY_COMBO{
    CTRL_Q = (('Q') & 0x1f)
};