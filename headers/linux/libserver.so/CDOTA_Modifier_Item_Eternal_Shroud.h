#pragma once

class CDOTA_Modifier_Item_Eternal_Shroud : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_spell_resist; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_strength; // offset 0x1AFC, size 0x4, align 4
    int32 bonus_armor; // offset 0x1B00, size 0x4, align 4
    float32 bonus_health; // offset 0x1B04, size 0x4, align 4
    int32 mana_restore_pct; // offset 0x1B08, size 0x4, align 4
    float32 stack_threshold; // offset 0x1B0C, size 0x4, align 4
    float32 stack_resist; // offset 0x1B10, size 0x4, align 4
    float32 stack_duration; // offset 0x1B14, size 0x4, align 4
    int32 max_stacks; // offset 0x1B18, size 0x4, align 4
    float32 m_flCumulativeDamage; // offset 0x1B1C, size 0x4, align 4
};
