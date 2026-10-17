#pragma once

class C_OP_ForceBasedOnDistanceToPlane : public CParticleFunctionForce /*0x0*/  // sizeof 0x228, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1F0]; // offset 0x0
    float32 m_flMinDist; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecForceAtMinDist; // offset 0x1F4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    float32 m_flMaxDist; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecForceAtMaxDist; // offset 0x204, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecPlaneNormal; // offset 0x210, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nControlPointNumber; // offset 0x21C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flExponent; // offset 0x220, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0224[0x4]; // offset 0x224
};
