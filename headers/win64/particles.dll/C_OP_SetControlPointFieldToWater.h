#pragma once

class C_OP_SetControlPointFieldToWater : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x1F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nSourceCP; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nDestCP; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPField; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01EC[0x4]; // offset 0x1EC
};
