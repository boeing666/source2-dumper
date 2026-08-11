#pragma once

class CDOTA_Modifier_Invoker_ColdSnap : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 freeze_damage; // offset 0x1A78, size 0x4, align 4
    float32 freeze_duration; // offset 0x1A7C, size 0x4, align 4
    float32 freeze_cooldown; // offset 0x1A80, size 0x4, align 4
    float32 damage_trigger; // offset 0x1A84, size 0x4, align 4
    float32 spell_lifesteal; // offset 0x1A88, size 0x4, align 4
    float32 spell_amp; // offset 0x1A8C, size 0x4, align 4
    float32 freeze_heal; // offset 0x1A90, size 0x4, align 4
    float32 freeze_mana; // offset 0x1A94, size 0x4, align 4
    int32 nQuasApplications; // offset 0x1A98, size 0x4, align 4
    int32 nExortApplications; // offset 0x1A9C, size 0x4, align 4
    CountdownTimer m_freezeCooldownTimer; // offset 0x1AA0, size 0x18, align 8
};
