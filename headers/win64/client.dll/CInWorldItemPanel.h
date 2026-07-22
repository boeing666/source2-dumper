#pragma once

class CInWorldItemPanel : public C_PointClientUIWorldPanel /*0x0*/  // sizeof 0xC10, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xC00]; // offset 0x0
    CHandle< C_BaseEntity > m_hTrackedEntity; // offset 0xC00, size 0x4, align 4 | MNotSaved
    int32 m_nTrackedEntity; // offset 0xC04, size 0x4, align 4
    char _pad_0C08[0x8]; // offset 0xC08
};
