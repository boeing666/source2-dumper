#pragma once

class C_OP_PlaneCull : public CParticleFunctionOperator /*0x0*/  // sizeof 0x8C8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nPlaneControlPoint; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleCollectionVecInput m_vecPlaneDirection; // offset 0x1E8, size 0x6D8, align 8 | MPropertyFriendlyName
    bool m_bLocalSpace; // offset 0x8C0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_08C1[0x3]; // offset 0x8C1
    float32 m_flPlaneOffset; // offset 0x8C4, size 0x4, align 4 | MPropertyFriendlyName
};
