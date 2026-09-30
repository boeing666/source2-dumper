#pragma once

class CAbility_Fencer_Ultimate : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1EB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    VectorWS m_vStartPosition; // offset 0x14A0, size 0xC, align 4
    Vector m_vDashDirection; // offset 0x14AC, size 0xC, align 4
    VectorWS m_vecLastPosition; // offset 0x14B8, size 0xC, align 4
    EFencerUltState_t m_eUltState; // offset 0x14C4, size 0x1, align 1
    char _pad_14C5[0x3]; // offset 0x14C5
    GameTime_t m_flStateStartTime; // offset 0x14C8, size 0x4, align 255
    bool m_bHitSomeone; // offset 0x14CC, size 0x1, align 1
    char _pad_14CD[0x3]; // offset 0x14CD
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // offset 0x14D0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecHitHeroes; // offset 0x14E8, size 0x18, align 8
    GameTime_t m_flStuckTime; // offset 0x1500, size 0x4, align 255
    ParticleIndex_t m_UltHoldVFX; // offset 0x1504, size 0x4, align 255
    ParticleIndex_t m_DirPreviewVFX; // offset 0x1508, size 0x4, align 255
    char _pad_150C[0x9A4]; // offset 0x150C
};
