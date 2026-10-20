#pragma once

class CCitadel_Ability_Tengu_StoneForm : public CCitadelBaseAbility /*0x0*/  // sizeof 0x19C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1990]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0x1990, size 0x4, align 255
    GameTime_t m_flLandedTime; // offset 0x1994, size 0x4, align 255
    bool m_bLanded; // offset 0x1998, size 0x1, align 1
    bool m_bFalling; // offset 0x1999, size 0x1, align 1
    bool m_bInStoneForm; // offset 0x199A, size 0x1, align 1
    char _pad_199B[0x1]; // offset 0x199B
    float32 m_flStartHeight; // offset 0x199C, size 0x4, align 4
    ParticleIndex_t m_nStoneFormEffect; // offset 0x19A0, size 0x4, align 255
    char _pad_19A4[0x4]; // offset 0x19A4
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0x19A8, size 0x18, align 8
};
