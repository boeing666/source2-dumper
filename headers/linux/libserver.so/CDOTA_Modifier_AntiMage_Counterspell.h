#pragma once

class CDOTA_Modifier_AntiMage_Counterspell : public CDOTA_Buff /*0x0*/  // sizeof 0x1BF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CModifierParams m_LastParams; // offset 0x1AF8, size 0xF8, align 255
    int32 magic_resistance; // offset 0x1BF0, size 0x4, align 4
    int32 reflected_spell_amp; // offset 0x1BF4, size 0x4, align 4
};
