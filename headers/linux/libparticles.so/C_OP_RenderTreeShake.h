#pragma once

class C_OP_RenderTreeShake : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x248, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x21C]; // offset 0x0
    float32 m_flPeakStrength; // offset 0x21C, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nPeakStrengthFieldOverride; // offset 0x220, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flRadius; // offset 0x224, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nRadiusFieldOverride; // offset 0x228, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flShakeDuration; // offset 0x22C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTransitionTime; // offset 0x230, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTwistAmount; // offset 0x234, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flRadialAmount; // offset 0x238, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flControlPointOrientationAmount; // offset 0x23C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPointForLinearDirection; // offset 0x240, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0244[0x4]; // offset 0x244
};
