#pragma once

class CParticleFunctionRenderer : public CParticleFunction /*0x0*/  // sizeof 0x228, align 0xFF [vtable abstract] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleVisibilityInputs VisibilityInputs; // offset 0x1D8, size 0x48, align 4 | MPropertySortPriority
    bool m_bCannotBeRefracted; // offset 0x220, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bSkipRenderingOnMobile; // offset 0x221, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_0222[0x6]; // offset 0x222
};
