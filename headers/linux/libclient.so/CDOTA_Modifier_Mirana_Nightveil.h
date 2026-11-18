#pragma once

class CDOTA_Modifier_Mirana_Nightveil : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 fade_time; // offset 0x1AF8, size 0x4, align 4
    GameTime_t m_flFadeTime; // offset 0x1AFC, size 0x4, align 255
    GameTime_t m_flNextConsumeChargeTime; // offset 0x1B00, size 0x4, align 255
    GameTime_t m_flInvisUntil; // offset 0x1B04, size 0x4, align 255
    bool m_bInvisLastThink; // offset 0x1B08, size 0x1, align 1
    char _pad_1B09[0x7]; // offset 0x1B09
};
