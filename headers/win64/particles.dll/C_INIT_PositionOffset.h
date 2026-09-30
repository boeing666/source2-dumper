#pragma once

class C_INIT_PositionOffset : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1010, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CPerParticleVecInput m_OffsetMin; // offset 0x1E8, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_OffsetMax; // offset 0x8C0, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleTransformInput m_TransformInput; // offset 0xF98, size 0x68, align 8 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0x1000, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bProportional; // offset 0x1001, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1002[0x2]; // offset 0x1002
    CRandomNumberGeneratorParameters m_randomnessParameters; // offset 0x1004, size 0x8, align 4 | MPropertyFriendlyName
    char _pad_100C[0x4]; // offset 0x100C
};
