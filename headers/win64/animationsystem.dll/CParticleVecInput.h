#pragma once

class CParticleVecInput : public CParticleInput /*0x0*/  // sizeof 0x6D8, align 0x8 [vtable] (particleslib) {MGetKV3ClassDefaults MCustomFGDMetadata}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    ParticleVecType_t m_nType; // offset 0x10, size 0x4, align 4
    Vector m_vLiteralValue; // offset 0x14, size 0xC, align 4
    Color m_LiteralColor; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
    CParticleNamedValueRef m_NamedValue; // offset 0x28, size 0x40, align 8
    bool m_bFollowNamedValue; // offset 0x68, size 0x1, align 1
    char _pad_0069[0x3]; // offset 0x69
    ParticleAttributeIndex_t m_nVectorAttribute; // offset 0x6C, size 0x4, align 255
    Vector m_vVectorAttributeScale; // offset 0x70, size 0xC, align 4
    int32 m_nControlPoint; // offset 0x7C, size 0x4, align 4
    int32 m_nDeltaControlPoint; // offset 0x80, size 0x4, align 4
    Vector m_vCPValueScale; // offset 0x84, size 0xC, align 4
    Vector m_vCPRelativePosition; // offset 0x90, size 0xC, align 4
    Vector m_vCPRelativeDir; // offset 0x9C, size 0xC, align 4
    CParticleFloatInput m_FloatComponentX; // offset 0xA8, size 0x178, align 8
    CParticleFloatInput m_FloatComponentY; // offset 0x220, size 0x178, align 8
    CParticleFloatInput m_FloatComponentZ; // offset 0x398, size 0x178, align 8
    CParticleFloatInput m_FloatInterp; // offset 0x510, size 0x178, align 8
    float32 m_flInterpInput0; // offset 0x688, size 0x4, align 4
    float32 m_flInterpInput1; // offset 0x68C, size 0x4, align 4
    Vector m_vInterpOutput0; // offset 0x690, size 0xC, align 4
    Vector m_vInterpOutput1; // offset 0x69C, size 0xC, align 4
    CColorGradient m_Gradient; // offset 0x6A8, size 0x18, align 8
    Vector m_vRandomMin; // offset 0x6C0, size 0xC, align 4
    Vector m_vRandomMax; // offset 0x6CC, size 0xC, align 4
};
