#pragma once

class CCitadelModifierAuraVData : public CModifierVData_BaseAura /*0x0*/  // sizeof 0x7F0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7D8]; // offset 0x0
    CITADEL_UNIT_TARGET_TYPE m_iAuraSearchType; // offset 0x7D8, size 0x4, align 4
    CITADEL_UNIT_TARGET_FLAGS m_iAuraSearchFlags; // offset 0x7DC, size 0x4, align 4
    ELOSCheck m_eLosCheck; // offset 0x7E0, size 0x4, align 4
    float32 m_flModifierProvidedByAuraDuration; // offset 0x7E4, size 0x4, align 4
    bool m_bRemoveProvidedModifierOnAuraRemoval; // offset 0x7E8, size 0x1, align 1
    char _pad_07E9[0x7]; // offset 0x7E9
};
