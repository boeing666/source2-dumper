#pragma once

class C_INIT_RandomRadius : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    float32 m_flRadiusMin; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flRadiusMax; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flRadiusRandExponent; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_01EC[0x4]; // offset 0x1EC
};
