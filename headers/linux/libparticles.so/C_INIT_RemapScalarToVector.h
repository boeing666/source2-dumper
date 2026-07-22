#pragma once

class C_INIT_RemapScalarToVector : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x218, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldInput; // offset 0x1D4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flInputMin; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputMax; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecOutputMin; // offset 0x1E4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_vecOutputMax; // offset 0x1F0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    float32 m_flStartTime; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x204, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0x208, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0x20C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_020D[0x3]; // offset 0x20D
    float32 m_flRemapBias; // offset 0x210, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0214[0x4]; // offset 0x214
};
