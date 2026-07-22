#pragma once

class C_DOTA_Ability_Pangolier_Swashbuckle : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 dash_speed; // offset 0x6A8, size 0x4, align 4
    float32 start_radius; // offset 0x6AC, size 0x4, align 4
    float32 end_radius; // offset 0x6B0, size 0x4, align 4
    float32 range; // offset 0x6B4, size 0x4, align 4
    float32 damage; // offset 0x6B8, size 0x4, align 4
    float32 attack_damage; // offset 0x6BC, size 0x4, align 4
    int32 procs_onhit_effects; // offset 0x6C0, size 0x4, align 4
    float32 slow_duration; // offset 0x6C4, size 0x4, align 4
};
