#pragma once

class C_OP_RemapCPtoScalar : public CParticleFunctionOperator /*0x0*/  // sizeof 0x208, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    int32 m_nCPInput; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1DC, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nField; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flInputMin; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputMax; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMin; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMax; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStartTime; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInterpRate; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0204[0x4]; // offset 0x204
};
