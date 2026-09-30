#pragma once

class CCitadelModifierAuraVData : public CModifierVData_BaseAura /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7A0]; // offset 0x0
    CITADEL_UNIT_TARGET_TYPE m_iAuraSearchType; // offset 0x7A0, size 0x4, align 4
    CITADEL_UNIT_TARGET_FLAGS m_iAuraSearchFlags; // offset 0x7A4, size 0x4, align 4
    ELOSCheck m_eLosCheck; // offset 0x7A8, size 0x4, align 4
    float32 m_flModifierProvidedByAuraDuration; // offset 0x7AC, size 0x4, align 4
    bool m_bRemoveProvidedModifierOnAuraRemoval; // offset 0x7B0, size 0x1, align 1
    char _pad_07B1[0x7]; // offset 0x7B1
};
