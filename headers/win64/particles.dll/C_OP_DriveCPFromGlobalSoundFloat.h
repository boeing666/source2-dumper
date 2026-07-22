#pragma once

class C_OP_DriveCPFromGlobalSoundFloat : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x218, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nOutputControlPoint; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputField; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flInputMin; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputMax; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMin; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMax; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    CUtlString m_StackName; // offset 0x1F8, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_OperatorName; // offset 0x200, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_FieldName; // offset 0x208, size 0x8, align 8 | MPropertyFriendlyName
    char _pad_0210[0x8]; // offset 0x210
};
