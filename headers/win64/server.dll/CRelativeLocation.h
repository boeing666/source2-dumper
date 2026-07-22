#pragma once

class CRelativeLocation  // sizeof 0x40, align 0xFF [trivial_dtor] (server)
{
public:
    char _pad_0000[0x18]; // offset 0x0
    RelativeLocationType_t m_Type; // offset 0x18, size 0x1, align 1
    char _pad_0019[0x3]; // offset 0x19
    Vector m_vRelativeOffset; // offset 0x1C, size 0xC, align 4
    VectorWS m_vWorldSpacePos; // offset 0x28, size 0xC, align 4
    CHandle< CBaseEntity > m_hEntity; // offset 0x34, size 0x4, align 4
    uint32 m_nNavAreaID; // offset 0x38, size 0x4, align 4
    uint32 m_nSpaceBlockID; // offset 0x3C, size 0x4, align 4
};
