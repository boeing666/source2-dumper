#pragma once

class C_ParticleSystem : public C_BaseModelEntity /*0x0*/  // sizeof 0x15F0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1020]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0x1020, size 0x200, align 1
    bool m_bActive; // offset 0x1220, size 0x1, align 1
    bool m_bFrozen; // offset 0x1221, size 0x1, align 1
    char _pad_1222[0x2]; // offset 0x1222
    float32 m_flFreezeTransitionDuration; // offset 0x1224, size 0x4, align 4
    int32 m_nStopType; // offset 0x1228, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0x122C, size 0x1, align 1
    char _pad_122D[0x3]; // offset 0x122D
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0x1230, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0x1238, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0x123C, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0x1240, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0x1270, size 0x4, align 1
    CHandle< C_BaseEntity >[64] m_hControlPointEnts; // offset 0x1274, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0x1374, size 0x1, align 1
    char _pad_1375[0x3]; // offset 0x1375
    CUtlString m_strDataString; // offset 0x1378, size 0x8, align 8
    bool m_bNoSave; // offset 0x1380, size 0x1, align 1
    bool m_bNoFreeze; // offset 0x1381, size 0x1, align 1
    bool m_bNoRamp; // offset 0x1382, size 0x1, align 1
    bool m_bStartActive; // offset 0x1383, size 0x1, align 1
    char _pad_1384[0x4]; // offset 0x1384
    CUtlSymbolLarge m_iszEffectName; // offset 0x1388, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0x1390, size 0x200, align 8
    int32 m_nDataCP; // offset 0x1590, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0x1594, size 0xC, align 4
    int32 m_nTintCP; // offset 0x15A0, size 0x4, align 4
    Color m_clrTint; // offset 0x15A4, size 0x4, align 4
    char _pad_15A8[0x20]; // offset 0x15A8
    bool m_bOldActive; // offset 0x15C8, size 0x1, align 1 | MNotSaved
    bool m_bOldFrozen; // offset 0x15C9, size 0x1, align 1 | MNotSaved
    char _pad_15CA[0x26]; // offset 0x15CA
};
