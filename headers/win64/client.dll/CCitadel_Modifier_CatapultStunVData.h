#pragma once

class CCitadel_Modifier_CatapultStunVData : public CModifierKnockdownVData /*0x0*/  // sizeof 0x950, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x938]; // offset 0x0
    float32 m_flStunDurationOnLand; // offset 0x938, size 0x4, align 4
    char _pad_093C[0x4]; // offset 0x93C
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x940, size 0x10, align 8 | MPropertyStartGroup
};
