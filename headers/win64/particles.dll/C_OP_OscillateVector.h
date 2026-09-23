#pragma once

class C_OP_OscillateVector : public CParticleFunctionOperator /*0x0*/  // sizeof 0x690, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    Vector m_RateMin; // offset 0x1E0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_RateMax; // offset 0x1EC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_FrequencyMin; // offset 0x1F8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_FrequencyMax; // offset 0x204, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    ParticleAttributeIndex_t m_nField; // offset 0x210, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bProportional; // offset 0x214, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bProportionalOp; // offset 0x215, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bOffset; // offset 0x216, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0217[0x1]; // offset 0x217
    float32 m_flStartTime_min; // offset 0x218, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStartTime_max; // offset 0x21C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime_min; // offset 0x220, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime_max; // offset 0x224, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOscMult; // offset 0x228, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOscAdd; // offset 0x3A0, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRateScale; // offset 0x518, size 0x178, align 8 | MPropertyFriendlyName
};
