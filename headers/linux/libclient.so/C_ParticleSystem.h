#pragma once

class C_ParticleSystem : public C_BaseModelEntity /*0x0*/  // sizeof 0x1508, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0xF38, size 0x200, align 1
    bool m_bActive; // offset 0x1138, size 0x1, align 1
    bool m_bFrozen; // offset 0x1139, size 0x1, align 1
    char _pad_113A[0x2]; // offset 0x113A
    float32 m_flFreezeTransitionDuration; // offset 0x113C, size 0x4, align 4
    int32 m_nStopType; // offset 0x1140, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0x1144, size 0x1, align 1
    char _pad_1145[0x3]; // offset 0x1145
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0x1148, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0x1150, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0x1154, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0x1158, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0x1188, size 0x4, align 1
    CHandle< C_BaseEntity >[64] m_hControlPointEnts; // offset 0x118C, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0x128C, size 0x1, align 1
    char _pad_128D[0x3]; // offset 0x128D
    CUtlString m_strDataString; // offset 0x1290, size 0x8, align 8
    bool m_bNoSave; // offset 0x1298, size 0x1, align 1
    bool m_bNoFreeze; // offset 0x1299, size 0x1, align 1
    bool m_bNoRamp; // offset 0x129A, size 0x1, align 1
    bool m_bStartActive; // offset 0x129B, size 0x1, align 1
    char _pad_129C[0x4]; // offset 0x129C
    CUtlSymbolLarge m_iszEffectName; // offset 0x12A0, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0x12A8, size 0x200, align 8
    int32 m_nDataCP; // offset 0x14A8, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0x14AC, size 0xC, align 4
    int32 m_nTintCP; // offset 0x14B8, size 0x4, align 4
    Color m_clrTint; // offset 0x14BC, size 0x4, align 1
    char _pad_14C0[0x20]; // offset 0x14C0
    bool m_bOldActive; // offset 0x14E0, size 0x1, align 1 | MNotSaved
    bool m_bOldFrozen; // offset 0x14E1, size 0x1, align 1 | MNotSaved
    char _pad_14E2[0x26]; // offset 0x14E2
};
