#pragma once

class CParticleSystem : public CBaseModelEntity /*0x0*/  // sizeof 0x10C0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xB34]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0xB34, size 0x200, align 1
    bool m_bActive; // offset 0xD34, size 0x1, align 1
    bool m_bFrozen; // offset 0xD35, size 0x1, align 1
    char _pad_0D36[0x2]; // offset 0xD36
    float32 m_flFreezeTransitionDuration; // offset 0xD38, size 0x4, align 4
    int32 m_nStopType; // offset 0xD3C, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0xD40, size 0x1, align 1
    char _pad_0D41[0x7]; // offset 0xD41
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0xD48, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0xD50, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0xD54, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0xD58, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0xD88, size 0x4, align 1
    CHandle< CBaseEntity >[64] m_hControlPointEnts; // offset 0xD8C, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0xE8C, size 0x1, align 1
    char _pad_0E8D[0x3]; // offset 0xE8D
    CUtlString m_strDataString; // offset 0xE90, size 0x8, align 8
    bool m_bNoSave; // offset 0xE98, size 0x1, align 1
    bool m_bNoFreeze; // offset 0xE99, size 0x1, align 1
    bool m_bNoRamp; // offset 0xE9A, size 0x1, align 1
    bool m_bStartActive; // offset 0xE9B, size 0x1, align 1
    char _pad_0E9C[0x4]; // offset 0xE9C
    CUtlSymbolLarge m_iszEffectName; // offset 0xEA0, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0xEA8, size 0x200, align 8
    int32 m_nDataCP; // offset 0x10A8, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0x10AC, size 0xC, align 4
    int32 m_nTintCP; // offset 0x10B8, size 0x4, align 4
    Color m_clrTint; // offset 0x10BC, size 0x4, align 4
};
