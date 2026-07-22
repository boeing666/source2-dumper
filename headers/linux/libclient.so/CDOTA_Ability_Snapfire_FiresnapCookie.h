#pragma once

class CDOTA_Ability_Snapfire_FiresnapCookie : public C_DOTABaseAbility /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x824, size 0x4, align 4
    char _pad_0828[0x14]; // offset 0x828
    int32 projectile_speed; // offset 0x83C, size 0x4, align 4
    float32 pre_hop_duration; // offset 0x840, size 0x4, align 4
    float32 cast_on_ally_gesture_time; // offset 0x844, size 0x4, align 4
};
