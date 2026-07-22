#pragma once

class CCitadel_DynamicProp : public CDynamicProp /*0x0*/  // sizeof 0xD00, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCE0]; // offset 0x0
    CUtlString m_strDefaultSkin; // offset 0xCE0, size 0x8, align 8 | MNetworkEnable
    CUtlString m_strFriendlySkin; // offset 0xCE8, size 0x8, align 8 | MNetworkEnable
    CUtlString m_strEnemySkin; // offset 0xCF0, size 0x8, align 8 | MNetworkEnable
    bool m_bIsWorld; // offset 0xCF8, size 0x1, align 1 | MNetworkEnable
    char _pad_0CF9[0x7]; // offset 0xCF9
};
