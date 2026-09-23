#pragma once

class C_INIT_RandomColor : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x230, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x204]; // offset 0x0
    Color m_ColorMin; // offset 0x204, size 0x4, align 4 | MPropertyFriendlyName
    Color m_ColorMax; // offset 0x208, size 0x4, align 4 | MPropertyFriendlyName
    Color m_TintMin; // offset 0x20C, size 0x4, align 4 | MPropertyFriendlyName
    Color m_TintMax; // offset 0x210, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTintPerc; // offset 0x214, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flUpdateThreshold; // offset 0x218, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nTintCP; // offset 0x21C, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x220, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleColorBlendMode_t m_nTintBlendMode; // offset 0x224, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLightAmplification; // offset 0x228, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_022C[0x4]; // offset 0x22C
};
