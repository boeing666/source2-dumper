#pragma once

class C_DOTA_Ability_Pangolier_Swashbuckle : public C_DOTABaseAbility /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 dash_speed; // offset 0x824, size 0x4, align 4
    float32 start_radius; // offset 0x828, size 0x4, align 4
    float32 end_radius; // offset 0x82C, size 0x4, align 4
    float32 range; // offset 0x830, size 0x4, align 4
    float32 damage; // offset 0x834, size 0x4, align 4
    float32 attack_damage; // offset 0x838, size 0x4, align 4
    int32 procs_onhit_effects; // offset 0x83C, size 0x4, align 4
    float32 slow_duration; // offset 0x840, size 0x4, align 4
    char _pad_0844[0x4]; // offset 0x844
};
