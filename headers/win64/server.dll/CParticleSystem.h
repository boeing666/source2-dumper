#pragma once

class CParticleSystem : public CBaseModelEntity /*0x0*/  // sizeof 0xCF8, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x770]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0x770, size 0x200, align 1
    bool m_bActive; // offset 0x970, size 0x1, align 1
    bool m_bFrozen; // offset 0x971, size 0x1, align 1
    char _pad_0972[0x2]; // offset 0x972
    float32 m_flFreezeTransitionDuration; // offset 0x974, size 0x4, align 4
    int32 m_nStopType; // offset 0x978, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0x97C, size 0x1, align 1
    char _pad_097D[0x3]; // offset 0x97D
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0x980, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0x988, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0x98C, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0x990, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0x9C0, size 0x4, align 1
    CHandle< CBaseEntity >[64] m_hControlPointEnts; // offset 0x9C4, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0xAC4, size 0x1, align 1
    char _pad_0AC5[0x3]; // offset 0xAC5
    CUtlString m_strDataString; // offset 0xAC8, size 0x8, align 8
    bool m_bNoSave; // offset 0xAD0, size 0x1, align 1
    bool m_bNoFreeze; // offset 0xAD1, size 0x1, align 1
    bool m_bNoRamp; // offset 0xAD2, size 0x1, align 1
    bool m_bStartActive; // offset 0xAD3, size 0x1, align 1
    char _pad_0AD4[0x4]; // offset 0xAD4
    CUtlSymbolLarge m_iszEffectName; // offset 0xAD8, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0xAE0, size 0x200, align 8
    int32 m_nDataCP; // offset 0xCE0, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0xCE4, size 0xC, align 4
    int32 m_nTintCP; // offset 0xCF0, size 0x4, align 4
    Color m_clrTint; // offset 0xCF4, size 0x4, align 1
};
