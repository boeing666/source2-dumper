#pragma once

class CCitadelRankedBadgeProp : public C_DynamicProp /*0x0*/  // sizeof 0x10C0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x10B0]; // offset 0x0
    PackedRank_t m_unPackedRank; // offset 0x10B0, size 0x1, align 255
    char _pad_10B1[0xF]; // offset 0x10B1
};
