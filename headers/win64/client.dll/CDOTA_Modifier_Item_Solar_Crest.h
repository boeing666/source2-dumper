#pragma once

class CDOTA_Modifier_Item_Solar_Crest : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 bonus_mana; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_armor; // offset 0x1AFC, size 0x4, align 4
    int32 bonus_all_stats; // offset 0x1B00, size 0x4, align 4
    int32 bonus_health; // offset 0x1B04, size 0x4, align 4
    int32 self_movement_speed; // offset 0x1B08, size 0x4, align 4
    ParticleIndex_t nFXIndex; // offset 0x1B0C, size 0x4, align 255
};
