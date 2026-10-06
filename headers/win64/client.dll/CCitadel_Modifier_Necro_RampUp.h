#pragma once

class CCitadel_Modifier_Necro_RampUp : public CCitadel_Modifier_Base_Buildup /*0x0*/  // sizeof 0x790, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x14C]; // offset 0x0
    float32 m_flCurrBuildup; // offset 0x14C, size 0x4, align 4
    char _pad_0150[0x638]; // offset 0x150
    GameTime_t m_tLastTetherTime; // offset 0x788, size 0x4, align 255
    char _pad_078C[0x4]; // offset 0x78C
};
