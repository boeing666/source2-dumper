#pragma once

class C_OP_RemapDensityToVector : public CParticleFunctionOperator /*0x0*/  // sizeof 0x200, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    float32 m_flRadiusScale; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flDensityMin; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flDensityMax; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecOutputMin; // offset 0x1E0, size 0xC, align 4 | MPropertyFriendlyName
    Vector m_vecOutputMax; // offset 0x1EC, size 0xC, align 4 | MPropertyFriendlyName
    bool m_bUseParentDensity; // offset 0x1F8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F9[0x3]; // offset 0x1F9
    int32 m_nVoxelGridResolution; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName
};
