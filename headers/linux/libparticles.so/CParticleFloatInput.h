#pragma once

class CParticleFloatInput : public CParticleInput /*0x0*/  // sizeof 0x168, align 0x8 [vtable] (particleslib) {MGetKV3ClassDefaults MCustomFGDMetadata}
{
public:
    char _pad_0000[0xC]; // offset 0x0
    ParticleFloatType_t m_nType; // offset 0xC, size 0x4, align 4
    ParticleFloatMapType_t m_nMapType; // offset 0x10, size 0x4, align 4
    float32 m_flLiteralValue; // offset 0x14, size 0x4, align 4
    CParticleNamedValueRef m_NamedValue; // offset 0x18, size 0x40, align 8
    int32 m_nControlPoint; // offset 0x58, size 0x4, align 4
    ParticleAttributeIndex_t m_nScalarAttribute; // offset 0x5C, size 0x4, align 255
    ParticleAttributeIndex_t m_nVectorAttribute; // offset 0x60, size 0x4, align 255
    int32 m_nVectorComponent; // offset 0x64, size 0x4, align 4
    bool m_bReverseOrder; // offset 0x68, size 0x1, align 1
    char _pad_0069[0x3]; // offset 0x69
    float32 m_flRandomMin; // offset 0x6C, size 0x4, align 4
    float32 m_flRandomMax; // offset 0x70, size 0x4, align 4
    bool m_bHasRandomSignFlip; // offset 0x74, size 0x1, align 1
    char _pad_0075[0x3]; // offset 0x75
    int32 m_nRandomSeed; // offset 0x78, size 0x4, align 4
    ParticleFloatRandomMode_t m_nRandomMode; // offset 0x7C, size 0x4, align 4
    char _pad_0080[0x8]; // offset 0x80
    CUtlString m_strSnapshotSubset; // offset 0x88, size 0x8, align 8
    float32 m_flLOD0; // offset 0x90, size 0x4, align 4
    float32 m_flLOD1; // offset 0x94, size 0x4, align 4
    float32 m_flLOD2; // offset 0x98, size 0x4, align 4
    float32 m_flLOD3; // offset 0x9C, size 0x4, align 4
    ParticleAttributeIndex_t m_nNoiseInputVectorAttribute; // offset 0xA0, size 0x4, align 255
    float32 m_flNoiseOutputMin; // offset 0xA4, size 0x4, align 4
    float32 m_flNoiseOutputMax; // offset 0xA8, size 0x4, align 4
    float32 m_flNoiseScale; // offset 0xAC, size 0x4, align 4
    Vector m_vecNoiseOffsetRate; // offset 0xB0, size 0xC, align 4
    float32 m_flNoiseOffset; // offset 0xBC, size 0x4, align 4
    int32 m_nNoiseOctaves; // offset 0xC0, size 0x4, align 4
    PFNoiseTurbulence_t m_nNoiseTurbulence; // offset 0xC4, size 0x4, align 4
    PFNoiseType_t m_nNoiseType; // offset 0xC8, size 0x4, align 4
    PFNoiseModifier_t m_nNoiseModifier; // offset 0xCC, size 0x4, align 4
    float32 m_flNoiseTurbulenceScale; // offset 0xD0, size 0x4, align 4
    float32 m_flNoiseTurbulenceMix; // offset 0xD4, size 0x4, align 4
    float32 m_flNoiseImgPreviewScale; // offset 0xD8, size 0x4, align 4
    bool m_bNoiseImgPreviewLive; // offset 0xDC, size 0x1, align 1
    char _pad_00DD[0xB]; // offset 0xDD
    float32 m_flNoCameraFallback; // offset 0xE8, size 0x4, align 4
    bool m_bUseBoundsCenter; // offset 0xEC, size 0x1, align 1
    char _pad_00ED[0x3]; // offset 0xED
    ParticleFloatInputMode_t m_nInputMode; // offset 0xF0, size 0x4, align 4
    float32 m_flMultFactor; // offset 0xF4, size 0x4, align 4
    float32 m_flInput0; // offset 0xF8, size 0x4, align 4
    float32 m_flInput1; // offset 0xFC, size 0x4, align 4
    float32 m_flOutput0; // offset 0x100, size 0x4, align 4
    float32 m_flOutput1; // offset 0x104, size 0x4, align 4
    float32 m_flNotchedRangeMin; // offset 0x108, size 0x4, align 4
    float32 m_flNotchedRangeMax; // offset 0x10C, size 0x4, align 4
    float32 m_flNotchedOutputOutside; // offset 0x110, size 0x4, align 4
    float32 m_flNotchedOutputInside; // offset 0x114, size 0x4, align 4
    ParticleFloatRoundType_t m_nRoundType; // offset 0x118, size 0x4, align 4
    ParticleFloatBiasType_t m_nBiasType; // offset 0x11C, size 0x4, align 4
    float32 m_flBiasParameter; // offset 0x120, size 0x4, align 4
    char _pad_0124[0x4]; // offset 0x124
    CPiecewiseCurve m_Curve; // offset 0x128, size 0x40, align 8
};
