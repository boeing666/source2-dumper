#pragma once

class CCitadel_DynamicProp : public CDynamicProp /*0x0*/  // sizeof 0xD80, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD60]; // offset 0x0
    CUtlString m_strDefaultSkin; // offset 0xD60, size 0x8, align 8
    CUtlString m_strFriendlySkin; // offset 0xD68, size 0x8, align 8
    CUtlString m_strEnemySkin; // offset 0xD70, size 0x8, align 8
    bool m_bIsWorld; // offset 0xD78, size 0x1, align 1
    char _pad_0D79[0x7]; // offset 0xD79
};
