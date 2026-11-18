#pragma once

class CParticleSystem : public CBaseModelEntity /*0x0*/  // sizeof 0xE40, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0x8B8, size 0x200, align 1
    bool m_bActive; // offset 0xAB8, size 0x1, align 1
    bool m_bFrozen; // offset 0xAB9, size 0x1, align 1
    char _pad_0ABA[0x2]; // offset 0xABA
    float32 m_flFreezeTransitionDuration; // offset 0xABC, size 0x4, align 4
    int32 m_nStopType; // offset 0xAC0, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0xAC4, size 0x1, align 1
    char _pad_0AC5[0x3]; // offset 0xAC5
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0xAC8, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0xAD0, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0xAD4, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0xAD8, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0xB08, size 0x4, align 1
    CHandle< CBaseEntity >[64] m_hControlPointEnts; // offset 0xB0C, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0xC0C, size 0x1, align 1
    char _pad_0C0D[0x3]; // offset 0xC0D
    CUtlString m_strDataString; // offset 0xC10, size 0x8, align 8
    bool m_bNoSave; // offset 0xC18, size 0x1, align 1
    bool m_bNoFreeze; // offset 0xC19, size 0x1, align 1
    bool m_bNoRamp; // offset 0xC1A, size 0x1, align 1
    bool m_bStartActive; // offset 0xC1B, size 0x1, align 1
    char _pad_0C1C[0x4]; // offset 0xC1C
    CUtlSymbolLarge m_iszEffectName; // offset 0xC20, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0xC28, size 0x200, align 8
    int32 m_nDataCP; // offset 0xE28, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0xE2C, size 0xC, align 4
    int32 m_nTintCP; // offset 0xE38, size 0x4, align 4
    Color m_clrTint; // offset 0xE3C, size 0x4, align 4
};
