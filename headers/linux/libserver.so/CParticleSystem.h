#pragma once

class CParticleSystem : public CBaseModelEntity /*0x0*/  // sizeof 0x1128, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xB9C]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0xB9C, size 0x200, align 1
    bool m_bActive; // offset 0xD9C, size 0x1, align 1
    bool m_bFrozen; // offset 0xD9D, size 0x1, align 1
    char _pad_0D9E[0x2]; // offset 0xD9E
    float32 m_flFreezeTransitionDuration; // offset 0xDA0, size 0x4, align 4
    int32 m_nStopType; // offset 0xDA4, size 0x4, align 4 | MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0xDA8, size 0x1, align 1
    char _pad_0DA9[0x7]; // offset 0xDA9
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0xDB0, size 0x8, align 8 | MNotSaved
    GameTime_t m_flStartTime; // offset 0xDB8, size 0x4, align 255
    float32 m_flPreSimTime; // offset 0xDBC, size 0x4, align 4
    Vector[4] m_vServerControlPoints; // offset 0xDC0, size 0x30, align 4
    uint8[4] m_iServerControlPointAssignments; // offset 0xDF0, size 0x4, align 1
    CHandle< CBaseEntity >[64] m_hControlPointEnts; // offset 0xDF4, size 0x100, align 4
    bool m_bDataStringLocalized; // offset 0xEF4, size 0x1, align 1
    char _pad_0EF5[0x3]; // offset 0xEF5
    CUtlString m_strDataString; // offset 0xEF8, size 0x8, align 8
    bool m_bNoSave; // offset 0xF00, size 0x1, align 1
    bool m_bNoFreeze; // offset 0xF01, size 0x1, align 1
    bool m_bNoRamp; // offset 0xF02, size 0x1, align 1
    bool m_bStartActive; // offset 0xF03, size 0x1, align 1
    char _pad_0F04[0x4]; // offset 0xF04
    CUtlSymbolLarge m_iszEffectName; // offset 0xF08, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0xF10, size 0x200, align 8
    int32 m_nDataCP; // offset 0x1110, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0x1114, size 0xC, align 4
    int32 m_nTintCP; // offset 0x1120, size 0x4, align 4
    Color m_clrTint; // offset 0x1124, size 0x4, align 4
};
