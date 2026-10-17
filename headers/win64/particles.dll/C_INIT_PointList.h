#pragma once

class C_INIT_PointList : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x210, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01EC[0x4]; // offset 0x1EC
    CUtlVector< PointDefinition_t > m_pointList; // offset 0x1F0, size 0x18, align 8 | MPropertyFriendlyName
    bool m_bPlaceAlongPath; // offset 0x208, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bClosedLoop; // offset 0x209, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_020A[0x2]; // offset 0x20A
    int32 m_nNumPointsAlongPath; // offset 0x20C, size 0x4, align 4 | MPropertyFriendlyName
};
