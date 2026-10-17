#pragma once

class C_DOTA_BinaryObject : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xBB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    bool m_bActive; // offset 0xBB0, size 0x1, align 1
    char _pad_0BB1[0x3]; // offset 0xBB1
    int32 m_nBinaryID; // offset 0xBB4, size 0x4, align 4
};
