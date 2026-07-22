#pragma once

class C_INIT_ChaoticAttractor : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    float32 m_flAParm; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flBParm; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flCParm; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flDParm; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flScale; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSpeedMin; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSpeedMax; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nBaseCP; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bUniformSpeed; // offset 0x1F4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F5[0x3]; // offset 0x1F5
};
