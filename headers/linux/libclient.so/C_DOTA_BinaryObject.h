#pragma once

class C_DOTA_BinaryObject : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xD38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD32]; // offset 0x0
    bool m_bActive; // offset 0xD32, size 0x1, align 1
    char _pad_0D33[0x1]; // offset 0xD33
    int32 m_nBinaryID; // offset 0xD34, size 0x4, align 4
};
