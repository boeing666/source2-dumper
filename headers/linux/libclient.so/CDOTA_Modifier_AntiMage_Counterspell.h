#pragma once

class CDOTA_Modifier_AntiMage_Counterspell : public CDOTA_Buff /*0x0*/  // sizeof 0x1B70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CModifierParams m_LastParams; // offset 0x1A78, size 0xF0, align 255
    int32 magic_resistance; // offset 0x1B68, size 0x4, align 4
    int32 reflected_spell_amp; // offset 0x1B6C, size 0x4, align 4
};
