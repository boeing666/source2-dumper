#pragma once

class C_OP_PlanarConstraint : public CParticleFunctionConstraint /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    Vector m_PointOnPlane; // offset 0x1D0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_PlaneNormal; // offset 0x1DC, size 0xC, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bGlobalOrigin; // offset 0x1EC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bGlobalNormal; // offset 0x1ED, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01EE[0x2]; // offset 0x1EE
    CPerParticleFloatInput m_flRadiusScale; // offset 0x1F0, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMaximumDistanceToCP; // offset 0x358, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bUseOldCode; // offset 0x4C0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04C1[0x7]; // offset 0x4C1
};
