#pragma once

class C_OP_RemapDirectionToCPToVector : public CParticleFunctionOperator /*0x0*/  // sizeof 0x200, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    int32 m_nCP; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1DC, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flScale; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOffsetRot; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecOffsetAxis; // offset 0x1E8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bNormalize; // offset 0x1F4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F5[0x3]; // offset 0x1F5
    ParticleAttributeIndex_t m_nFieldStrength; // offset 0x1F8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01FC[0x4]; // offset 0x1FC
};
