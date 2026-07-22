#pragma once

class C_OP_SetControlPointOrientationToCPVelocity : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x1E0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nCPInput; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPOutput; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01DC[0x4]; // offset 0x1DC
};
