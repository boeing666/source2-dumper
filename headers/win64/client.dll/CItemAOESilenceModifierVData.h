#pragma once

class CItemAOESilenceModifierVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CSoundEventName m_strSilenceTargetSound; // offset 0x798, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x7A8, size 0x10, align 8 | MPropertyGroupName
};
