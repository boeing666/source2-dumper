#pragma once

class C_ParticleSystem : public C_BaseModelEntity /*0x0*/  // sizeof 0x1148, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xB78]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0xB78, size 0x200, align 1
    bool m_bActive; // offset 0xD78, size 0x1, align 1
    bool m_bFrozen; // offset 0xD79, size 0x1, align 1
    char _pad_0D7A[0x2]; // offset 0xD7A
    float32 m_flFreezeTransitionDuration; // offset 0xD7C, size 0x4, align 4
    int32 m_nStopType; // offset 0xD80, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0xD84, size 0x1, align 1
    char _pad_0D85[0x3]; // offset 0xD85
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0xD88, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0xD90, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0xD94, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0xD98, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0xDC8, size 0x4, align 1
    CHandle< C_BaseEntity >[64] m_hControlPointEnts; // offset 0xDCC, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0xECC, size 0x1, align 1
    char _pad_0ECD[0x3]; // offset 0xECD
    CUtlString m_strDataString; // offset 0xED0, size 0x8, align 8
    bool m_bNoSave; // offset 0xED8, size 0x1, align 1
    bool m_bNoFreeze; // offset 0xED9, size 0x1, align 1
    bool m_bNoRamp; // offset 0xEDA, size 0x1, align 1
    bool m_bStartActive; // offset 0xEDB, size 0x1, align 1
    char _pad_0EDC[0x4]; // offset 0xEDC
    CUtlSymbolLarge m_iszEffectName; // offset 0xEE0, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0xEE8, size 0x200, align 8
    int32 m_nDataCP; // offset 0x10E8, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0x10EC, size 0xC, align 4
    int32 m_nTintCP; // offset 0x10F8, size 0x4, align 4
    Color m_clrTint; // offset 0x10FC, size 0x4, align 4
    char _pad_1100[0x20]; // offset 0x1100
    bool m_bOldActive; // offset 0x1120, size 0x1, align 1 | MNotSaved
    bool m_bOldFrozen; // offset 0x1121, size 0x1, align 1 | MNotSaved
    char _pad_1122[0x26]; // offset 0x1122
};
