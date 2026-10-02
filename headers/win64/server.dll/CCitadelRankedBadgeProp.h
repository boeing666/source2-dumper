#pragma once

class CCitadelRankedBadgeProp : public CDynamicProp /*0x0*/  // sizeof 0xDB0, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    PackedRank_t m_unPackedRank; // offset 0xDA0, size 0x1, align 255
    char _pad_0DA1[0xF]; // offset 0xDA1
};
