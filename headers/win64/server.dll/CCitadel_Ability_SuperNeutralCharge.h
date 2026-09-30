#pragma once

class CCitadel_Ability_SuperNeutralCharge : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1A80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1A20]; // offset 0x0
    bool m_bPreparing; // offset 0x1A20, size 0x1, align 1
    bool m_bTackling; // offset 0x1A21, size 0x1, align 1
    char _pad_1A22[0x2]; // offset 0x1A22
    GameTime_t m_flTackleStartTime; // offset 0x1A24, size 0x4, align 255
    float32 m_flTackleDuration; // offset 0x1A28, size 0x4, align 4
    Vector m_vecTackleDir; // offset 0x1A2C, size 0xC, align 4
    VectorWS m_vecLastPosition; // offset 0x1A38, size 0xC, align 4
    int32 m_nStuckFramesCount; // offset 0x1A44, size 0x4, align 4
    CUtlVector< CEntityIndex > m_vecHitEnemies; // offset 0x1A48, size 0x18, align 8
    GameTime_t m_flPrepareStartTime; // offset 0x1A60, size 0x4, align 255
    ParticleIndex_t m_nDistancePreview; // offset 0x1A64, size 0x4, align 255
    char _pad_1A68[0x18]; // offset 0x1A68
};
