#pragma once

class CDOTA_Modifier_Invoker_ColdSnap : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 freeze_damage; // offset 0x1A58, size 0x4, align 4
    float32 freeze_duration; // offset 0x1A5C, size 0x4, align 4
    float32 freeze_cooldown; // offset 0x1A60, size 0x4, align 4
    float32 damage_trigger; // offset 0x1A64, size 0x4, align 4
    float32 spell_lifesteal; // offset 0x1A68, size 0x4, align 4
    float32 spell_amp; // offset 0x1A6C, size 0x4, align 4
    float32 freeze_heal; // offset 0x1A70, size 0x4, align 4
    float32 freeze_mana; // offset 0x1A74, size 0x4, align 4
    int32 nQuasApplications; // offset 0x1A78, size 0x4, align 4
    int32 nExortApplications; // offset 0x1A7C, size 0x4, align 4
};
