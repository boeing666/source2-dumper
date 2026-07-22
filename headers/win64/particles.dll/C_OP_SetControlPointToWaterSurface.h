#pragma once

class C_OP_SetControlPointToWaterSurface : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x370, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nSourceCP; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nDestCP; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nFlowCP; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nActiveCP; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nActiveCPField; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01F4[0x4]; // offset 0x1F4
    CParticleCollectionFloatInput m_flRetestRate; // offset 0x1F8, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bAdaptiveThreshold; // offset 0x368, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0369[0x7]; // offset 0x369
};
