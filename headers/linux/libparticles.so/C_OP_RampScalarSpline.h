#pragma once

class C_OP_RampScalarSpline : public CParticleFunctionOperator /*0x0*/  // sizeof 0x220, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    float32 m_RateMin; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_RateMax; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStartTime_min; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStartTime_max; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime_min; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime_max; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flBias; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x24]; // offset 0x1EC
    ParticleAttributeIndex_t m_nField; // offset 0x210, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bProportionalOp; // offset 0x214, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bEaseOut; // offset 0x215, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0216[0xA]; // offset 0x216
};
