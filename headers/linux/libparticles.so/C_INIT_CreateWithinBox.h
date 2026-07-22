#pragma once

class C_INIT_CreateWithinBox : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xF10, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleVecInput m_vecMin; // offset 0x1D8, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_vecMax; // offset 0x868, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nControlPointNumber; // offset 0xEF8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalSpace; // offset 0xEFC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0EFD[0x3]; // offset 0xEFD
    CRandomNumberGeneratorParameters m_randomnessParameters; // offset 0xF00, size 0x8, align 4 | MPropertyFriendlyName
    bool m_bUseNewCode; // offset 0xF08, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0F09[0x7]; // offset 0xF09
};
