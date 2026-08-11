#pragma once

class CDOTA_Modifier_Enchantress_Bunny_Hop : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 hop_duration; // offset 0x1A78, size 0x4, align 4
    int32 hop_height; // offset 0x1A7C, size 0x4, align 4
    int32 hop_distance; // offset 0x1A80, size 0x4, align 4
    float32 m_flStartZ; // offset 0x1A84, size 0x4, align 4
    float32 m_flCurTime; // offset 0x1A88, size 0x4, align 4
    float32 m_flJumpDuration; // offset 0x1A8C, size 0x4, align 4
    float32 m_flJumpHeight; // offset 0x1A90, size 0x4, align 4
    Vector m_vTargetHorizontalDirection; // offset 0x1A94, size 0xC, align 4
    CUtlVector< CHandle< CBaseEntity > > hUnitsToHit; // offset 0x1AA0, size 0x18, align 8
    bool m_bLaunched; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x7]; // offset 0x1AB9
};
