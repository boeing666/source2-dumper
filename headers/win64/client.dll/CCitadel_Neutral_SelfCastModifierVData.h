#pragma once

class CCitadel_Neutral_SelfCastModifierVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x1100, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10E8]; // offset 0x0
    float32 m_flModifierDuration; // offset 0x10E8, size 0x4, align 4
    char _pad_10EC[0x4]; // offset 0x10EC
    CEmbeddedSubclass< CCitadelModifier > m_SelfCastModifier; // offset 0x10F0, size 0x10, align 8 | MPropertyStartGroup
};
