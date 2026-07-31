#pragma once

class CDOTA_Modifier_Mirana_Nightveil : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 fade_time; // offset 0x1A78, size 0x4, align 4
    GameTime_t m_flFadeTime; // offset 0x1A7C, size 0x4, align 255
    GameTime_t m_flNextConsumeChargeTime; // offset 0x1A80, size 0x4, align 255
    GameTime_t m_flInvisUntil; // offset 0x1A84, size 0x4, align 255
    bool m_bInvisLastThink; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x7]; // offset 0x1A89
};
