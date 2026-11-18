#pragma once

class CDOTA_Modifier_EarthSpirit_GeomagneticGrip : public CDOTA_Buff /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    float32 rock_damage; // offset 0x1AFC, size 0x4, align 4
    float32 pull_units_per_second; // offset 0x1B00, size 0x4, align 4
    float32 pull_units_per_second_heroes; // offset 0x1B04, size 0x4, align 4
    float32 total_pull_distance; // offset 0x1B08, size 0x4, align 4
    float32 duration; // offset 0x1B0C, size 0x4, align 4
    bool m_bUsedStone; // offset 0x1B10, size 0x1, align 1
    char _pad_1B11[0x3]; // offset 0x1B11
    VectorWS m_vDestination; // offset 0x1B14, size 0xC, align 4
    VectorWS m_vLocation; // offset 0x1B20, size 0xC, align 4
    char _pad_1B2C[0x4]; // offset 0x1B2C
    CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities; // offset 0x1B30, size 0x18, align 8
};
