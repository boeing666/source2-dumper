#pragma once

class CDOTA_Modifier_EarthSpirit_GeomagneticGrip : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    float32 rock_damage; // offset 0x1A7C, size 0x4, align 4
    float32 pull_units_per_second; // offset 0x1A80, size 0x4, align 4
    float32 pull_units_per_second_heroes; // offset 0x1A84, size 0x4, align 4
    float32 total_pull_distance; // offset 0x1A88, size 0x4, align 4
    float32 duration; // offset 0x1A8C, size 0x4, align 4
    bool m_bUsedStone; // offset 0x1A90, size 0x1, align 1
    char _pad_1A91[0x3]; // offset 0x1A91
    VectorWS m_vDestination; // offset 0x1A94, size 0xC, align 4
    VectorWS m_vLocation; // offset 0x1AA0, size 0xC, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
    CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities; // offset 0x1AB0, size 0x18, align 8
};
