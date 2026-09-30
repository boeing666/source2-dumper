#pragma once

class CCitadel_Neutral_SelfCastModifierVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x10D0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10B8]; // offset 0x0
    float32 m_flModifierDuration; // offset 0x10B8, size 0x4, align 4
    char _pad_10BC[0x4]; // offset 0x10BC
    CEmbeddedSubclass< CCitadelModifier > m_SelfCastModifier; // offset 0x10C0, size 0x10, align 8 | MPropertyStartGroup
};
