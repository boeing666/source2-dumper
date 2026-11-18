#pragma once

class CDOTA_Modifier_Invoker_EMP : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 area_of_effect; // offset 0x1AF8, size 0x4, align 4
    int32 mana_burned; // offset 0x1AFC, size 0x4, align 4
    float32 damage_per_mana; // offset 0x1B00, size 0x4, align 4
    float32 spell_lifesteal; // offset 0x1B04, size 0x4, align 4
    float32 spell_amp; // offset 0x1B08, size 0x4, align 4
    int32 self_mana_restore_pct; // offset 0x1B0C, size 0x4, align 4
    CHandle< CBaseEntity > m_hPullThinker; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
