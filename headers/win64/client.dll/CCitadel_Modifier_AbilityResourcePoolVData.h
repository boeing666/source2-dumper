#pragma once

class CCitadel_Modifier_AbilityResourcePoolVData : public CCitadel_Modifier_Intrinsic_BaseVData /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CUtlString m_strMaxResourceProperty; // offset 0x798, size 0x8, align 8 | MPropertyDescription
    float32 m_flMaxResourceAdditive; // offset 0x7A0, size 0x4, align 4 | MPropertyDescription
    char _pad_07A4[0x4]; // offset 0x7A4
    CUtlString m_strRegenPerSecondProperty; // offset 0x7A8, size 0x8, align 8 | MPropertyDescription
    bool m_bRegenPropertyIsDrain; // offset 0x7B0, size 0x1, align 1 | MPropertyDescription
    char _pad_07B1[0x7]; // offset 0x7B1
};
