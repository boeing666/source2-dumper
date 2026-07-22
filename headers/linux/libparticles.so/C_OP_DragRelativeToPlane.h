#pragma once

class C_OP_DragRelativeToPlane : public CParticleFunctionOperator /*0x0*/  // sizeof 0xB40, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CParticleCollectionFloatInput m_flDragAtPlane; // offset 0x1D0, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flFalloff; // offset 0x338, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bDirectional; // offset 0x4A0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04A1[0x7]; // offset 0x4A1
    CParticleCollectionVecInput m_vecPlaneNormal; // offset 0x4A8, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nControlPointNumber; // offset 0xB38, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0B3C[0x4]; // offset 0xB3C
};
