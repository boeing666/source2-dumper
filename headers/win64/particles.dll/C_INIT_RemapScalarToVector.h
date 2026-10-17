#pragma once

class C_INIT_RemapScalarToVector : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x230, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldInput; // offset 0x1E8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1EC, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flInputMin; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputMax; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecOutputMin; // offset 0x1F8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_vecOutputMax; // offset 0x204, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    float32 m_flStartTime; // offset 0x210, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime; // offset 0x214, size 0x4, align 4 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x218, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0x21C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0x220, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0221[0x3]; // offset 0x221
    float32 m_flRemapBias; // offset 0x224, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0228[0x8]; // offset 0x228
};
