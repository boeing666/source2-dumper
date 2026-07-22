#pragma once

class C_OP_CPOffsetToPercentageBetweenCPs : public CParticleFunctionOperator /*0x0*/  // sizeof 0x200, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    float32 m_flInputMin; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputMax; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputBias; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nStartCP; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nEndCP; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOffsetCP; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOuputCP; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nInputCP; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bRadialCheck; // offset 0x1F0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bScaleOffset; // offset 0x1F1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F2[0x2]; // offset 0x1F2
    Vector m_vecOffset; // offset 0x1F4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
};
