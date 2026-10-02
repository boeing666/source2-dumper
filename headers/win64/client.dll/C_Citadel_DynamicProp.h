#pragma once

class C_Citadel_DynamicProp : public C_DynamicProp /*0x0*/  // sizeof 0x10F0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x10C0]; // offset 0x0
    int32 m_nPlayerTeamEvent; // offset 0x10C0, size 0x4, align 4 | MNotSaved
    char _pad_10C4[0x4]; // offset 0x10C4
    CUtlString m_strDefaultSkin; // offset 0x10C8, size 0x8, align 8
    CUtlString m_strFriendlySkin; // offset 0x10D0, size 0x8, align 8
    CUtlString m_strEnemySkin; // offset 0x10D8, size 0x8, align 8
    bool m_bIsWorld; // offset 0x10E0, size 0x1, align 1
    char _pad_10E1[0xF]; // offset 0x10E1
};
