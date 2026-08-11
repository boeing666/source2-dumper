#pragma once

class CDOTA_Ability_Snapfire_FiresnapCookie : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x85C, size 0x4, align 4
    char _pad_0860[0x14]; // offset 0x860
    int32 projectile_speed; // offset 0x874, size 0x4, align 4
    float32 pre_hop_duration; // offset 0x878, size 0x4, align 4
    float32 cast_on_ally_gesture_time; // offset 0x87C, size 0x4, align 4
};
