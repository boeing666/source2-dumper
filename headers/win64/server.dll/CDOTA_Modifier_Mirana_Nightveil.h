#pragma once

class CDOTA_Modifier_Mirana_Nightveil : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 fade_time; // offset 0x1AA8, size 0x4, align 4
    GameTime_t m_flFadeTime; // offset 0x1AAC, size 0x4, align 255
    GameTime_t m_flNextConsumeChargeTime; // offset 0x1AB0, size 0x4, align 255
    GameTime_t m_flInvisUntil; // offset 0x1AB4, size 0x4, align 255
    bool m_bInvisLastThink; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x7]; // offset 0x1AB9
};
