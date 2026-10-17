#pragma once

class CDOTA_Modifier_Nevermore_FeastOfSouls_Collection : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 max_collection_count; // offset 0x1AA8, size 0x4, align 4
    int32 soul_collection_per_interval; // offset 0x1AAC, size 0x4, align 4
    float32 soul_collection_radius; // offset 0x1AB0, size 0x4, align 4
    float32 soul_collection_interval; // offset 0x1AB4, size 0x4, align 4
    int32 soul_collection_per_hero; // offset 0x1AB8, size 0x4, align 4
    int32 soul_collection_per_creep; // offset 0x1ABC, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1AC0, size 0x4, align 4
    int32 cast_speed_pct; // offset 0x1AC4, size 0x4, align 4
};
