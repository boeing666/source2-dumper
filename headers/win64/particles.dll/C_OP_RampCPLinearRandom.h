#pragma once

class C_OP_RampCPLinearRandom : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x208, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nOutControlPointNumber; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecRateMin; // offset 0x1EC, size 0xC, align 4 | MPropertyFriendlyName
    Vector m_vecRateMax; // offset 0x1F8, size 0xC, align 4 | MPropertyFriendlyName
    char _pad_0204[0x4]; // offset 0x204
};
