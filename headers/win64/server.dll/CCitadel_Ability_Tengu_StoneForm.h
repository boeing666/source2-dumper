#pragma once

class CCitadel_Ability_Tengu_StoneForm : public CCitadelBaseAbility /*0x0*/  // sizeof 0x19B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1988]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0x1988, size 0x4, align 255
    GameTime_t m_flLandedTime; // offset 0x198C, size 0x4, align 255
    bool m_bLanded; // offset 0x1990, size 0x1, align 1
    bool m_bFalling; // offset 0x1991, size 0x1, align 1
    bool m_bInStoneForm; // offset 0x1992, size 0x1, align 1
    char _pad_1993[0x1]; // offset 0x1993
    float32 m_flStartHeight; // offset 0x1994, size 0x4, align 4
    ParticleIndex_t m_nStoneFormEffect; // offset 0x1998, size 0x4, align 255
    char _pad_199C[0x4]; // offset 0x199C
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0x19A0, size 0x18, align 8
};
