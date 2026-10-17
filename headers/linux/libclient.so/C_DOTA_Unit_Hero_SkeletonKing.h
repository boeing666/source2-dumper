#pragma once

class C_DOTA_Unit_Hero_SkeletonKing : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2040, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x200C]; // offset 0x0
    int32 m_nSkeletonWarriors; // offset 0x200C, size 0x4, align 4
    int32[6] m_vecInitialHeroKillBitmask; // offset 0x2010, size 0x18, align 4
    int32[6] m_vecInGameHeroKillBitmask; // offset 0x2028, size 0x18, align 4
};
