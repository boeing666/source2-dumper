#pragma once

class C_OP_RampScalarLinearSimple : public CParticleFunctionOperator /*0x0*/  // sizeof 0x220, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    float32 m_Rate; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStartTime; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x24]; // offset 0x1EC
    ParticleAttributeIndex_t m_nField; // offset 0x210, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0214[0xC]; // offset 0x214
};
