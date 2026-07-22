#pragma once

class CCitadel_BaseProp_MidStairs : public CPointEntity /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0x4A0, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    EMidStairsLocation_t m_eLocation; // offset 0x4C0, size 0x4, align 4 | MNetworkEnable
    char _pad_04C4[0x4]; // offset 0x4C4
};
