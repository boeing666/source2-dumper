#pragma once

class CDOTA_Modifier_Mars_ArenaOfBlood : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    int32 width; // offset 0x1A7C, size 0x4, align 4
    int32 spear_damage; // offset 0x1A80, size 0x4, align 4
    int32 spear_distance_from_wall; // offset 0x1A84, size 0x4, align 4
    float32 spear_attack_interval; // offset 0x1A88, size 0x4, align 4
    bool pierces_debuff_immunity; // offset 0x1A8C, size 0x1, align 1
    char _pad_1A8D[0x33]; // offset 0x1A8D
    int32 m_hObstruction; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
    CUtlVector< VectorWS > m_vecAvoidLocations; // offset 0x1AC8, size 0x18, align 8
};
