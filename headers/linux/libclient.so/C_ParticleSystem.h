#pragma once

class C_ParticleSystem : public C_BaseModelEntity /*0x0*/  // sizeof 0x11E0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0xC10, size 0x200, align 1
    bool m_bActive; // offset 0xE10, size 0x1, align 1
    bool m_bFrozen; // offset 0xE11, size 0x1, align 1
    char _pad_0E12[0x2]; // offset 0xE12
    float32 m_flFreezeTransitionDuration; // offset 0xE14, size 0x4, align 4
    int32 m_nStopType; // offset 0xE18, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0xE1C, size 0x1, align 1
    char _pad_0E1D[0x3]; // offset 0xE1D
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0xE20, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0xE28, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0xE2C, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0xE30, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0xE60, size 0x4, align 1
    CHandle< C_BaseEntity >[64] m_hControlPointEnts; // offset 0xE64, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0xF64, size 0x1, align 1
    char _pad_0F65[0x3]; // offset 0xF65
    CUtlString m_strDataString; // offset 0xF68, size 0x8, align 8
    bool m_bNoSave; // offset 0xF70, size 0x1, align 1
    bool m_bNoFreeze; // offset 0xF71, size 0x1, align 1
    bool m_bNoRamp; // offset 0xF72, size 0x1, align 1
    bool m_bStartActive; // offset 0xF73, size 0x1, align 1
    char _pad_0F74[0x4]; // offset 0xF74
    CUtlSymbolLarge m_iszEffectName; // offset 0xF78, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0xF80, size 0x200, align 8
    int32 m_nDataCP; // offset 0x1180, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0x1184, size 0xC, align 4
    int32 m_nTintCP; // offset 0x1190, size 0x4, align 4
    Color m_clrTint; // offset 0x1194, size 0x4, align 1
    char _pad_1198[0x20]; // offset 0x1198
    bool m_bOldActive; // offset 0x11B8, size 0x1, align 1 | MNotSaved
    bool m_bOldFrozen; // offset 0x11B9, size 0x1, align 1 | MNotSaved
    char _pad_11BA[0x26]; // offset 0x11BA
};
