#pragma once

class C_DOTA_BinaryObject : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xDA0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD9A]; // offset 0x0
    bool m_bActive; // offset 0xD9A, size 0x1, align 1
    char _pad_0D9B[0x1]; // offset 0xD9B
    int32 m_nBinaryID; // offset 0xD9C, size 0x4, align 4
};
