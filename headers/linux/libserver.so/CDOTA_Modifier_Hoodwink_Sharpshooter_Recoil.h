#pragma once

class CDOTA_Modifier_Hoodwink_Sharpshooter_Recoil : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 recoil_duration; // offset 0x1AF8, size 0x4, align 4
    int32 recoil_height; // offset 0x1AFC, size 0x4, align 4
    int32 recoil_distance; // offset 0x1B00, size 0x4, align 4
    float32 m_flStartZ; // offset 0x1B04, size 0x4, align 4
    float32 m_flCurTime; // offset 0x1B08, size 0x4, align 4
    float32 m_flJumpDuration; // offset 0x1B0C, size 0x4, align 4
    float32 m_flJumpHeight; // offset 0x1B10, size 0x4, align 4
    Vector m_vTargetHorizontalDirection; // offset 0x1B14, size 0xC, align 4
};
