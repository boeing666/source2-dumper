#pragma once

class CDOTA_Modifier_Invisible : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bSubtle; // offset 0x1A58, size 0x1, align 1
    char _pad_1A59[0x3]; // offset 0x1A59
    GameTime_t m_flFadeTime; // offset 0x1A5C, size 0x4, align 255
    float32 m_flFadeTimeValue; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x4]; // offset 0x1A64
};
