#pragma once

class C_OP_DragRelativeToPlane : public CParticleFunctionOperator /*0x0*/  // sizeof 0xBB8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleCollectionFloatInput m_flDragAtPlane; // offset 0x1E0, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flFalloff; // offset 0x358, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bDirectional; // offset 0x4D0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04D1[0x7]; // offset 0x4D1
    CParticleCollectionVecInput m_vecPlaneNormal; // offset 0x4D8, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nControlPointNumber; // offset 0xBB0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0BB4[0x4]; // offset 0xBB4
};
