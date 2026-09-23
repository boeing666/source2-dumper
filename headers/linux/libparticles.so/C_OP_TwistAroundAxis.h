#pragma once

class C_OP_TwistAroundAxis : public CParticleFunctionForce /*0x0*/  // sizeof 0x200, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E4]; // offset 0x0
    float32 m_fForceAmount; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_TwistAxis; // offset 0x1E8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bLocalSpace; // offset 0x1F4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F5[0x3]; // offset 0x1F5
    int32 m_nControlPointNumber; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01FC[0x4]; // offset 0x1FC
};
