#pragma once

class C_INIT_AgeNoise : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x210, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    bool m_bAbsVal; // offset 0x1E8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAbsValInv; // offset 0x1E9, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01EA[0x2]; // offset 0x1EA
    float32 m_flOffset; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flAgeMin; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flAgeMax; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flNoiseScale; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flNoiseScaleLoc; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecOffsetLoc; // offset 0x200, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_020C[0x4]; // offset 0x20C
};
