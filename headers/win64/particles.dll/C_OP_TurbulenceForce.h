#pragma once

class C_OP_TurbulenceForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x230, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1F0]; // offset 0x0
    float32 m_flNoiseCoordScale0; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flNoiseCoordScale1; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flNoiseCoordScale2; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flNoiseCoordScale3; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecNoiseAmount0; // offset 0x200, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecNoiseAmount1; // offset 0x20C, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecNoiseAmount2; // offset 0x218, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecNoiseAmount3; // offset 0x224, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
};
