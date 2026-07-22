#pragma once

class CCitadel_Modifier_Necro_RampUp : public CCitadel_Modifier_Base_Buildup /*0x0*/  // sizeof 0x568, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xD4]; // offset 0x0
    float32 m_flCurrBuildup; // offset 0xD4, size 0x4, align 4
    char _pad_00D8[0x488]; // offset 0xD8
    GameTime_t m_tLastTetherTime; // offset 0x560, size 0x4, align 255
    char _pad_0564[0x4]; // offset 0x564
};
