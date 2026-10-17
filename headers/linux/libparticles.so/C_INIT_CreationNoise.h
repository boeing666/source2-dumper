#pragma once

class C_INIT_CreationNoise : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x208, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1DC, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bAbsVal; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAbsValInv; // offset 0x1E1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E2[0x2]; // offset 0x1E2
    float32 m_flOffset; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMin; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMax; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flNoiseScale; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flNoiseScaleLoc; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecOffsetLoc; // offset 0x1F8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    float32 m_flWorldTimeScale; // offset 0x204, size 0x4, align 4 | MPropertyFriendlyName
};
