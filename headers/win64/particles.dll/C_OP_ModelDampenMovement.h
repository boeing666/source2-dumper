#pragma once

class C_OP_ModelDampenMovement : public CParticleFunctionOperator /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bBoundBox; // offset 0x1DC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bOutside; // offset 0x1DD, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x1DE, size 0x1, align 1 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x1DF, size 0x80, align 1 | MPropertyFriendlyName
    char _pad_025F[0x1]; // offset 0x25F
    CPerParticleVecInput m_vecPosOffset; // offset 0x260, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    float32 m_fDrag; // offset 0x918, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_091C[0x4]; // offset 0x91C
};
