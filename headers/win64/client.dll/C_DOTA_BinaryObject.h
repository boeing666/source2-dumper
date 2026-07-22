#pragma once

class C_DOTA_BinaryObject : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xAC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xAC0]; // offset 0x0
    bool m_bActive; // offset 0xAC0, size 0x1, align 1
    char _pad_0AC1[0x3]; // offset 0xAC1
    int32 m_nBinaryID; // offset 0xAC4, size 0x4, align 4
};
