#pragma once

class C_OP_RemapCPtoCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x208, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nInputControlPoint; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputControlPoint; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nInputField; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nOutputField; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flInputMin; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputMax; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMin; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMax; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bDerivative; // offset 0x200, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0201[0x3]; // offset 0x201
    float32 m_flInterpRate; // offset 0x204, size 0x4, align 4 | MPropertyFriendlyName
};
