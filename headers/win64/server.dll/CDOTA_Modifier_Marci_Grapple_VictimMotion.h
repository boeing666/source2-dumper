#pragma once

class CDOTA_Modifier_Marci_Grapple_VictimMotion : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 impact_damage; // offset 0x1AF8, size 0x4, align 4
    float32 debuff_duration; // offset 0x1AFC, size 0x4, align 4
    float32 landing_radius; // offset 0x1B00, size 0x4, align 4
    float32 air_duration; // offset 0x1B04, size 0x4, align 4
    int32 air_height; // offset 0x1B08, size 0x4, align 4
    int32 travel_distance; // offset 0x1B0C, size 0x4, align 4
    VectorWS m_vDestination; // offset 0x1B10, size 0xC, align 4
    float32 m_flStartZ; // offset 0x1B1C, size 0x4, align 4
    float32 m_flCurTime; // offset 0x1B20, size 0x4, align 4
    float32 m_flJumpDuration; // offset 0x1B24, size 0x4, align 4
    float32 m_flJumpHeight; // offset 0x1B28, size 0x4, align 4
    Vector m_vTargetHorizontalDirection; // offset 0x1B2C, size 0xC, align 4
};
