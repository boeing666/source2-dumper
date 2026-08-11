#pragma once

class CCitadel_Modifier_Necro_RampUp : public CCitadel_Modifier_Base_Buildup /*0x0*/  // sizeof 0x578, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xE4]; // offset 0x0
    float32 m_flCurrBuildup; // offset 0xE4, size 0x4, align 4
    char _pad_00E8[0x488]; // offset 0xE8
    GameTime_t m_tLastTetherTime; // offset 0x570, size 0x4, align 255
    char _pad_0574[0x4]; // offset 0x574
};
