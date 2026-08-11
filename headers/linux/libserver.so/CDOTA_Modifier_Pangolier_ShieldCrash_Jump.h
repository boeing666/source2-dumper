#pragma once

class CDOTA_Modifier_Pangolier_ShieldCrash_Jump : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 jump_duration; // offset 0x1A78, size 0x4, align 4
    float32 jump_duration_gyroshell; // offset 0x1A7C, size 0x4, align 4
    int32 jump_height; // offset 0x1A80, size 0x4, align 4
    int32 jump_height_gyroshell; // offset 0x1A84, size 0x4, align 4
    float32 m_flStartZ; // offset 0x1A88, size 0x4, align 4
    float32 m_flCurTime; // offset 0x1A8C, size 0x4, align 4
    float32 m_flJumpDuration; // offset 0x1A90, size 0x4, align 4
    float32 m_flJumpHeight; // offset 0x1A94, size 0x4, align 4
    int32 jump_horizontal_distance; // offset 0x1A98, size 0x4, align 4
    Vector m_vTargetHorizontalDirection; // offset 0x1A9C, size 0xC, align 4
    float32 m_flPreviousElapsedTime; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
};
