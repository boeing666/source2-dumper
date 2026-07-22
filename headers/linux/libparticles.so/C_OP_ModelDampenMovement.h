#pragma once

class C_OP_ModelDampenMovement : public CParticleFunctionOperator /*0x0*/  // sizeof 0x8F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bBoundBox; // offset 0x1D4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bOutside; // offset 0x1D5, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x1D6, size 0x1, align 1 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x1D7, size 0x80, align 1 | MPropertyFriendlyName
    char _pad_0257[0x1]; // offset 0x257
    CPerParticleVecInput m_vecPosOffset; // offset 0x258, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    float32 m_fDrag; // offset 0x8E8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_08EC[0x4]; // offset 0x8EC
};
