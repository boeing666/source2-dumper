#pragma once

class CCitadelRankedBadgeProp : public C_DynamicProp /*0x0*/  // sizeof 0x1060, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1050]; // offset 0x0
    PackedRank_t m_unPackedRank; // offset 0x1050, size 0x1, align 255
    char _pad_1051[0xF]; // offset 0x1051
};
