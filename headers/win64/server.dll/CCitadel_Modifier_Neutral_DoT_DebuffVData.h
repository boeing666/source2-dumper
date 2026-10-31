#pragma once

class CCitadel_Modifier_Neutral_DoT_DebuffVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x1100, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10F8]; // offset 0x0
    float32 m_flTickRate; // offset 0x10F8, size 0x4, align 4
    float32 m_flDPS; // offset 0x10FC, size 0x4, align 4
};
