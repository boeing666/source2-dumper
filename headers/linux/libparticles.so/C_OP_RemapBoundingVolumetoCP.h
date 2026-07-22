#pragma once

class C_OP_RemapBoundingVolumetoCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x1E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nOutControlPointNumber; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputMin; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputMax; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMin; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMax; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
};
