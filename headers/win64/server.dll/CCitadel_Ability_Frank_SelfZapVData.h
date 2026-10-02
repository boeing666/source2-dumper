#pragma once

class CCitadel_Ability_Frank_SelfZapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1438, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_healCurve; // offset 0x13F8, size 0x40, align 8 | MPropertyStartGroup
};
