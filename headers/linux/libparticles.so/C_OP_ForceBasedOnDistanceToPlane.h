#pragma once

class C_OP_ForceBasedOnDistanceToPlane : public CParticleFunctionForce /*0x0*/  // sizeof 0x210, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    float32 m_flMinDist; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecForceAtMinDist; // offset 0x1E0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    float32 m_flMaxDist; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecForceAtMaxDist; // offset 0x1F0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecPlaneNormal; // offset 0x1FC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nControlPointNumber; // offset 0x208, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flExponent; // offset 0x20C, size 0x4, align 4 | MPropertyFriendlyName
};
