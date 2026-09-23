#pragma once

class C_OP_RtEnvCull : public CParticleFunctionOperator /*0x0*/  // sizeof 0x288, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    Vector m_vecTestDir; // offset 0x1E0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecTestNormal; // offset 0x1EC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bCullOnMiss; // offset 0x1F8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bStickInsteadOfCull; // offset 0x1F9, size 0x1, align 1 | MPropertyFriendlyName
    char[128] m_RtEnvName; // offset 0x1FA, size 0x80, align 1 | MPropertyFriendlyName
    char _pad_027A[0x2]; // offset 0x27A
    int32 m_nRTEnvCP; // offset 0x27C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nComponent; // offset 0x280, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0284[0x4]; // offset 0x284
};
