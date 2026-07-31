#pragma once

class CDOTA_Modifier_Morphling_Become_Strength : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 agi_per_one_spell_amp; // offset 0x1A78, size 0x4, align 4
    int32 m_nSpellAmp; // offset 0x1A7C, size 0x4, align 4
};
