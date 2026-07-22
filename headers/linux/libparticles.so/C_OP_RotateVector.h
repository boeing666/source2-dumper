#pragma once

class C_OP_RotateVector : public CParticleFunctionOperator /*0x0*/  // sizeof 0x360, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    Vector m_vecRotAxisMin; // offset 0x1D4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecRotAxisMax; // offset 0x1E0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    float32 m_flRotRateMin; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flRotRateMax; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bNormalize; // offset 0x1F4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F5[0x3]; // offset 0x1F5
    CPerParticleFloatInput m_flScale; // offset 0x1F8, size 0x168, align 8 | MPropertyFriendlyName
};
