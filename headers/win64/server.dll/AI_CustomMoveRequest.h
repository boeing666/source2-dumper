#pragma once

class AI_CustomMoveRequest  // sizeof 0x58, align 0x8 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
public:
    CGlobalSymbol m_sType; // offset 0x0, size 0x8, align 8
    CAI_InterestTarget m_interestTarget; // offset 0x8, size 0x34, align 4
    bool m_bForceInterrupt; // offset 0x3C, size 0x1, align 1
    char _pad_003D[0x3]; // offset 0x3D
    float32 m_flMinPathLength; // offset 0x40, size 0x4, align 4
    float32 m_flAngleThreshold; // offset 0x44, size 0x4, align 4
    VectorWS m_vTargetPosition; // offset 0x48, size 0xC, align 4
    char _pad_0054[0x4]; // offset 0x54
};
