#pragma once

struct AI_MovementPoseTransitionCondition_t  // sizeof 0x10, align 0x8 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    CGlobalSymbol m_sGaitSet; // offset 0x0, size 0x8, align 8
    StanceType_t m_eStance; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
};
