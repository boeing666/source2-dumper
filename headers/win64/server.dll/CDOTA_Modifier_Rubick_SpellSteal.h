#pragma once

class CDOTA_Modifier_Rubick_SpellSteal : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CUtlString m_strActivityModifier; // offset 0x1AF8, size 0x8, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecAbilities; // offset 0x1B00, size 0x18, align 8
    bool m_bUsesTwoSlots; // offset 0x1B18, size 0x1, align 1
    char _pad_1B19[0x3]; // offset 0x1B19
    int32 stolen_debuff_amp; // offset 0x1B1C, size 0x4, align 4
    float32 stolen_mana_reduction; // offset 0x1B20, size 0x4, align 4
    char _pad_1B24[0x4]; // offset 0x1B24
};
