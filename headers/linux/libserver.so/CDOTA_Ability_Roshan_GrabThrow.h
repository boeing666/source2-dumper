#pragma once

class CDOTA_Ability_Roshan_GrabThrow : public CDOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CDOTA_BaseNPC* m_hTarget; // offset 0x860, size 0x8, align 8
    int32 m_nComboCount; // offset 0x868, size 0x4, align 4
    float32 max_knockback_distance; // offset 0x86C, size 0x4, align 4
    float32 knockback_duration; // offset 0x870, size 0x4, align 4
    float32 knockback_height; // offset 0x874, size 0x4, align 4
};
