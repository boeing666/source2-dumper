#pragma once

class CDOTA_Modifier_Mars_ArenaOfBlood : public CDOTA_Buff /*0x0*/  // sizeof 0x1B60, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    int32 width; // offset 0x1AFC, size 0x4, align 4
    int32 spear_damage; // offset 0x1B00, size 0x4, align 4
    int32 spear_distance_from_wall; // offset 0x1B04, size 0x4, align 4
    float32 spear_attack_interval; // offset 0x1B08, size 0x4, align 4
    bool pierces_debuff_immunity; // offset 0x1B0C, size 0x1, align 1
    char _pad_1B0D[0x33]; // offset 0x1B0D
    int32 m_hObstruction; // offset 0x1B40, size 0x4, align 4
    char _pad_1B44[0x4]; // offset 0x1B44
    CUtlVector< VectorWS > m_vecAvoidLocations; // offset 0x1B48, size 0x18, align 8
};
