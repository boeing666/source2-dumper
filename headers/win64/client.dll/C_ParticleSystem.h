#pragma once

class C_ParticleSystem : public C_BaseModelEntity /*0x0*/  // sizeof 0x1058, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0xA88, size 0x200, align 1
    bool m_bActive; // offset 0xC88, size 0x1, align 1
    bool m_bFrozen; // offset 0xC89, size 0x1, align 1
    char _pad_0C8A[0x2]; // offset 0xC8A
    float32 m_flFreezeTransitionDuration; // offset 0xC8C, size 0x4, align 4
    int32 m_nStopType; // offset 0xC90, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0xC94, size 0x1, align 1
    char _pad_0C95[0x3]; // offset 0xC95
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0xC98, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0xCA0, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0xCA4, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0xCA8, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0xCD8, size 0x4, align 1
    CHandle< C_BaseEntity >[64] m_hControlPointEnts; // offset 0xCDC, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0xDDC, size 0x1, align 1
    char _pad_0DDD[0x3]; // offset 0xDDD
    CUtlString m_strDataString; // offset 0xDE0, size 0x8, align 8
    bool m_bNoSave; // offset 0xDE8, size 0x1, align 1
    bool m_bNoFreeze; // offset 0xDE9, size 0x1, align 1
    bool m_bNoRamp; // offset 0xDEA, size 0x1, align 1
    bool m_bStartActive; // offset 0xDEB, size 0x1, align 1
    char _pad_0DEC[0x4]; // offset 0xDEC
    CUtlSymbolLarge m_iszEffectName; // offset 0xDF0, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0xDF8, size 0x200, align 8
    int32 m_nDataCP; // offset 0xFF8, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0xFFC, size 0xC, align 4
    int32 m_nTintCP; // offset 0x1008, size 0x4, align 4
    Color m_clrTint; // offset 0x100C, size 0x4, align 1
    char _pad_1010[0x20]; // offset 0x1010
    bool m_bOldActive; // offset 0x1030, size 0x1, align 1 | MNotSaved
    bool m_bOldFrozen; // offset 0x1031, size 0x1, align 1 | MNotSaved
    char _pad_1032[0x26]; // offset 0x1032
};
