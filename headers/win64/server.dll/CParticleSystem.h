#pragma once

class CParticleSystem : public CBaseModelEntity /*0x0*/  // sizeof 0xDD8, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x850]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0x850, size 0x200, align 1
    bool m_bActive; // offset 0xA50, size 0x1, align 1
    bool m_bFrozen; // offset 0xA51, size 0x1, align 1
    char _pad_0A52[0x2]; // offset 0xA52
    float32 m_flFreezeTransitionDuration; // offset 0xA54, size 0x4, align 4
    int32 m_nStopType; // offset 0xA58, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0xA5C, size 0x1, align 1
    char _pad_0A5D[0x3]; // offset 0xA5D
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0xA60, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0xA68, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0xA6C, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0xA70, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0xAA0, size 0x4, align 1
    CHandle< CBaseEntity >[64] m_hControlPointEnts; // offset 0xAA4, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0xBA4, size 0x1, align 1
    char _pad_0BA5[0x3]; // offset 0xBA5
    CUtlString m_strDataString; // offset 0xBA8, size 0x8, align 8
    bool m_bNoSave; // offset 0xBB0, size 0x1, align 1
    bool m_bNoFreeze; // offset 0xBB1, size 0x1, align 1
    bool m_bNoRamp; // offset 0xBB2, size 0x1, align 1
    bool m_bStartActive; // offset 0xBB3, size 0x1, align 1
    char _pad_0BB4[0x4]; // offset 0xBB4
    CUtlSymbolLarge m_iszEffectName; // offset 0xBB8, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0xBC0, size 0x200, align 8
    int32 m_nDataCP; // offset 0xDC0, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0xDC4, size 0xC, align 4
    int32 m_nTintCP; // offset 0xDD0, size 0x4, align 4
    Color m_clrTint; // offset 0xDD4, size 0x4, align 4
};
