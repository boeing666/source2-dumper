#pragma once

class C_ParticleSystem : public C_BaseModelEntity /*0x0*/  // sizeof 0x1668, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0x1098, size 0x200, align 1
    bool m_bActive; // offset 0x1298, size 0x1, align 1
    bool m_bFrozen; // offset 0x1299, size 0x1, align 1
    char _pad_129A[0x2]; // offset 0x129A
    float32 m_flFreezeTransitionDuration; // offset 0x129C, size 0x4, align 4
    int32 m_nStopType; // offset 0x12A0, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0x12A4, size 0x1, align 1
    char _pad_12A5[0x3]; // offset 0x12A5
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0x12A8, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0x12B0, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0x12B4, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0x12B8, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0x12E8, size 0x4, align 1
    CHandle< C_BaseEntity >[64] m_hControlPointEnts; // offset 0x12EC, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0x13EC, size 0x1, align 1
    char _pad_13ED[0x3]; // offset 0x13ED
    CUtlString m_strDataString; // offset 0x13F0, size 0x8, align 8
    bool m_bNoSave; // offset 0x13F8, size 0x1, align 1
    bool m_bNoFreeze; // offset 0x13F9, size 0x1, align 1
    bool m_bNoRamp; // offset 0x13FA, size 0x1, align 1
    bool m_bStartActive; // offset 0x13FB, size 0x1, align 1
    char _pad_13FC[0x4]; // offset 0x13FC
    CUtlSymbolLarge m_iszEffectName; // offset 0x1400, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0x1408, size 0x200, align 8
    int32 m_nDataCP; // offset 0x1608, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0x160C, size 0xC, align 4
    int32 m_nTintCP; // offset 0x1618, size 0x4, align 4
    Color m_clrTint; // offset 0x161C, size 0x4, align 4
    char _pad_1620[0x20]; // offset 0x1620
    bool m_bOldActive; // offset 0x1640, size 0x1, align 1 | MNotSaved
    bool m_bOldFrozen; // offset 0x1641, size 0x1, align 1 | MNotSaved
    char _pad_1642[0x26]; // offset 0x1642
};
