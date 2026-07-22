#pragma once

class CInfoTrooperNeutralCamp : public CPointEntity /*0x0*/  // sizeof 0x508, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0x4A0, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    char _pad_04C0[0x18]; // offset 0x4C0
    CUtlSymbolLarge m_iszCampName; // offset 0x4D8, size 0x8, align 8
    char _pad_04E0[0x28]; // offset 0x4E0
};
