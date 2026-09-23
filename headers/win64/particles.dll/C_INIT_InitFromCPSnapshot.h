#pragma once

class C_INIT_InitFromCPSnapshot : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x500, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x4]; // offset 0x1EC
    CUtlString m_strSnapshotSubset; // offset 0x1F0, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleAttributeIndex_t m_nAttributeToRead; // offset 0x1F8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nAttributeToWrite; // offset 0x1FC, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nLocalSpaceCP; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bRandom; // offset 0x204, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bReverse; // offset 0x205, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0206[0x2]; // offset 0x206
    CParticleCollectionFloatInput m_nSnapShotIncrement; // offset 0x208, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_nManualSnapshotIndex; // offset 0x380, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nRandomSeed; // offset 0x4F8, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bLocalSpaceAngles; // offset 0x4FC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04FD[0x3]; // offset 0x4FD
};
