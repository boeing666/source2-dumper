#pragma once

class CDOTA_Modifier_EarthSpirit_GeomagneticGrip : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 radius; // offset 0x1AA8, size 0x4, align 4
    float32 rock_damage; // offset 0x1AAC, size 0x4, align 4
    float32 pull_units_per_second; // offset 0x1AB0, size 0x4, align 4
    float32 pull_units_per_second_heroes; // offset 0x1AB4, size 0x4, align 4
    float32 total_pull_distance; // offset 0x1AB8, size 0x4, align 4
    float32 duration; // offset 0x1ABC, size 0x4, align 4
    bool m_bUsedStone; // offset 0x1AC0, size 0x1, align 1
    char _pad_1AC1[0x3]; // offset 0x1AC1
    VectorWS m_vDestination; // offset 0x1AC4, size 0xC, align 4
    VectorWS m_vLocation; // offset 0x1AD0, size 0xC, align 4
    char _pad_1ADC[0x4]; // offset 0x1ADC
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x1AE0, size 0x18, align 8
};
