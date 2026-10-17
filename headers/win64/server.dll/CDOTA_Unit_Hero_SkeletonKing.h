#pragma once

class CDOTA_Unit_Hero_SkeletonKing : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2058, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2020]; // offset 0x0
    int32 m_nSkeletonWarriors; // offset 0x2020, size 0x4, align 4
    int32[6] m_vecInitialHeroKillBitmask; // offset 0x2024, size 0x18, align 4
    int32[6] m_vecInGameHeroKillBitmask; // offset 0x203C, size 0x18, align 4
    char _pad_2054[0x4]; // offset 0x2054
};
