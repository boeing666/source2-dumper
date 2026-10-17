#pragma once

class CDOTA_Modifier_Huskar_Inner_Fire_Knockback : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    Vector m_vDirection; // offset 0x1AA8, size 0xC, align 4
    float32 m_flEndTime; // offset 0x1AB4, size 0x4, align 4
    float32 m_flCurTime; // offset 0x1AB8, size 0x4, align 4
    float32 knockback_distance; // offset 0x1ABC, size 0x4, align 4
    float32 knockback_duration; // offset 0x1AC0, size 0x4, align 4
    float32 min_knockback_distance; // offset 0x1AC4, size 0x4, align 4
    float32 min_knockback_duration; // offset 0x1AC8, size 0x4, align 4
    float32 effective_distance; // offset 0x1ACC, size 0x4, align 4
};
