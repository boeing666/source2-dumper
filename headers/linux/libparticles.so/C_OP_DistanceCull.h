#pragma once

class C_OP_DistanceCull : public CParticleFunctionOperator /*0x0*/  // sizeof 0x350, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    int32 m_nControlPoint; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecPointOffset; // offset 0x1D4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleCollectionFloatInput m_flDistance; // offset 0x1E0, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bCullInside; // offset 0x348, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0349[0x3]; // offset 0x349
    ParticleAttributeIndex_t m_nAttribute; // offset 0x34C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
