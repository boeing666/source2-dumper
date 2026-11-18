#pragma once

class C_DOTA_Ability_Eimermole_MinersSlam : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    float32 radius; // offset 0x828, size 0x4, align 4
    float32 pulse_interval; // offset 0x82C, size 0x4, align 4
    float32 pulse_count; // offset 0x830, size 0x4, align 4
    GameTime_t flCooldown; // offset 0x834, size 0x4, align 255
};
