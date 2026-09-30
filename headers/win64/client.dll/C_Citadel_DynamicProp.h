#pragma once

class C_Citadel_DynamicProp : public C_DynamicProp /*0x0*/  // sizeof 0x1090, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1060]; // offset 0x0
    int32 m_nPlayerTeamEvent; // offset 0x1060, size 0x4, align 4 | MNotSaved
    char _pad_1064[0x4]; // offset 0x1064
    CUtlString m_strDefaultSkin; // offset 0x1068, size 0x8, align 8
    CUtlString m_strFriendlySkin; // offset 0x1070, size 0x8, align 8
    CUtlString m_strEnemySkin; // offset 0x1078, size 0x8, align 8
    bool m_bIsWorld; // offset 0x1080, size 0x1, align 1
    char _pad_1081[0xF]; // offset 0x1081
};
