#pragma once

class C_OP_InheritFromPeerSystem : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1E0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldInput; // offset 0x1D4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nIncrement; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nGroupID; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
};
