#pragma once

class CCitadel_Modifier_Necro_RampUp : public CCitadel_Modifier_Base_Buildup /*0x0*/  // sizeof 0x7A0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x15C]; // offset 0x0
    float32 m_flCurrBuildup; // offset 0x15C, size 0x4, align 4
    char _pad_0160[0x638]; // offset 0x160
    GameTime_t m_tLastTetherTime; // offset 0x798, size 0x4, align 255
    char _pad_079C[0x4]; // offset 0x79C
};
