#pragma once

class C_OP_SetControlPointFromRenderAttribute : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x270, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    int32 m_nCPInput; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPOutput; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nComponent; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    char[128] m_pszAttributeName; // offset 0x1E8, size 0x80, align 1 | MPropertyFriendlyName
    float32 m_flDefaultValue; // offset 0x268, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_026C[0x4]; // offset 0x26C
};
