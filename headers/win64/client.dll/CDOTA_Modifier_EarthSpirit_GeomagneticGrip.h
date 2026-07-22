#pragma once

class CDOTA_Modifier_EarthSpirit_GeomagneticGrip : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 radius; // offset 0x1A58, size 0x4, align 4
    float32 rock_damage; // offset 0x1A5C, size 0x4, align 4
    float32 pull_units_per_second; // offset 0x1A60, size 0x4, align 4
    float32 pull_units_per_second_heroes; // offset 0x1A64, size 0x4, align 4
    float32 total_pull_distance; // offset 0x1A68, size 0x4, align 4
    float32 duration; // offset 0x1A6C, size 0x4, align 4
    bool m_bUsedStone; // offset 0x1A70, size 0x1, align 1
    char _pad_1A71[0x3]; // offset 0x1A71
    VectorWS m_vDestination; // offset 0x1A74, size 0xC, align 4
    VectorWS m_vLocation; // offset 0x1A80, size 0xC, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
    CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities; // offset 0x1A90, size 0x18, align 8
};
