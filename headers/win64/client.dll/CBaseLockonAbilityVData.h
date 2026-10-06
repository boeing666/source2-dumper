#pragma once

class CBaseLockonAbilityVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1418, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_TargetModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strApplyLockonStack; // offset 0x13F8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strApplyMaxLockonStack; // offset 0x1408, size 0x10, align 8
};
