#pragma once

enum AnimScriptType : uint16_t  // sizeof 0x2
{
    ANIMSCRIPT_TYPE_INVALID = -1,
    ANIMSCRIPT_FUSE_GENERAL = 0,
    ANIMSCRIPT_FUSE_STATEMACHINE = 1,
};
