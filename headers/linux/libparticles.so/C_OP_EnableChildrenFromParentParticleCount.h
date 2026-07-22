#pragma once

class C_OP_EnableChildrenFromParentParticleCount : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x350, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nChildGroupID; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nFirstChild; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01DC[0x4]; // offset 0x1DC
    CParticleCollectionFloatInput m_nNumChildrenToEnable; // offset 0x1E0, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bDisableChildren; // offset 0x348, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bPlayEndcapOnStop; // offset 0x349, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bDestroyImmediately; // offset 0x34A, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_034B[0x5]; // offset 0x34B
};
