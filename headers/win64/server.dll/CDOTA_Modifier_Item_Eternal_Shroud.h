#pragma once

class CDOTA_Modifier_Item_Eternal_Shroud : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_spell_resist; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_strength; // offset 0x1AAC, size 0x4, align 4
    int32 bonus_armor; // offset 0x1AB0, size 0x4, align 4
    float32 bonus_health; // offset 0x1AB4, size 0x4, align 4
    int32 mana_restore_pct; // offset 0x1AB8, size 0x4, align 4
    float32 stack_threshold; // offset 0x1ABC, size 0x4, align 4
    float32 stack_resist; // offset 0x1AC0, size 0x4, align 4
    float32 stack_duration; // offset 0x1AC4, size 0x4, align 4
    int32 max_stacks; // offset 0x1AC8, size 0x4, align 4
    float32 m_flCumulativeDamage; // offset 0x1ACC, size 0x4, align 4
};
