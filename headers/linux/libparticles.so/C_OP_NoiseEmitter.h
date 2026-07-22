#pragma once

class C_OP_NoiseEmitter : public CParticleFunctionEmitter /*0x0*/  // sizeof 0x218, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    float32 m_flEmissionDuration; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStartTime; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEmissionScale; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName MParticleMaxVersion
    int32 m_nScaleControlPoint; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nScaleControlPointField; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nWorldNoisePoint; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bAbsVal; // offset 0x1EC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAbsValInv; // offset 0x1ED, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01EE[0x2]; // offset 0x1EE
    float32 m_flOffset; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMin; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMax; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flNoiseScale; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flWorldNoiseScale; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecOffsetLoc; // offset 0x204, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    float32 m_flWorldTimeScale; // offset 0x210, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0214[0x4]; // offset 0x214
};
