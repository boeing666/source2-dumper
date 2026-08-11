#pragma once

class CDOTA_Ability_Roshan_GrabThrow : public CDOTABaseAbility /*0x0*/  // sizeof 0x598, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CDOTA_BaseNPC* m_hTarget; // offset 0x580, size 0x8, align 8
    int32 m_nComboCount; // offset 0x588, size 0x4, align 4
    float32 max_knockback_distance; // offset 0x58C, size 0x4, align 4
    float32 knockback_duration; // offset 0x590, size 0x4, align 4
    float32 knockback_height; // offset 0x594, size 0x4, align 4
};
