#pragma once

enum IChoreoServices::ScriptState_t : uint32_t  // sizeof 0x4
{
    SCRIPT_PLAYING = 0,
    SCRIPT_WAIT = 1,
    SCRIPT_POST_IDLE = 2,
    SCRIPT_CLEANUP = 3,
    SCRIPT_MOVE_TO_MARK = 4,
};
