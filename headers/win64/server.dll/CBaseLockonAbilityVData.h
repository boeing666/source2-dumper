#pragma once

class CBaseLockonAbilityVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x10A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_TargetModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strApplyLockonStack; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strApplyMaxLockonStack; // offset 0x1090, size 0x10, align 8
};
