#pragma once

class C_OP_RenderAsModels : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x268, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x230]; // offset 0x0
    CUtlVector< ModelReference_t > m_ModelList; // offset 0x230, size 0x18, align 8 | MPropertyFriendlyName MParticleRequireDefaultArrayEntry
    char _pad_0248[0x4]; // offset 0x248
    float32 m_flModelScale; // offset 0x24C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bFitToModelSize; // offset 0x250, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bNonUniformScaling; // offset 0x251, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0252[0x2]; // offset 0x252
    ParticleAttributeIndex_t m_nXAxisScalingAttribute; // offset 0x254, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nYAxisScalingAttribute; // offset 0x258, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nZAxisScalingAttribute; // offset 0x25C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nSizeCullBloat; // offset 0x260, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0264[0x4]; // offset 0x264
};
