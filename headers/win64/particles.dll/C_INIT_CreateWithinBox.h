#pragma once

class C_INIT_CreateWithinBox : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xFB0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CPerParticleVecInput m_vecMin; // offset 0x1E8, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_vecMax; // offset 0x8C0, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nControlPointNumber; // offset 0xF98, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalSpace; // offset 0xF9C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0F9D[0x3]; // offset 0xF9D
    CRandomNumberGeneratorParameters m_randomnessParameters; // offset 0xFA0, size 0x8, align 4 | MPropertyFriendlyName
    bool m_bUseNewCode; // offset 0xFA8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0FA9[0x7]; // offset 0xFA9
};
