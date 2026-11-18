#pragma once

class CDOTA_Modifier_Invoker_ColdSnap : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 freeze_damage; // offset 0x1AF8, size 0x4, align 4
    float32 freeze_duration; // offset 0x1AFC, size 0x4, align 4
    float32 freeze_cooldown; // offset 0x1B00, size 0x4, align 4
    float32 damage_trigger; // offset 0x1B04, size 0x4, align 4
    float32 spell_lifesteal; // offset 0x1B08, size 0x4, align 4
    float32 spell_amp; // offset 0x1B0C, size 0x4, align 4
    float32 freeze_heal; // offset 0x1B10, size 0x4, align 4
    float32 freeze_mana; // offset 0x1B14, size 0x4, align 4
    int32 nQuasApplications; // offset 0x1B18, size 0x4, align 4
    int32 nExortApplications; // offset 0x1B1C, size 0x4, align 4
};
