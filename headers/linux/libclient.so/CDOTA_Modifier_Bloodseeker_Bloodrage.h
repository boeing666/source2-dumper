#pragma once

class CDOTA_Modifier_Bloodseeker_Bloodrage : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 attack_speed; // offset 0x1A78, size 0x4, align 4
    int32 spell_amp; // offset 0x1A7C, size 0x4, align 4
    float32 max_health_dmg_pct; // offset 0x1A80, size 0x4, align 4
    float32 damage_pct; // offset 0x1A84, size 0x4, align 4
    float32 base_damage_amp; // offset 0x1A88, size 0x4, align 4
    float32 flTickRate; // offset 0x1A8C, size 0x4, align 4
};
