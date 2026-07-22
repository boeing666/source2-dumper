#pragma once

class C_INIT_PositionOffset : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xF68, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleVecInput m_OffsetMin; // offset 0x1D8, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_OffsetMax; // offset 0x868, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleTransformInput m_TransformInput; // offset 0xEF8, size 0x60, align 8 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0xF58, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bProportional; // offset 0xF59, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0F5A[0x2]; // offset 0xF5A
    CRandomNumberGeneratorParameters m_randomnessParameters; // offset 0xF5C, size 0x8, align 4 | MPropertyFriendlyName
    char _pad_0F64[0x4]; // offset 0xF64
};
