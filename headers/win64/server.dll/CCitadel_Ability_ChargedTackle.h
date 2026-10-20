#pragma once

class CCitadel_Ability_ChargedTackle : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1B20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1AD8]; // offset 0x0
    bool m_bPreparing; // offset 0x1AD8, size 0x1, align 1
    bool m_bTackling; // offset 0x1AD9, size 0x1, align 1
    char _pad_1ADA[0x2]; // offset 0x1ADA
    GameTime_t m_flTackleStartTime; // offset 0x1ADC, size 0x4, align 255
    GameTime_t m_flPrepareStartTime; // offset 0x1AE0, size 0x4, align 255
    Vector m_vecTackleDir; // offset 0x1AE4, size 0xC, align 4
    VectorWS m_vecLastPosition; // offset 0x1AF0, size 0xC, align 4
    int32 m_nStuckFramesCount; // offset 0x1AFC, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // offset 0x1B00, size 0x18, align 8
    ParticleIndex_t m_nDistancePreview; // offset 0x1B18, size 0x4, align 255
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
