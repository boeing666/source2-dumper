#pragma once

class C_OP_PlaneCull : public CParticleFunctionOperator /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    int32 m_nPlaneControlPoint; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01D4[0x4]; // offset 0x1D4
    CParticleCollectionVecInput m_vecPlaneDirection; // offset 0x1D8, size 0x690, align 8 | MPropertyFriendlyName
    bool m_bLocalSpace; // offset 0x868, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0869[0x3]; // offset 0x869
    float32 m_flPlaneOffset; // offset 0x86C, size 0x4, align 4 | MPropertyFriendlyName
};
