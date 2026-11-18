#pragma once

class CDOTA_Modifier_Batrider_Smoldering_Resin_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 damage; // offset 0x1AF8, size 0x4, align 4
    float32 tick_rate; // offset 0x1AFC, size 0x4, align 4
    int32 tick_attack_damage_pct; // offset 0x1B00, size 0x4, align 4
    int32 total_ticks; // offset 0x1B04, size 0x4, align 4
    CUtlVector< float32 > m_nDamageQueue; // offset 0x1B08, size 0x18, align 8
};
