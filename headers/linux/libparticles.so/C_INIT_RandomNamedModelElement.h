#pragma once

class C_INIT_RandomNamedModelElement : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x200, align 0xFF [vtable abstract] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCModel > m_hModel; // offset 0x1D8, size 0x8, align 8
    CUtlVector< CUtlString > m_names; // offset 0x1E0, size 0x18, align 8 | MPropertyFriendlyName
    bool m_bShuffle; // offset 0x1F8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLinear; // offset 0x1F9, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bModelFromRenderer; // offset 0x1FA, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01FB[0x1]; // offset 0x1FB
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1FC, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
