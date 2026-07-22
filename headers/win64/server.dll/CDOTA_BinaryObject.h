#pragma once

class CDOTA_BinaryObject : public CBaseEntity /*0x0*/  // sizeof 0x4A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    bool m_bActive; // offset 0x498, size 0x1, align 1
    char _pad_0499[0x3]; // offset 0x499
    int32 m_nBinaryID; // offset 0x49C, size 0x4, align 4
};
