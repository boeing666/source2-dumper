#pragma once

class CDOTA_Modifier_Mirana_Nightveil : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 fade_time; // offset 0x1A58, size 0x4, align 4
    GameTime_t m_flFadeTime; // offset 0x1A5C, size 0x4, align 255
    GameTime_t m_flNextConsumeChargeTime; // offset 0x1A60, size 0x4, align 255
    GameTime_t m_flInvisUntil; // offset 0x1A64, size 0x4, align 255
    bool m_bInvisLastThink; // offset 0x1A68, size 0x1, align 1
    char _pad_1A69[0x7]; // offset 0x1A69
};
