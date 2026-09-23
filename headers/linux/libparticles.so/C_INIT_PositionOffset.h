#pragma once

class C_INIT_PositionOffset : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xFB0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleVecInput m_OffsetMin; // offset 0x1E0, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_OffsetMax; // offset 0x890, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleTransformInput m_TransformInput; // offset 0xF40, size 0x60, align 8 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0xFA0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bProportional; // offset 0xFA1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0FA2[0x2]; // offset 0xFA2
    CRandomNumberGeneratorParameters m_randomnessParameters; // offset 0xFA4, size 0x8, align 4 | MPropertyFriendlyName
    char _pad_0FAC[0x4]; // offset 0xFAC
};
