#pragma once

class CDOTA_Modifier_Rubick_SpellSteal : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CUtlString m_strActivityModifier; // offset 0x1AF8, size 0x8, align 8
    int32 stolen_debuff_amp; // offset 0x1B00, size 0x4, align 4
    float32 stolen_mana_reduction; // offset 0x1B04, size 0x4, align 4
};
