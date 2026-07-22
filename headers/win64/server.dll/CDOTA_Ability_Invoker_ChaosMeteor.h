#pragma once

class CDOTA_Ability_Invoker_ChaosMeteor : public CDOTA_Ability_Invoker_InvokedBase /*0x0*/  // sizeof 0x5C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    float32 area_of_effect; // offset 0x590, size 0x4, align 4
    float32 damage_interval; // offset 0x594, size 0x4, align 4
    float32 vision_distance; // offset 0x598, size 0x4, align 4
    float32 end_vision_duration; // offset 0x59C, size 0x4, align 4
    float32 main_damage; // offset 0x5A0, size 0x4, align 4
    float32 burn_duration; // offset 0x5A4, size 0x4, align 4
    float32 burn_dps; // offset 0x5A8, size 0x4, align 4
    char _pad_05AC[0x14]; // offset 0x5AC
};
