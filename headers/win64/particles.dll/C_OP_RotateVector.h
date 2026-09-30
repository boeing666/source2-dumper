#pragma once

class C_OP_RotateVector : public CParticleFunctionOperator /*0x0*/  // sizeof 0x380, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    Vector m_vecRotAxisMin; // offset 0x1E4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecRotAxisMax; // offset 0x1F0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    float32 m_flRotRateMin; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flRotRateMax; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bNormalize; // offset 0x204, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0205[0x3]; // offset 0x205
    CPerParticleFloatInput m_flScale; // offset 0x208, size 0x178, align 8 | MPropertyFriendlyName
};
