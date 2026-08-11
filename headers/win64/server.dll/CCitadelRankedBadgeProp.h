#pragma once

class CCitadelRankedBadgeProp : public CDynamicProp /*0x0*/  // sizeof 0xCE0, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames}
{
public:
    char _pad_0000[0xCD0]; // offset 0x0
    PackedRank_t m_unPackedRank; // offset 0xCD0, size 0x1, align 255 | MNetworkEnable
    char _pad_0CD1[0xF]; // offset 0xCD1
};
