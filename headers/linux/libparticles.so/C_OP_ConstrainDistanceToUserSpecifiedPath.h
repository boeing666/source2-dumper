#pragma once

class C_OP_ConstrainDistanceToUserSpecifiedPath : public CParticleFunctionConstraint /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    float32 m_fMinDistance; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxDistance; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTimeScale; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLoopedPath; // offset 0x1DC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01DD[0x3]; // offset 0x1DD
    CUtlVector< PointDefinitionWithTimeValues_t > m_pointList; // offset 0x1E0, size 0x18, align 8 | MPropertyFriendlyName
};
