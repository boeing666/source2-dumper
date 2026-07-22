#pragma once

class C_INIT_RandomAlpha : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nAlphaMin; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    int32 m_nAlphaMax; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_01EC[0x8]; // offset 0x1EC
    float32 m_flAlphaRandExponent; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
};
