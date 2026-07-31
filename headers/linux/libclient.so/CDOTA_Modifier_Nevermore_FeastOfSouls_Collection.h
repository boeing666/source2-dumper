#pragma once

class CDOTA_Modifier_Nevermore_FeastOfSouls_Collection : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 max_collection_count; // offset 0x1A78, size 0x4, align 4
    int32 soul_collection_per_interval; // offset 0x1A7C, size 0x4, align 4
    float32 soul_collection_radius; // offset 0x1A80, size 0x4, align 4
    float32 soul_collection_interval; // offset 0x1A84, size 0x4, align 4
    int32 soul_collection_per_hero; // offset 0x1A88, size 0x4, align 4
    int32 soul_collection_per_creep; // offset 0x1A8C, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1A90, size 0x4, align 4
    int32 cast_speed_pct; // offset 0x1A94, size 0x4, align 4
};
