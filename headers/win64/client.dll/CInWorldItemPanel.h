#pragma once

class CInWorldItemPanel : public C_PointClientUIWorldPanel /*0x0*/  // sizeof 0xE20, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xE10]; // offset 0x0
    CHandle< C_BaseEntity > m_hTrackedEntity; // offset 0xE10, size 0x4, align 4 | MNotSaved
    int32 m_nTrackedEntity; // offset 0xE14, size 0x4, align 4
    char _pad_0E18[0x8]; // offset 0xE18
};
