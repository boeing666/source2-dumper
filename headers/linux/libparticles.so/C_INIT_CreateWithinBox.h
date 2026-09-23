#pragma once

class C_INIT_CreateWithinBox : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xF58, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleVecInput m_vecMin; // offset 0x1E0, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_vecMax; // offset 0x890, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nControlPointNumber; // offset 0xF40, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalSpace; // offset 0xF44, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0F45[0x3]; // offset 0xF45
    CRandomNumberGeneratorParameters m_randomnessParameters; // offset 0xF48, size 0x8, align 4 | MPropertyFriendlyName
    bool m_bUseNewCode; // offset 0xF50, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0F51[0x7]; // offset 0xF51
};
