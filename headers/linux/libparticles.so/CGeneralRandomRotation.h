#pragma once

class CGeneralRandomRotation : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1F8, align 0xFF [vtable abstract] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flDegrees; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flDegreesMin; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flDegreesMax; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flRotationRandExponent; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bRandomlyFlipDirection; // offset 0x1E8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E9[0xF]; // offset 0x1E9
};
