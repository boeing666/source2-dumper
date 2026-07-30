#pragma once

class CCitadelRankedBadgeProp : public C_DynamicProp /*0x0*/  // sizeof 0xF00, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames}
{
public:
    char _pad_0000[0xEF0]; // offset 0x0
    PackedRank_t m_unPackedRank; // offset 0xEF0, size 0x1, align 255 | MNetworkEnable
    char _pad_0EF1[0xF]; // offset 0xEF1
};
