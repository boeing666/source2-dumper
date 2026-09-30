#pragma once

class CCitadelRankedBadgeProp : public CDynamicProp /*0x0*/  // sizeof 0xD60, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xD50]; // offset 0x0
    PackedRank_t m_unPackedRank; // offset 0xD50, size 0x1, align 255
    char _pad_0D51[0xF]; // offset 0xD51
};
