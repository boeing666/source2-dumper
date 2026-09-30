#pragma once

class C_ParticleSystem : public C_BaseModelEntity /*0x0*/  // sizeof 0x1180, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0xBB0, size 0x200, align 1
    bool m_bActive; // offset 0xDB0, size 0x1, align 1
    bool m_bFrozen; // offset 0xDB1, size 0x1, align 1
    char _pad_0DB2[0x2]; // offset 0xDB2
    float32 m_flFreezeTransitionDuration; // offset 0xDB4, size 0x4, align 4
    int32 m_nStopType; // offset 0xDB8, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0xDBC, size 0x1, align 1
    char _pad_0DBD[0x3]; // offset 0xDBD
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0xDC0, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0xDC8, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0xDCC, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0xDD0, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0xE00, size 0x4, align 1
    CHandle< C_BaseEntity >[64] m_hControlPointEnts; // offset 0xE04, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0xF04, size 0x1, align 1
    char _pad_0F05[0x3]; // offset 0xF05
    CUtlString m_strDataString; // offset 0xF08, size 0x8, align 8
    bool m_bNoSave; // offset 0xF10, size 0x1, align 1
    bool m_bNoFreeze; // offset 0xF11, size 0x1, align 1
    bool m_bNoRamp; // offset 0xF12, size 0x1, align 1
    bool m_bStartActive; // offset 0xF13, size 0x1, align 1
    char _pad_0F14[0x4]; // offset 0xF14
    CUtlSymbolLarge m_iszEffectName; // offset 0xF18, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0xF20, size 0x200, align 8
    int32 m_nDataCP; // offset 0x1120, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0x1124, size 0xC, align 4
    int32 m_nTintCP; // offset 0x1130, size 0x4, align 4
    Color m_clrTint; // offset 0x1134, size 0x4, align 4
    char _pad_1138[0x20]; // offset 0x1138
    bool m_bOldActive; // offset 0x1158, size 0x1, align 1 | MNotSaved
    bool m_bOldFrozen; // offset 0x1159, size 0x1, align 1 | MNotSaved
    char _pad_115A[0x26]; // offset 0x115A
};
