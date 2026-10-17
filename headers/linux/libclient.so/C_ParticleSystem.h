#pragma once

class C_ParticleSystem : public C_BaseModelEntity /*0x0*/  // sizeof 0x12D0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xD00]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0xD00, size 0x200, align 1
    bool m_bActive; // offset 0xF00, size 0x1, align 1
    bool m_bFrozen; // offset 0xF01, size 0x1, align 1
    char _pad_0F02[0x2]; // offset 0xF02
    float32 m_flFreezeTransitionDuration; // offset 0xF04, size 0x4, align 4
    int32 m_nStopType; // offset 0xF08, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0xF0C, size 0x1, align 1
    char _pad_0F0D[0x3]; // offset 0xF0D
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0xF10, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0xF18, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0xF1C, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0xF20, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0xF50, size 0x4, align 1
    CHandle< C_BaseEntity >[64] m_hControlPointEnts; // offset 0xF54, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0x1054, size 0x1, align 1
    char _pad_1055[0x3]; // offset 0x1055
    CUtlString m_strDataString; // offset 0x1058, size 0x8, align 8
    bool m_bNoSave; // offset 0x1060, size 0x1, align 1
    bool m_bNoFreeze; // offset 0x1061, size 0x1, align 1
    bool m_bNoRamp; // offset 0x1062, size 0x1, align 1
    bool m_bStartActive; // offset 0x1063, size 0x1, align 1
    char _pad_1064[0x4]; // offset 0x1064
    CUtlSymbolLarge m_iszEffectName; // offset 0x1068, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0x1070, size 0x200, align 8
    int32 m_nDataCP; // offset 0x1270, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0x1274, size 0xC, align 4
    int32 m_nTintCP; // offset 0x1280, size 0x4, align 4
    Color m_clrTint; // offset 0x1284, size 0x4, align 4
    char _pad_1288[0x20]; // offset 0x1288
    bool m_bOldActive; // offset 0x12A8, size 0x1, align 1 | MNotSaved
    bool m_bOldFrozen; // offset 0x12A9, size 0x1, align 1 | MNotSaved
    char _pad_12AA[0x26]; // offset 0x12AA
};
