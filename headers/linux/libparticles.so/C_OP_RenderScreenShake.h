#pragma once

class C_OP_RenderScreenShake : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x240, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x21C]; // offset 0x0
    float32 m_flDurationScale; // offset 0x21C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flRadiusScale; // offset 0x220, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flFrequencyScale; // offset 0x224, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flAmplitudeScale; // offset 0x228, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nRadiusField; // offset 0x22C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nDurationField; // offset 0x230, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFrequencyField; // offset 0x234, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nAmplitudeField; // offset 0x238, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nFilterCP; // offset 0x23C, size 0x4, align 4 | MPropertyFriendlyName
};
