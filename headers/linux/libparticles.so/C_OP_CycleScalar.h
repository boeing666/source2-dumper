#pragma once

class C_OP_CycleScalar : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    ParticleAttributeIndex_t m_nDestField; // offset 0x1D0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flStartValue; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndValue; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flCycleTime; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bDoNotRepeatCycle; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSynchronizeParticles; // offset 0x1E1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E2[0x2]; // offset 0x1E2
    int32 m_nCPScale; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPFieldMin; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nCPFieldMax; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleSetMethod_t m_nSetMethod; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01F4[0x4]; // offset 0x1F4
};
