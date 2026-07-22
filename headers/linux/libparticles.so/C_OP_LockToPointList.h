#pragma once

class C_OP_LockToPointList : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01D4[0x4]; // offset 0x1D4
    CUtlVector< PointDefinition_t > m_pointList; // offset 0x1D8, size 0x18, align 8 | MPropertyFriendlyName
    bool m_bPlaceAlongPath; // offset 0x1F0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bClosedLoop; // offset 0x1F1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F2[0x2]; // offset 0x1F2
    int32 m_nNumPointsAlongPath; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
};
