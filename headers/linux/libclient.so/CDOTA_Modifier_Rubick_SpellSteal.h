#pragma once

class CDOTA_Modifier_Rubick_SpellSteal : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CUtlString m_strActivityModifier; // offset 0x1AA8, size 0x8, align 8
    int32 stolen_debuff_amp; // offset 0x1AB0, size 0x4, align 4
    float32 stolen_mana_reduction; // offset 0x1AB4, size 0x4, align 4
};
