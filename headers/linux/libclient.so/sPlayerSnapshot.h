#pragma once

class sPlayerSnapshot  // sizeof 0x40, align 0xFF [trivial_dtor] (client)
{
public:
    AbilityID_t[11] m_nItemAbilityID; // offset 0x0, size 0x2C, align 4
    float32 m_fGameTime; // offset 0x2C, size 0x4, align 4
    uint8 unKills; // offset 0x30, size 0x1, align 1
    uint8 unDeaths; // offset 0x31, size 0x1, align 1
    uint8 unAssists; // offset 0x32, size 0x1, align 1
    uint8 unLevel; // offset 0x33, size 0x1, align 1
    uint32 unLastHits; // offset 0x34, size 0x4, align 4
    uint32 unDenies; // offset 0x38, size 0x4, align 4
    uint8 unFlags; // offset 0x3C, size 0x1, align 1
    char _pad_003D[0x3]; // offset 0x3D
};
