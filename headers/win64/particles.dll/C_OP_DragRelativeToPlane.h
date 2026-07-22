#pragma once

class C_OP_DragRelativeToPlane : public CParticleFunctionOperator /*0x0*/  // sizeof 0xB80, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleCollectionFloatInput m_flDragAtPlane; // offset 0x1D8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flFalloff; // offset 0x348, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bDirectional; // offset 0x4B8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04B9[0x7]; // offset 0x4B9
    CParticleCollectionVecInput m_vecPlaneNormal; // offset 0x4C0, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nControlPointNumber; // offset 0xB78, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0B7C[0x4]; // offset 0xB7C
};
