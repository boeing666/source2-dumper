#pragma once

class C_ParticleSystem : public C_BaseModelEntity /*0x0*/  // sizeof 0x1338, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xD68]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0xD68, size 0x200, align 1
    bool m_bActive; // offset 0xF68, size 0x1, align 1
    bool m_bFrozen; // offset 0xF69, size 0x1, align 1
    char _pad_0F6A[0x2]; // offset 0xF6A
    float32 m_flFreezeTransitionDuration; // offset 0xF6C, size 0x4, align 4
    int32 m_nStopType; // offset 0xF70, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0xF74, size 0x1, align 1
    char _pad_0F75[0x3]; // offset 0xF75
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0xF78, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0xF80, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0xF84, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0xF88, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0xFB8, size 0x4, align 1
    CHandle< C_BaseEntity >[64] m_hControlPointEnts; // offset 0xFBC, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0x10BC, size 0x1, align 1
    char _pad_10BD[0x3]; // offset 0x10BD
    CUtlString m_strDataString; // offset 0x10C0, size 0x8, align 8
    bool m_bNoSave; // offset 0x10C8, size 0x1, align 1
    bool m_bNoFreeze; // offset 0x10C9, size 0x1, align 1
    bool m_bNoRamp; // offset 0x10CA, size 0x1, align 1
    bool m_bStartActive; // offset 0x10CB, size 0x1, align 1
    char _pad_10CC[0x4]; // offset 0x10CC
    CUtlSymbolLarge m_iszEffectName; // offset 0x10D0, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0x10D8, size 0x200, align 8
    int32 m_nDataCP; // offset 0x12D8, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0x12DC, size 0xC, align 4
    int32 m_nTintCP; // offset 0x12E8, size 0x4, align 4
    Color m_clrTint; // offset 0x12EC, size 0x4, align 4
    char _pad_12F0[0x20]; // offset 0x12F0
    bool m_bOldActive; // offset 0x1310, size 0x1, align 1 | MNotSaved
    bool m_bOldFrozen; // offset 0x1311, size 0x1, align 1 | MNotSaved
    char _pad_1312[0x26]; // offset 0x1312
};
