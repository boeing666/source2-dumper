#pragma once

class CCitadel_Ability_SuperNeutralCharge : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1CB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1C58]; // offset 0x0
    bool m_bPreparing; // offset 0x1C58, size 0x1, align 1
    bool m_bTackling; // offset 0x1C59, size 0x1, align 1
    char _pad_1C5A[0x2]; // offset 0x1C5A
    GameTime_t m_flTackleStartTime; // offset 0x1C5C, size 0x4, align 255
    float32 m_flTackleDuration; // offset 0x1C60, size 0x4, align 4
    Vector m_vecTackleDir; // offset 0x1C64, size 0xC, align 4
    VectorWS m_vecLastPosition; // offset 0x1C70, size 0xC, align 4
    int32 m_nStuckFramesCount; // offset 0x1C7C, size 0x4, align 4
    CUtlVector< CEntityIndex > m_vecHitEnemies; // offset 0x1C80, size 0x18, align 8
    GameTime_t m_flPrepareStartTime; // offset 0x1C98, size 0x4, align 255
    ParticleIndex_t m_nDistancePreview; // offset 0x1C9C, size 0x4, align 255
    char _pad_1CA0[0x18]; // offset 0x1CA0
};
