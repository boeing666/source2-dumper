#pragma once

class CDOTA_Modifier_Lesser_NightCrawler_Pounce : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_flTotalTime; // offset 0x1AF8, size 0x4, align 4
    float32 m_flInitialVelocity; // offset 0x1AFC, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1B00, size 0xC, align 4
    Vector m_vTargetHorizontalDirection; // offset 0x1B0C, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1B18, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1B1C, size 0x4, align 4
    bool m_bInterrupted; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x3]; // offset 0x1B21
    int32 pounce_distance; // offset 0x1B24, size 0x4, align 4
    float32 pounce_speed; // offset 0x1B28, size 0x4, align 4
    float32 pounce_acceleration; // offset 0x1B2C, size 0x4, align 4
    int32 pounce_radius; // offset 0x1B30, size 0x4, align 4
    int32 pounce_damage; // offset 0x1B34, size 0x4, align 4
    float32 leash_duration; // offset 0x1B38, size 0x4, align 4
    char _pad_1B3C[0x4]; // offset 0x1B3C
};
