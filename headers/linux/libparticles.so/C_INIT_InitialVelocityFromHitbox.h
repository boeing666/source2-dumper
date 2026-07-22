#pragma once

class C_INIT_InitialVelocityFromHitbox : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x268, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    float32 m_flVelocityMin; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flVelocityMax; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x1E0, size 0x80, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x260, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0261[0x7]; // offset 0x261
};
