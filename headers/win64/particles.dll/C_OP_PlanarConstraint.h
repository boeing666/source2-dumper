#pragma once

class C_OP_PlanarConstraint : public CParticleFunctionConstraint /*0x0*/  // sizeof 0x4F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    Vector m_PointOnPlane; // offset 0x1E0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_PlaneNormal; // offset 0x1EC, size 0xC, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bGlobalOrigin; // offset 0x1FC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bGlobalNormal; // offset 0x1FD, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01FE[0x2]; // offset 0x1FE
    CPerParticleFloatInput m_flRadiusScale; // offset 0x200, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMaximumDistanceToCP; // offset 0x378, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bUseOldCode; // offset 0x4F0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04F1[0x7]; // offset 0x4F1
};
