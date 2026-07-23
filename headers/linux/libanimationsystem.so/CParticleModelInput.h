#pragma once

class CParticleModelInput : public CParticleInput /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (particleslib) {MGetKV3ClassDefaults MPropertyCustomEditor MCustomFGDMetadata}
{
public:
    char _pad_0000[0xC]; // offset 0x0
    ParticleModelType_t m_nType; // offset 0xC, size 0x4, align 4
    CParticleNamedValueRef m_NamedValue; // offset 0x10, size 0x40, align 8
    int32 m_nControlPoint; // offset 0x50, size 0x4, align 4
    char _pad_0054[0x4]; // offset 0x54
};
