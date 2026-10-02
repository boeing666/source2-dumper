#pragma once

class CCitadel_DynamicProp : public CDynamicProp /*0x0*/  // sizeof 0xDD0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xDB0]; // offset 0x0
    CUtlString m_strDefaultSkin; // offset 0xDB0, size 0x8, align 8
    CUtlString m_strFriendlySkin; // offset 0xDB8, size 0x8, align 8
    CUtlString m_strEnemySkin; // offset 0xDC0, size 0x8, align 8
    bool m_bIsWorld; // offset 0xDC8, size 0x1, align 1
    char _pad_0DC9[0x7]; // offset 0xDC9
};
