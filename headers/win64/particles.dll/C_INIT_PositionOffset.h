#pragma once

class C_INIT_PositionOffset : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xFC8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleVecInput m_OffsetMin; // offset 0x1E0, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_OffsetMax; // offset 0x898, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleTransformInput m_TransformInput; // offset 0xF50, size 0x68, align 8 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0xFB8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bProportional; // offset 0xFB9, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0FBA[0x2]; // offset 0xFBA
    CRandomNumberGeneratorParameters m_randomnessParameters; // offset 0xFBC, size 0x8, align 4 | MPropertyFriendlyName
    char _pad_0FC4[0x4]; // offset 0xFC4
};
