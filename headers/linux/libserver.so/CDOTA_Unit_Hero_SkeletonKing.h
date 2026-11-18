#pragma once

class CDOTA_Unit_Hero_SkeletonKing : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x23C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2390]; // offset 0x0
    int32 m_nSkeletonWarriors; // offset 0x2390, size 0x4, align 4
    int32[6] m_vecInitialHeroKillBitmask; // offset 0x2394, size 0x18, align 4
    int32[6] m_vecInGameHeroKillBitmask; // offset 0x23AC, size 0x18, align 4
    char _pad_23C4[0x4]; // offset 0x23C4
};
