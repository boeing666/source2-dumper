#pragma once

class CCitadel_Modifier_UIHudMessage : public CCitadelModifier /*0x0*/  // sizeof 0x150, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    CUtlString m_strHudMessage; // offset 0x138, size 0x8, align 8
    bool m_bIncludeDecimal; // offset 0x140, size 0x1, align 1
    char _pad_0141[0x3]; // offset 0x141
    int32 m_eModifierValue; // offset 0x144, size 0x4, align 4
    float32 m_flValue; // offset 0x148, size 0x4, align 4
    char _pad_014C[0x4]; // offset 0x14C
};
