#pragma once

struct AI_MovementPoseTransition_t  // sizeof 0x28, align 0x8 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    CGlobalSymbol m_sName; // offset 0x0, size 0x8, align 8
    AI_MovementPoseTransitionCondition_t m_sourceCondition; // offset 0x8, size 0x10, align 8
    AI_MovementPoseTransitionCondition_t m_desiredCondition; // offset 0x18, size 0x10, align 8
};
