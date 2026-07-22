#pragma once

class CParticleSystem : public CBaseModelEntity /*0x0*/  // sizeof 0xFE0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xA54]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0xA54, size 0x200, align 1
    bool m_bActive; // offset 0xC54, size 0x1, align 1
    bool m_bFrozen; // offset 0xC55, size 0x1, align 1
    char _pad_0C56[0x2]; // offset 0xC56
    float32 m_flFreezeTransitionDuration; // offset 0xC58, size 0x4, align 4
    int32 m_nStopType; // offset 0xC5C, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0xC60, size 0x1, align 1
    char _pad_0C61[0x7]; // offset 0xC61
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0xC68, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0xC70, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0xC74, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0xC78, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0xCA8, size 0x4, align 1
    CHandle< CBaseEntity >[64] m_hControlPointEnts; // offset 0xCAC, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0xDAC, size 0x1, align 1
    char _pad_0DAD[0x3]; // offset 0xDAD
    CUtlString m_strDataString; // offset 0xDB0, size 0x8, align 8
    bool m_bNoSave; // offset 0xDB8, size 0x1, align 1
    bool m_bNoFreeze; // offset 0xDB9, size 0x1, align 1
    bool m_bNoRamp; // offset 0xDBA, size 0x1, align 1
    bool m_bStartActive; // offset 0xDBB, size 0x1, align 1
    char _pad_0DBC[0x4]; // offset 0xDBC
    CUtlSymbolLarge m_iszEffectName; // offset 0xDC0, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0xDC8, size 0x200, align 8
    int32 m_nDataCP; // offset 0xFC8, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0xFCC, size 0xC, align 4
    int32 m_nTintCP; // offset 0xFD8, size 0x4, align 4
    Color m_clrTint; // offset 0xFDC, size 0x4, align 1
};
