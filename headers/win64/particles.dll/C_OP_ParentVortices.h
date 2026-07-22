#pragma once

class C_OP_ParentVortices : public CParticleFunctionForce /*0x0*/  // sizeof 0x200, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    float32 m_flForceScale; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecTwistAxis; // offset 0x1EC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bFlipBasedOnYaw; // offset 0x1F8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F9[0x7]; // offset 0x1F9
};
