#pragma once

class C_OP_OscillateScalar : public CParticleFunctionOperator /*0x0*/  // sizeof 0x208, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    float32 m_RateMin; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_RateMax; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_FrequencyMin; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_FrequencyMax; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nField; // offset 0x1E8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bProportional; // offset 0x1EC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bProportionalOp; // offset 0x1ED, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01EE[0x2]; // offset 0x1EE
    float32 m_flStartTime_min; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStartTime_max; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime_min; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime_max; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOscMult; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOscAdd; // offset 0x204, size 0x4, align 4 | MPropertyFriendlyName
};
