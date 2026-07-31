#pragma once

class C_DOTA_Unit_Hero_SkeletonKing : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1DC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1D88]; // offset 0x0
    int32 m_nSkeletonWarriors; // offset 0x1D88, size 0x4, align 4
    int32[6] m_vecInitialHeroKillBitmask; // offset 0x1D8C, size 0x18, align 4
    int32[6] m_vecInGameHeroKillBitmask; // offset 0x1DA4, size 0x18, align 4
    char _pad_1DBC[0x4]; // offset 0x1DBC
};
