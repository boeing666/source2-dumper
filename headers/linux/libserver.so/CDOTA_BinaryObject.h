#pragma once

class CDOTA_BinaryObject : public CBaseEntity /*0x0*/  // sizeof 0x780, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bActive; // offset 0x778, size 0x1, align 1
    char _pad_0779[0x3]; // offset 0x779
    int32 m_nBinaryID; // offset 0x77C, size 0x4, align 4
};
