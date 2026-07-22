#pragma once

class C_DOTA_Ability_AghsFort_Wave_Blast : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 damage; // offset 0x6A8, size 0x4, align 4
    float32 knockback_duration; // offset 0x6AC, size 0x4, align 4
    float32 disarm_duration; // offset 0x6B0, size 0x4, align 4
    char _pad_06B4[0x4]; // offset 0x6B4
};
