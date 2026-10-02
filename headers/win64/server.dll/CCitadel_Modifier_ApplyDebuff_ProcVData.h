#pragma once

class CCitadel_Modifier_ApplyDebuff_ProcVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x7F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7C8]; // offset 0x0
    bool m_bUseNonEmbedded; // offset 0x7C8, size 0x1, align 1
    char _pad_07C9[0x7]; // offset 0x7C9
    CUtlString m_DurationAbilityPropOverride; // offset 0x7D0, size 0x8, align 8 | MPropertyGroupName MPropertyDescription
    CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // offset 0x7D8, size 0x10, align 8 | MPropertyGroupName
    CSubclassName< 2 > m_NonEmbeddedModifier; // offset 0x7E8, size 0x10, align 8
};
