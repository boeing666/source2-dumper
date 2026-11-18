#pragma once

class CParticleFunctionRenderer : public CParticleFunction /*0x0*/  // sizeof 0x220, align 0xFF [vtable abstract] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleVisibilityInputs VisibilityInputs; // offset 0x1D8, size 0x44, align 4 | MPropertySortPriority
    bool m_bCannotBeRefracted; // offset 0x21C, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_021D[0x3]; // offset 0x21D
};
