#pragma once

class C_ParticleSystem : public C_BaseModelEntity /*0x0*/  // sizeof 0x1580, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0xFB0, size 0x200, align 1
    bool m_bActive; // offset 0x11B0, size 0x1, align 1
    bool m_bFrozen; // offset 0x11B1, size 0x1, align 1
    char _pad_11B2[0x2]; // offset 0x11B2
    float32 m_flFreezeTransitionDuration; // offset 0x11B4, size 0x4, align 4
    int32 m_nStopType; // offset 0x11B8, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0x11BC, size 0x1, align 1
    char _pad_11BD[0x3]; // offset 0x11BD
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0x11C0, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0x11C8, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0x11CC, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0x11D0, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0x1200, size 0x4, align 1
    CHandle< C_BaseEntity >[64] m_hControlPointEnts; // offset 0x1204, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0x1304, size 0x1, align 1
    char _pad_1305[0x3]; // offset 0x1305
    CUtlString m_strDataString; // offset 0x1308, size 0x8, align 8
    bool m_bNoSave; // offset 0x1310, size 0x1, align 1
    bool m_bNoFreeze; // offset 0x1311, size 0x1, align 1
    bool m_bNoRamp; // offset 0x1312, size 0x1, align 1
    bool m_bStartActive; // offset 0x1313, size 0x1, align 1
    char _pad_1314[0x4]; // offset 0x1314
    CUtlSymbolLarge m_iszEffectName; // offset 0x1318, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0x1320, size 0x200, align 8
    int32 m_nDataCP; // offset 0x1520, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0x1524, size 0xC, align 4
    int32 m_nTintCP; // offset 0x1530, size 0x4, align 4
    Color m_clrTint; // offset 0x1534, size 0x4, align 1
    char _pad_1538[0x20]; // offset 0x1538
    bool m_bOldActive; // offset 0x1558, size 0x1, align 1 | MNotSaved
    bool m_bOldFrozen; // offset 0x1559, size 0x1, align 1 | MNotSaved
    char _pad_155A[0x26]; // offset 0x155A
};
