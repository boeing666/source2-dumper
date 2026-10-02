#pragma once

class CCitadel_Modifier_Basic_HealthRegenVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7E0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    HealingOverTimeLoopSoundOverride_t m_HealingLoopSoundOverride; // offset 0x790, size 0x38, align 8 | MPropertyStartGroup
    bool m_bSnapshotRegen; // offset 0x7C8, size 0x1, align 1 | MPropertyStartGroup
    char _pad_07C9[0x7]; // offset 0x7C9
    CUtlString m_strRegenAbilityPropertyName; // offset 0x7D0, size 0x8, align 8
    CUtlString m_strExternalRegenAbilityPropertyName; // offset 0x7D8, size 0x8, align 8
};
