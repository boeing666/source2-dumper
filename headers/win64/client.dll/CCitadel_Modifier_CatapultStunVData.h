#pragma once

class CCitadel_Modifier_CatapultStunVData : public CModifierKnockdownVData /*0x0*/  // sizeof 0x8F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8D8]; // offset 0x0
    float32 m_flStunDurationOnLand; // offset 0x8D8, size 0x4, align 4
    char _pad_08DC[0x4]; // offset 0x8DC
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x8E0, size 0x10, align 8 | MPropertyStartGroup
};
