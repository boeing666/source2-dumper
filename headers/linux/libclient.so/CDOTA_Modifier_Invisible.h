#pragma once

class CDOTA_Modifier_Invisible : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bSubtle; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x3]; // offset 0x1AF9
    GameTime_t m_flFadeTime; // offset 0x1AFC, size 0x4, align 255
    float32 m_flFadeTimeValue; // offset 0x1B00, size 0x4, align 4
    bool m_bApplySmoke; // offset 0x1B04, size 0x1, align 1
    char _pad_1B05[0x3]; // offset 0x1B05
};
