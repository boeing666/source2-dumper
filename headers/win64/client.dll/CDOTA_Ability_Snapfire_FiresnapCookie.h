#pragma once

class CDOTA_Ability_Snapfire_FiresnapCookie : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x6A8, size 0x4, align 4
    char _pad_06AC[0x14]; // offset 0x6AC
    int32 projectile_speed; // offset 0x6C0, size 0x4, align 4
    float32 pre_hop_duration; // offset 0x6C4, size 0x4, align 4
    float32 cast_on_ally_gesture_time; // offset 0x6C8, size 0x4, align 4
    char _pad_06CC[0x4]; // offset 0x6CC
};
