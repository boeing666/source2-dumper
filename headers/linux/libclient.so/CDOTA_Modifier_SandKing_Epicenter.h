#pragma once

class CDOTA_Modifier_SandKing_Epicenter : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 epicenter_radius_base; // offset 0x1A78, size 0x4, align 4
    float32 epicenter_radius_increment; // offset 0x1A7C, size 0x4, align 4
    int32 epicenter_pulses; // offset 0x1A80, size 0x4, align 4
    float32[30] epicenter_radius; // offset 0x1A84, size 0x78, align 4
    int32 m_iMaxPulses; // offset 0x1AFC, size 0x4, align 4
    int32 m_iPulseCount; // offset 0x1B00, size 0x4, align 4
    float32 m_flPulseTickRate; // offset 0x1B04, size 0x4, align 4
    float32 spine_tick_rate; // offset 0x1B08, size 0x4, align 4
    GameTime_t m_flLastDamageTime; // offset 0x1B0C, size 0x4, align 255
    GameTime_t m_flLastSpineTime; // offset 0x1B10, size 0x4, align 255
    char _pad_1B14[0x14]; // offset 0x1B14
};
