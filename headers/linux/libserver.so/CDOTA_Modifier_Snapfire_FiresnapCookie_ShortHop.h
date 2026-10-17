#pragma once

class CDOTA_Modifier_Snapfire_FiresnapCookie_ShortHop : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 jump_duration; // offset 0x1AA8, size 0x4, align 4
    int32 jump_height; // offset 0x1AAC, size 0x4, align 4
    int32 jump_horizontal_distance; // offset 0x1AB0, size 0x4, align 4
    float32 pre_land_anim_time; // offset 0x1AB4, size 0x4, align 4
    float32 landing_gesture_duration; // offset 0x1AB8, size 0x4, align 4
    float32 impact_radius; // offset 0x1ABC, size 0x4, align 4
    int32 impact_damage; // offset 0x1AC0, size 0x4, align 4
    float32 impact_stun_duration; // offset 0x1AC4, size 0x4, align 4
    float32 m_flStartZ; // offset 0x1AC8, size 0x4, align 4
    float32 m_flCurTime; // offset 0x1ACC, size 0x4, align 4
    float32 m_flJumpDuration; // offset 0x1AD0, size 0x4, align 4
    float32 m_flJumpHeight; // offset 0x1AD4, size 0x4, align 4
    Vector m_vTargetHorizontalDirection; // offset 0x1AD8, size 0xC, align 4
    char _pad_1AE4[0x4]; // offset 0x1AE4
};
