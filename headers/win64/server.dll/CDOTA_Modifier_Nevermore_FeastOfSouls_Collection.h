#pragma once

class CDOTA_Modifier_Nevermore_FeastOfSouls_Collection : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 max_collection_count; // offset 0x1AF8, size 0x4, align 4
    int32 soul_collection_per_interval; // offset 0x1AFC, size 0x4, align 4
    float32 soul_collection_radius; // offset 0x1B00, size 0x4, align 4
    float32 soul_collection_interval; // offset 0x1B04, size 0x4, align 4
    int32 soul_collection_per_hero; // offset 0x1B08, size 0x4, align 4
    int32 soul_collection_per_creep; // offset 0x1B0C, size 0x4, align 4
    float32 heal_per_soul; // offset 0x1B10, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1B14, size 0x4, align 4
    int32 cast_speed_pct; // offset 0x1B18, size 0x4, align 4
    int32 m_nSoulsCollected; // offset 0x1B1C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hSoulCollectionList; // offset 0x1B20, size 0x18, align 8
};
