#pragma once

class C_OP_ConstrainDistanceToPath : public CParticleFunctionConstraint /*0x0*/  // sizeof 0x230, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    float32 m_fMinDistance; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxDistance0; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxDistanceMid; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxDistance1; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    CPathParameters m_PathParameters; // offset 0x1E0, size 0x40, align 16
    float32 m_flTravelTime; // offset 0x220, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldScale; // offset 0x224, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nManualTField; // offset 0x228, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_022C[0x4]; // offset 0x22C
};
