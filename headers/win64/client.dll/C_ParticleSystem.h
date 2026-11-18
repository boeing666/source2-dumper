#pragma once

class C_ParticleSystem : public C_BaseModelEntity /*0x0*/  // sizeof 0x11A8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xBD8]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0xBD8, size 0x200, align 1
    bool m_bActive; // offset 0xDD8, size 0x1, align 1
    bool m_bFrozen; // offset 0xDD9, size 0x1, align 1
    char _pad_0DDA[0x2]; // offset 0xDDA
    float32 m_flFreezeTransitionDuration; // offset 0xDDC, size 0x4, align 4
    int32 m_nStopType; // offset 0xDE0, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0xDE4, size 0x1, align 1
    char _pad_0DE5[0x3]; // offset 0xDE5
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0xDE8, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0xDF0, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0xDF4, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0xDF8, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0xE28, size 0x4, align 1
    CHandle< C_BaseEntity >[64] m_hControlPointEnts; // offset 0xE2C, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0xF2C, size 0x1, align 1
    char _pad_0F2D[0x3]; // offset 0xF2D
    CUtlString m_strDataString; // offset 0xF30, size 0x8, align 8
    bool m_bNoSave; // offset 0xF38, size 0x1, align 1
    bool m_bNoFreeze; // offset 0xF39, size 0x1, align 1
    bool m_bNoRamp; // offset 0xF3A, size 0x1, align 1
    bool m_bStartActive; // offset 0xF3B, size 0x1, align 1
    char _pad_0F3C[0x4]; // offset 0xF3C
    CUtlSymbolLarge m_iszEffectName; // offset 0xF40, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0xF48, size 0x200, align 8
    int32 m_nDataCP; // offset 0x1148, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0x114C, size 0xC, align 4
    int32 m_nTintCP; // offset 0x1158, size 0x4, align 4
    Color m_clrTint; // offset 0x115C, size 0x4, align 4
    char _pad_1160[0x20]; // offset 0x1160
    bool m_bOldActive; // offset 0x1180, size 0x1, align 1 | MNotSaved
    bool m_bOldFrozen; // offset 0x1181, size 0x1, align 1 | MNotSaved
    char _pad_1182[0x26]; // offset 0x1182
};
