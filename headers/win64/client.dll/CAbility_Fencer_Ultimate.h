#pragma once

class CAbility_Fencer_Ultimate : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x20E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    VectorWS m_vStartPosition; // offset 0x16D8, size 0xC, align 4
    Vector m_vDashDirection; // offset 0x16E4, size 0xC, align 4
    VectorWS m_vecLastPosition; // offset 0x16F0, size 0xC, align 4
    EFencerUltState_t m_eUltState; // offset 0x16FC, size 0x1, align 1
    char _pad_16FD[0x3]; // offset 0x16FD
    GameTime_t m_flStateStartTime; // offset 0x1700, size 0x4, align 255
    bool m_bHitSomeone; // offset 0x1704, size 0x1, align 1
    char _pad_1705[0x3]; // offset 0x1705
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies; // offset 0x1708, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitHeroes; // offset 0x1720, size 0x18, align 8
    GameTime_t m_flStuckTime; // offset 0x1738, size 0x4, align 255
    ParticleIndex_t m_UltHoldVFX; // offset 0x173C, size 0x4, align 255
    ParticleIndex_t m_DirPreviewVFX; // offset 0x1740, size 0x4, align 255
    char _pad_1744[0x9A4]; // offset 0x1744
};
