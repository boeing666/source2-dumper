#pragma once

class CCitadel_Ability_Frank_SelfZapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x13F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_healCurve; // offset 0x13B0, size 0x40, align 8 | MPropertyStartGroup
};
