#pragma once

class C_OP_PlanarConstraint : public CParticleFunctionConstraint /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    Vector m_PointOnPlane; // offset 0x1D8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_PlaneNormal; // offset 0x1E4, size 0xC, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bGlobalOrigin; // offset 0x1F4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bGlobalNormal; // offset 0x1F5, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F6[0x2]; // offset 0x1F6
    CPerParticleFloatInput m_flRadiusScale; // offset 0x1F8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMaximumDistanceToCP; // offset 0x368, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bUseOldCode; // offset 0x4D8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04D9[0x7]; // offset 0x4D9
};
