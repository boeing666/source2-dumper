#pragma once

class CParticleSystem : public CBaseModelEntity /*0x0*/  // sizeof 0xDE0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x858]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0x858, size 0x200, align 1
    bool m_bActive; // offset 0xA58, size 0x1, align 1
    bool m_bFrozen; // offset 0xA59, size 0x1, align 1
    char _pad_0A5A[0x2]; // offset 0xA5A
    float32 m_flFreezeTransitionDuration; // offset 0xA5C, size 0x4, align 4
    int32 m_nStopType; // offset 0xA60, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0xA64, size 0x1, align 1
    char _pad_0A65[0x3]; // offset 0xA65
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0xA68, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0xA70, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0xA74, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0xA78, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0xAA8, size 0x4, align 1
    CHandle< CBaseEntity >[64] m_hControlPointEnts; // offset 0xAAC, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0xBAC, size 0x1, align 1
    char _pad_0BAD[0x3]; // offset 0xBAD
    CUtlString m_strDataString; // offset 0xBB0, size 0x8, align 8
    bool m_bNoSave; // offset 0xBB8, size 0x1, align 1
    bool m_bNoFreeze; // offset 0xBB9, size 0x1, align 1
    bool m_bNoRamp; // offset 0xBBA, size 0x1, align 1
    bool m_bStartActive; // offset 0xBBB, size 0x1, align 1
    char _pad_0BBC[0x4]; // offset 0xBBC
    CUtlSymbolLarge m_iszEffectName; // offset 0xBC0, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0xBC8, size 0x200, align 8
    int32 m_nDataCP; // offset 0xDC8, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0xDCC, size 0xC, align 4
    int32 m_nTintCP; // offset 0xDD8, size 0x4, align 4
    Color m_clrTint; // offset 0xDDC, size 0x4, align 4
};
