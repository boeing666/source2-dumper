#pragma once

class C_DOTA_Ability_Invoker_DeafeningBlast : public CDOTA_Ability_Invoker_InvokedBase /*0x0*/  // sizeof 0x6C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6B8]; // offset 0x0
    float32 end_vision_duration; // offset 0x6B8, size 0x4, align 4
    float32 damage; // offset 0x6BC, size 0x4, align 4
    float32 knockback_duration; // offset 0x6C0, size 0x4, align 4
    float32 disarm_duration; // offset 0x6C4, size 0x4, align 4
};
