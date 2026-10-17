#pragma once

struct NoiseStreamDef_t  // sizeof 0x50, align 0x8 (mathlib_extended) {MGetKV3ClassDefaults}
{
    NoiseStreamType_t m_nType; // offset 0x0, size 0x4, align 4
    NoiseStreamModifier_t m_nModifier; // offset 0x4, size 0x4, align 4
    NoiseStreamTurbulence_t m_nTurbulence; // offset 0x8, size 0x4, align 4
    float32 m_flOutputMin; // offset 0xC, size 0x4, align 4 | MPropertyAttributeRange
    float32 m_flOutputMax; // offset 0x10, size 0x4, align 4 | MPropertyAttributeRange
    float32 m_flScale; // offset 0x14, size 0x4, align 4 | MPropertyAttributeRange
    Vector m_vOffsetRate; // offset 0x18, size 0xC, align 4
    float32 m_flOffset; // offset 0x24, size 0x4, align 4 | MPropertyAttributeRange
    int32 m_nOctaves; // offset 0x28, size 0x4, align 4 | MPropertyAttributeRange
    float32 m_flTurbulenceScale; // offset 0x2C, size 0x4, align 4 | MPropertyAttributeRange
    float32 m_flTurbulenceMix; // offset 0x30, size 0x4, align 4 | MPropertyAttributeRange
    char _pad_0034[0x4]; // offset 0x34
    CUtlVector< NoiseOscillatorDef_t > m_Oscillators; // offset 0x38, size 0x18, align 8
};
