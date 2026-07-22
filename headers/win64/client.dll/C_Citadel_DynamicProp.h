#pragma once

class C_Citadel_DynamicProp : public C_DynamicProp /*0x0*/  // sizeof 0xF30, align 0x10 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF00]; // offset 0x0
    int32 m_nPlayerTeamEvent; // offset 0xF00, size 0x4, align 4 | MNotSaved
    char _pad_0F04[0x4]; // offset 0xF04
    CUtlString m_strDefaultSkin; // offset 0xF08, size 0x8, align 8 | MNetworkEnable
    CUtlString m_strFriendlySkin; // offset 0xF10, size 0x8, align 8 | MNetworkEnable
    CUtlString m_strEnemySkin; // offset 0xF18, size 0x8, align 8 | MNetworkEnable
    bool m_bIsWorld; // offset 0xF20, size 0x1, align 1 | MNetworkEnable
    char _pad_0F21[0xF]; // offset 0xF21
};
