#pragma once

class CDOTA_Ability_Snapfire_FiresnapCookie : public C_DOTABaseAbility /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x828, size 0x4, align 4
    char _pad_082C[0x14]; // offset 0x82C
    int32 projectile_speed; // offset 0x840, size 0x4, align 4
    float32 pre_hop_duration; // offset 0x844, size 0x4, align 4
    float32 cast_on_ally_gesture_time; // offset 0x848, size 0x4, align 4
    char _pad_084C[0x4]; // offset 0x84C
};
