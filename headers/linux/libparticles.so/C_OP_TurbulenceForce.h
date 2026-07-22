#pragma once

class C_OP_TurbulenceForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x220, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    float32 m_flNoiseCoordScale0; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flNoiseCoordScale1; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flNoiseCoordScale2; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flNoiseCoordScale3; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecNoiseAmount0; // offset 0x1EC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecNoiseAmount1; // offset 0x1F8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecNoiseAmount2; // offset 0x204, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecNoiseAmount3; // offset 0x210, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_021C[0x4]; // offset 0x21C
};
