#pragma once

class C_OP_OrientTo2dDirection : public CParticleFunctionOperator /*0x0*/  // sizeof 0x8C8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleVecInput m_vecInput; // offset 0x1E0, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    float32 m_flRotOffset; // offset 0x8B8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSpinStrength; // offset 0x8BC, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x8C0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_08C4[0x4]; // offset 0x8C4
};
