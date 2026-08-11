#pragma once

class CDOTA_Ability_Snapfire_FiresnapCookie : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x580, size 0x4, align 4
    char _pad_0584[0x14]; // offset 0x584
    int32 projectile_speed; // offset 0x598, size 0x4, align 4
    float32 pre_hop_duration; // offset 0x59C, size 0x4, align 4
    float32 cast_on_ally_gesture_time; // offset 0x5A0, size 0x4, align 4
    char _pad_05A4[0x4]; // offset 0x5A4
};
