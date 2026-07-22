#pragma once

class C_OP_RemapCPtoVector : public CParticleFunctionOperator /*0x0*/  // sizeof 0x220, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    int32 m_nCPInput; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nLocalSpaceCP; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vInputMin; // offset 0x1DC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_vInputMax; // offset 0x1E8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_vOutputMin; // offset 0x1F4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_vOutputMax; // offset 0x200, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    float32 m_flStartTime; // offset 0x20C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime; // offset 0x210, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInterpRate; // offset 0x214, size 0x4, align 4 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x218, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bOffset; // offset 0x21C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAccelerate; // offset 0x21D, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_021E[0x2]; // offset 0x21E
};
