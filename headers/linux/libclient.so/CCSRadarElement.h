#pragma once

class CCSRadarElement : public C_BaseEntity /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x798]; // offset 0x0
    uint32 m_nElementType; // offset 0x798, size 0x4, align 4
    uint32 m_nElementColor; // offset 0x79C, size 0x4, align 4
    uint32 m_nTeamFilter; // offset 0x7A0, size 0x4, align 4
    char _pad_07A4[0x4]; // offset 0x7A4
};
