#pragma once

class CPathSimple : public CBaseEntity /*0x0*/  // sizeof 0x5B0, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CPathQueryComponent m_CPathQueryComponent; // offset 0x4B0, size 0xA0, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    char _pad_0550[0x50]; // offset 0x550
    CUtlString m_pathString; // offset 0x5A0, size 0x8, align 8 | MNetworkEnable
    bool m_bClosedLoop; // offset 0x5A8, size 0x1, align 1
    char _pad_05A9[0x7]; // offset 0x5A9
};
