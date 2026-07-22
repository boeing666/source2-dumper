#pragma once

class C_OP_OscillateVector : public CParticleFunctionOperator /*0x0*/  // sizeof 0x650, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    Vector m_RateMin; // offset 0x1D0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_RateMax; // offset 0x1DC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_FrequencyMin; // offset 0x1E8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_FrequencyMax; // offset 0x1F4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    ParticleAttributeIndex_t m_nField; // offset 0x200, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bProportional; // offset 0x204, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bProportionalOp; // offset 0x205, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bOffset; // offset 0x206, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0207[0x1]; // offset 0x207
    float32 m_flStartTime_min; // offset 0x208, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStartTime_max; // offset 0x20C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime_min; // offset 0x210, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime_max; // offset 0x214, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOscMult; // offset 0x218, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOscAdd; // offset 0x380, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRateScale; // offset 0x4E8, size 0x168, align 8 | MPropertyFriendlyName
};
