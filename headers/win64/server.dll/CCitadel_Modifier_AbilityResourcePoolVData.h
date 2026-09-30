#pragma once

class CCitadel_Modifier_AbilityResourcePoolVData : public CCitadel_Modifier_Intrinsic_BaseVData /*0x0*/  // sizeof 0x780, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CUtlString m_strMaxResourceProperty; // offset 0x760, size 0x8, align 8 | MPropertyDescription
    float32 m_flMaxResourceAdditive; // offset 0x768, size 0x4, align 4 | MPropertyDescription
    char _pad_076C[0x4]; // offset 0x76C
    CUtlString m_strRegenPerSecondProperty; // offset 0x770, size 0x8, align 8 | MPropertyDescription
    bool m_bRegenPropertyIsDrain; // offset 0x778, size 0x1, align 1 | MPropertyDescription
    char _pad_0779[0x7]; // offset 0x779
};
