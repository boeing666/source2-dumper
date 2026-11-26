#pragma once

class CBaseLockonAbilityVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x10B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_TargetModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strApplyLockonStack; // offset 0x1090, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strApplyMaxLockonStack; // offset 0x10A0, size 0x10, align 8
    bool m_bShowLostLOSOnHUD; // offset 0x10B0, size 0x1, align 1 | MPropertyStartGroup
    char _pad_10B1[0x7]; // offset 0x10B1
};
