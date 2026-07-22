#pragma once

class C_OP_OscillateVector : public CParticleFunctionOperator /*0x0*/  // sizeof 0x670, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    Vector m_RateMin; // offset 0x1D8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_RateMax; // offset 0x1E4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_FrequencyMin; // offset 0x1F0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_FrequencyMax; // offset 0x1FC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    ParticleAttributeIndex_t m_nField; // offset 0x208, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bProportional; // offset 0x20C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bProportionalOp; // offset 0x20D, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bOffset; // offset 0x20E, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_020F[0x1]; // offset 0x20F
    float32 m_flStartTime_min; // offset 0x210, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStartTime_max; // offset 0x214, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime_min; // offset 0x218, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime_max; // offset 0x21C, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOscMult; // offset 0x220, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOscAdd; // offset 0x390, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRateScale; // offset 0x500, size 0x170, align 8 | MPropertyFriendlyName
};
