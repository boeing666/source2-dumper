#pragma once

class CCitadel_Ability_ChargedTackle : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1D58, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1D10]; // offset 0x0
    bool m_bPreparing; // offset 0x1D10, size 0x1, align 1
    bool m_bTackling; // offset 0x1D11, size 0x1, align 1
    char _pad_1D12[0x2]; // offset 0x1D12
    GameTime_t m_flTackleStartTime; // offset 0x1D14, size 0x4, align 255
    GameTime_t m_flPrepareStartTime; // offset 0x1D18, size 0x4, align 255
    Vector m_vecTackleDir; // offset 0x1D1C, size 0xC, align 4
    VectorWS m_vecLastPosition; // offset 0x1D28, size 0xC, align 4
    int32 m_nStuckFramesCount; // offset 0x1D34, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies; // offset 0x1D38, size 0x18, align 8
    ParticleIndex_t m_nDistancePreview; // offset 0x1D50, size 0x4, align 255
    char _pad_1D54[0x4]; // offset 0x1D54
};
