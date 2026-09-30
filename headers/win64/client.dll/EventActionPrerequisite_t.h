#pragma once

struct EventActionPrerequisite_t  // sizeof 0x10, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    uint32 unActionID; // offset 0x0, size 0x4, align 4
    EEventActionPrerequisiteScoreType ePrerequisiteScoreType; // offset 0x4, size 0x4, align 4
    uint32 unActionScore; // offset 0x8, size 0x4, align 4
    uint32 unActionScoreRepeatInterval; // offset 0xC, size 0x4, align 4
};
