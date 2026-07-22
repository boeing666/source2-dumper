#pragma once

class CCitadel_Modifier_UIHudMessage : public CCitadelModifier /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CUtlString m_strHudMessage; // offset 0xC0, size 0x8, align 8
    bool m_bIncludeDecimal; // offset 0xC8, size 0x1, align 1
    char _pad_00C9[0x3]; // offset 0xC9
    int32 m_eModifierValue; // offset 0xCC, size 0x4, align 4
    float32 m_flValue; // offset 0xD0, size 0x4, align 4
    char _pad_00D4[0x4]; // offset 0xD4
};
