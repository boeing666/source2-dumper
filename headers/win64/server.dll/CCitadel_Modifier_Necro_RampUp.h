#pragma once

class CCitadel_Modifier_Necro_RampUp : public CCitadel_Modifier_Base_Buildup /*0x0*/  // sizeof 0x798, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x154]; // offset 0x0
    float32 m_flCurrBuildup; // offset 0x154, size 0x4, align 4
    char _pad_0158[0x638]; // offset 0x158
    GameTime_t m_tLastTetherTime; // offset 0x790, size 0x4, align 255
    char _pad_0794[0x4]; // offset 0x794
};
