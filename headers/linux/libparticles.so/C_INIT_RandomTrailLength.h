#pragma once

class C_INIT_RandomTrailLength : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1E0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    float32 m_flMinLength; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxLength; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLengthRandExponent; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
};
