#pragma once

class CDOTA_Modifier_Invoker_EMP : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 area_of_effect; // offset 0x1A58, size 0x4, align 4
    int32 mana_burned; // offset 0x1A5C, size 0x4, align 4
    float32 damage_per_mana; // offset 0x1A60, size 0x4, align 4
    float32 spell_lifesteal; // offset 0x1A64, size 0x4, align 4
    float32 spell_amp; // offset 0x1A68, size 0x4, align 4
    int32 self_mana_restore_pct; // offset 0x1A6C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPullThinker; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
};
