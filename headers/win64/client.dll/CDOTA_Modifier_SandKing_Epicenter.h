#pragma once

class CDOTA_Modifier_SandKing_Epicenter : public CDOTA_Buff /*0x0*/  // sizeof 0x1B58, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 epicenter_radius_base; // offset 0x1AA8, size 0x4, align 4
    float32 epicenter_radius_increment; // offset 0x1AAC, size 0x4, align 4
    int32 epicenter_pulses; // offset 0x1AB0, size 0x4, align 4
    float32[30] epicenter_radius; // offset 0x1AB4, size 0x78, align 4
    int32 m_iMaxPulses; // offset 0x1B2C, size 0x4, align 4
    int32 m_iPulseCount; // offset 0x1B30, size 0x4, align 4
    float32 m_flPulseTickRate; // offset 0x1B34, size 0x4, align 4
    float32 spine_tick_rate; // offset 0x1B38, size 0x4, align 4
    GameTime_t m_flLastDamageTime; // offset 0x1B3C, size 0x4, align 255
    GameTime_t m_flLastSpineTime; // offset 0x1B40, size 0x4, align 255
    char _pad_1B44[0x14]; // offset 0x1B44
};
