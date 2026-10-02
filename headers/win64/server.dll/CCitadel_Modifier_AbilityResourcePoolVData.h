#pragma once

class CCitadel_Modifier_AbilityResourcePoolVData : public CCitadel_Modifier_Intrinsic_BaseVData /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CUtlString m_strMaxResourceProperty; // offset 0x790, size 0x8, align 8 | MPropertyDescription
    float32 m_flMaxResourceAdditive; // offset 0x798, size 0x4, align 4 | MPropertyDescription
    char _pad_079C[0x4]; // offset 0x79C
    CUtlString m_strRegenPerSecondProperty; // offset 0x7A0, size 0x8, align 8 | MPropertyDescription
    bool m_bRegenPropertyIsDrain; // offset 0x7A8, size 0x1, align 1 | MPropertyDescription
    char _pad_07A9[0x7]; // offset 0x7A9
};
