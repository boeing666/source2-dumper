#pragma once

struct PathMotorSettings_t  // sizeof 0x58, align 0x8 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    CGlobalSymbol m_sArrivalMovementGaitSet; // offset 0x0, size 0x8, align 8
    StanceType_t m_eArrivalStance; // offset 0x8, size 0x4, align 4
    StanceType_t m_eStance; // offset 0xC, size 0x4, align 4
    AI_Strafing_t m_eStrafing; // offset 0x10, size 0x1, align 1
    SharedMovementGait_t m_eMovementGait; // offset 0x11, size 0x1, align 1
    char _pad_0012[0x2]; // offset 0x12
    CAI_InterestTarget m_facingTarget; // offset 0x14, size 0x34, align 4
    float32 m_flMovementSpeed; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x4]; // offset 0x4C
    CGlobalSymbol m_sMovementGaitSet; // offset 0x50, size 0x8, align 8
};
