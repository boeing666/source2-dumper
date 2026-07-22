#pragma once

class CParticleSystem : public CBaseModelEntity /*0x0*/  // sizeof 0xD00, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x778]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0x778, size 0x200, align 1
    bool m_bActive; // offset 0x978, size 0x1, align 1
    bool m_bFrozen; // offset 0x979, size 0x1, align 1
    char _pad_097A[0x2]; // offset 0x97A
    float32 m_flFreezeTransitionDuration; // offset 0x97C, size 0x4, align 4
    int32 m_nStopType; // offset 0x980, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0x984, size 0x1, align 1
    char _pad_0985[0x3]; // offset 0x985
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0x988, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0x990, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0x994, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0x998, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0x9C8, size 0x4, align 1
    CHandle< CBaseEntity >[64] m_hControlPointEnts; // offset 0x9CC, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0xACC, size 0x1, align 1
    char _pad_0ACD[0x3]; // offset 0xACD
    CUtlString m_strDataString; // offset 0xAD0, size 0x8, align 8
    bool m_bNoSave; // offset 0xAD8, size 0x1, align 1
    bool m_bNoFreeze; // offset 0xAD9, size 0x1, align 1
    bool m_bNoRamp; // offset 0xADA, size 0x1, align 1
    bool m_bStartActive; // offset 0xADB, size 0x1, align 1
    char _pad_0ADC[0x4]; // offset 0xADC
    CUtlSymbolLarge m_iszEffectName; // offset 0xAE0, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0xAE8, size 0x200, align 8
    int32 m_nDataCP; // offset 0xCE8, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0xCEC, size 0xC, align 4
    int32 m_nTintCP; // offset 0xCF8, size 0x4, align 4
    Color m_clrTint; // offset 0xCFC, size 0x4, align 1
};
