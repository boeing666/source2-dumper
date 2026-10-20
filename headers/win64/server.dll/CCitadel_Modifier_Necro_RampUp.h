#pragma once

class CCitadel_Modifier_Necro_RampUp : public CCitadel_Modifier_Base_Buildup /*0x0*/  // sizeof 0x7A8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x164]; // offset 0x0
    float32 m_flCurrBuildup; // offset 0x164, size 0x4, align 4
    char _pad_0168[0x638]; // offset 0x168
    GameTime_t m_tLastTetherTime; // offset 0x7A0, size 0x4, align 255
    char _pad_07A4[0x4]; // offset 0x7A4
};
