#pragma once

class CParticleModelInput : public CParticleInput /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (particleslib) {MGetKV3ClassDefaults MPropertyCustomEditor MCustomFGDMetadata}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    ParticleModelType_t m_nType; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
    CParticleNamedValueRef m_NamedValue; // offset 0x18, size 0x40, align 8
    int32 m_nControlPoint; // offset 0x58, size 0x4, align 4
    char _pad_005C[0x4]; // offset 0x5C
};
