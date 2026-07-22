#pragma once

class C_DOTA_BinaryObject : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC42]; // offset 0x0
    bool m_bActive; // offset 0xC42, size 0x1, align 1
    char _pad_0C43[0x1]; // offset 0xC43
    int32 m_nBinaryID; // offset 0xC44, size 0x4, align 4
};
