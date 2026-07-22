#pragma once

class CCSPlayer_ItemServices : public CPlayer_ItemServices /*0x0*/  // sizeof 0x50, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    bool m_bHasDefuser; // offset 0x48, size 0x1, align 1
    bool m_bHasHelmet; // offset 0x49, size 0x1, align 1
    char _pad_004A[0x6]; // offset 0x4A
};
