#pragma once

class CParticleVecInput : public CParticleInput /*0x0*/  // sizeof 0x690, align 0x8 [vtable] (particleslib) {MGetKV3ClassDefaults MCustomFGDMetadata}
{
public:
    char _pad_0000[0xC]; // offset 0x0
    ParticleVecType_t m_nType; // offset 0xC, size 0x4, align 4
    Vector m_vLiteralValue; // offset 0x10, size 0xC, align 4
    Color m_LiteralColor; // offset 0x1C, size 0x4, align 1
    CParticleNamedValueRef m_NamedValue; // offset 0x20, size 0x40, align 8
    bool m_bFollowNamedValue; // offset 0x60, size 0x1, align 1
    char _pad_0061[0x3]; // offset 0x61
    ParticleAttributeIndex_t m_nVectorAttribute; // offset 0x64, size 0x4, align 255
    Vector m_vVectorAttributeScale; // offset 0x68, size 0xC, align 4
    int32 m_nControlPoint; // offset 0x74, size 0x4, align 4
    int32 m_nDeltaControlPoint; // offset 0x78, size 0x4, align 4
    Vector m_vCPValueScale; // offset 0x7C, size 0xC, align 4
    Vector m_vCPRelativePosition; // offset 0x88, size 0xC, align 4
    Vector m_vCPRelativeDir; // offset 0x94, size 0xC, align 4
    CParticleFloatInput m_FloatComponentX; // offset 0xA0, size 0x168, align 8
    CParticleFloatInput m_FloatComponentY; // offset 0x208, size 0x168, align 8
    CParticleFloatInput m_FloatComponentZ; // offset 0x370, size 0x168, align 8
    CParticleFloatInput m_FloatInterp; // offset 0x4D8, size 0x168, align 8
    float32 m_flInterpInput0; // offset 0x640, size 0x4, align 4
    float32 m_flInterpInput1; // offset 0x644, size 0x4, align 4
    Vector m_vInterpOutput0; // offset 0x648, size 0xC, align 4
    Vector m_vInterpOutput1; // offset 0x654, size 0xC, align 4
    CColorGradient m_Gradient; // offset 0x660, size 0x18, align 8
    Vector m_vRandomMin; // offset 0x678, size 0xC, align 4
    Vector m_vRandomMax; // offset 0x684, size 0xC, align 4
};
