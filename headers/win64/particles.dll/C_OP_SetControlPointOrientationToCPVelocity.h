#pragma once

class C_OP_SetControlPointOrientationToCPVelocity : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x1F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nCPInput; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPOutput; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
};
