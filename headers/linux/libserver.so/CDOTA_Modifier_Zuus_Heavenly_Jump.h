#pragma once

class CDOTA_Modifier_Zuus_Heavenly_Jump : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 hop_duration; // offset 0x1AA8, size 0x4, align 4
    int32 hop_height; // offset 0x1AAC, size 0x4, align 4
    int32 hop_distance; // offset 0x1AB0, size 0x4, align 4
    int32 search_radius; // offset 0x1AB4, size 0x4, align 4
    float32 m_flStartZ; // offset 0x1AB8, size 0x4, align 4
    float32 m_flCurTime; // offset 0x1ABC, size 0x4, align 4
    float32 m_flJumpDuration; // offset 0x1AC0, size 0x4, align 4
    float32 m_flJumpHeight; // offset 0x1AC4, size 0x4, align 4
    Vector m_vTargetHorizontalDirection; // offset 0x1AC8, size 0xC, align 4
    char _pad_1AD4[0x4]; // offset 0x1AD4
    CUtlVector< CHandle< CBaseEntity > > hUnitsToHit; // offset 0x1AD8, size 0x18, align 8
    bool m_bLaunched; // offset 0x1AF0, size 0x1, align 1
    char _pad_1AF1[0x7]; // offset 0x1AF1
};
