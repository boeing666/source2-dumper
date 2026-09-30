#pragma once

class CParticleSystem : public CBaseModelEntity /*0x0*/  // sizeof 0xE00, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x878]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0x878, size 0x200, align 1
    bool m_bActive; // offset 0xA78, size 0x1, align 1
    bool m_bFrozen; // offset 0xA79, size 0x1, align 1
    char _pad_0A7A[0x2]; // offset 0xA7A
    float32 m_flFreezeTransitionDuration; // offset 0xA7C, size 0x4, align 4
    int32 m_nStopType; // offset 0xA80, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0xA84, size 0x1, align 1
    char _pad_0A85[0x3]; // offset 0xA85
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0xA88, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0xA90, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0xA94, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0xA98, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0xAC8, size 0x4, align 1
    CHandle< CBaseEntity >[64] m_hControlPointEnts; // offset 0xACC, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0xBCC, size 0x1, align 1
    char _pad_0BCD[0x3]; // offset 0xBCD
    CUtlString m_strDataString; // offset 0xBD0, size 0x8, align 8
    bool m_bNoSave; // offset 0xBD8, size 0x1, align 1
    bool m_bNoFreeze; // offset 0xBD9, size 0x1, align 1
    bool m_bNoRamp; // offset 0xBDA, size 0x1, align 1
    bool m_bStartActive; // offset 0xBDB, size 0x1, align 1
    char _pad_0BDC[0x4]; // offset 0xBDC
    CUtlSymbolLarge m_iszEffectName; // offset 0xBE0, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0xBE8, size 0x200, align 8
    int32 m_nDataCP; // offset 0xDE8, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0xDEC, size 0xC, align 4
    int32 m_nTintCP; // offset 0xDF8, size 0x4, align 4
    Color m_clrTint; // offset 0xDFC, size 0x4, align 4
};
