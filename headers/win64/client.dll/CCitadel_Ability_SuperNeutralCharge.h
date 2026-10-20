#pragma once

class CCitadel_Ability_SuperNeutralCharge : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1CC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1C60]; // offset 0x0
    bool m_bPreparing; // offset 0x1C60, size 0x1, align 1
    bool m_bTackling; // offset 0x1C61, size 0x1, align 1
    char _pad_1C62[0x2]; // offset 0x1C62
    GameTime_t m_flTackleStartTime; // offset 0x1C64, size 0x4, align 255
    float32 m_flTackleDuration; // offset 0x1C68, size 0x4, align 4
    Vector m_vecTackleDir; // offset 0x1C6C, size 0xC, align 4
    VectorWS m_vecLastPosition; // offset 0x1C78, size 0xC, align 4
    int32 m_nStuckFramesCount; // offset 0x1C84, size 0x4, align 4
    CUtlVector< CEntityIndex > m_vecHitEnemies; // offset 0x1C88, size 0x18, align 8
    GameTime_t m_flPrepareStartTime; // offset 0x1CA0, size 0x4, align 255
    ParticleIndex_t m_nDistancePreview; // offset 0x1CA4, size 0x4, align 255
    char _pad_1CA8[0x18]; // offset 0x1CA8
};
