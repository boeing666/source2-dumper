#pragma once

class C_DOTA_Unit_Hero_SkeletonKing : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1DB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1D80]; // offset 0x0
    int32 m_nSkeletonWarriors; // offset 0x1D80, size 0x4, align 4
    int32[6] m_vecInitialHeroKillBitmask; // offset 0x1D84, size 0x18, align 4
    int32[6] m_vecInGameHeroKillBitmask; // offset 0x1D9C, size 0x18, align 4
    char _pad_1DB4[0x4]; // offset 0x1DB4
};
