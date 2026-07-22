#pragma once

class CParticleSystem : public CBaseModelEntity /*0x0*/  // sizeof 0xCF8, align 0x8 [vtable] (server) {MNetworkIncludeByUserGroup MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0x780, size 0x200, align 1 | MNetworkEnable
    bool m_bActive; // offset 0x980, size 0x1, align 1 | MNetworkEnable
    bool m_bFrozen; // offset 0x981, size 0x1, align 1 | MNetworkEnable
    char _pad_0982[0x2]; // offset 0x982
    float32 m_flFreezeTransitionDuration; // offset 0x984, size 0x4, align 4 | MNetworkEnable
    int32 m_nStopType; // offset 0x988, size 0x4, align 4 | MNetworkEnable MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0x98C, size 0x1, align 1 | MNetworkEnable
    char _pad_098D[0x3]; // offset 0x98D
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0x990, size 0x8, align 8 | MNetworkEnable MNotSaved
    GameTime_t m_flStartTime; // offset 0x998, size 0x4, align 255 | MNetworkEnable
    float32 m_flPreSimTime; // offset 0x99C, size 0x4, align 4 | MNetworkEnable
    Vector[4] m_vServerControlPoints; // offset 0x9A0, size 0x30, align 4 | MNetworkEnable
    uint8[4] m_iServerControlPointAssignments; // offset 0x9D0, size 0x4, align 1 | MNetworkEnable
    CHandle< CBaseEntity >[64] m_hControlPointEnts; // offset 0x9D4, size 0x100, align 4 | MNetworkEnable
    bool m_bNoSave; // offset 0xAD4, size 0x1, align 1 | MNetworkEnable
    bool m_bNoFreeze; // offset 0xAD5, size 0x1, align 1 | MNetworkEnable
    bool m_bNoRamp; // offset 0xAD6, size 0x1, align 1 | MNetworkEnable
    bool m_bStartActive; // offset 0xAD7, size 0x1, align 1
    CUtlSymbolLarge m_iszEffectName; // offset 0xAD8, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0xAE0, size 0x200, align 8
    int32 m_nDataCP; // offset 0xCE0, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0xCE4, size 0xC, align 4
    int32 m_nTintCP; // offset 0xCF0, size 0x4, align 4
    Color m_clrTint; // offset 0xCF4, size 0x4, align 1
};
