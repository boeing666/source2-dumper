#pragma once

class C_ParticleSystem : public C_BaseModelEntity /*0x0*/  // sizeof 0xF58, align 0x8 [vtable] (client) {MNetworkIncludeByUserGroup MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    char[512] m_szSnapshotFileName; // offset 0x9A8, size 0x200, align 1 | MNetworkEnable
    bool m_bActive; // offset 0xBA8, size 0x1, align 1 | MNetworkEnable
    bool m_bFrozen; // offset 0xBA9, size 0x1, align 1 | MNetworkEnable
    char _pad_0BAA[0x2]; // offset 0xBAA
    float32 m_flFreezeTransitionDuration; // offset 0xBAC, size 0x4, align 4 | MNetworkEnable
    int32 m_nStopType; // offset 0xBB0, size 0x4, align 4 | MNetworkEnable MNotSaved
    bool m_bAnimateDuringGameplayPause; // offset 0xBB4, size 0x1, align 1 | MNetworkEnable
    char _pad_0BB5[0x3]; // offset 0xBB5
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0xBB8, size 0x8, align 8 | MNetworkEnable MNotSaved
    GameTime_t m_flStartTime; // offset 0xBC0, size 0x4, align 255 | MNetworkEnable
    float32 m_flPreSimTime; // offset 0xBC4, size 0x4, align 4 | MNetworkEnable
    Vector[4] m_vServerControlPoints; // offset 0xBC8, size 0x30, align 4 | MNetworkEnable
    uint8[4] m_iServerControlPointAssignments; // offset 0xBF8, size 0x4, align 1 | MNetworkEnable
    CHandle< C_BaseEntity >[64] m_hControlPointEnts; // offset 0xBFC, size 0x100, align 4 | MNetworkEnable
    bool m_bNoSave; // offset 0xCFC, size 0x1, align 1 | MNetworkEnable
    bool m_bNoFreeze; // offset 0xCFD, size 0x1, align 1 | MNetworkEnable
    bool m_bNoRamp; // offset 0xCFE, size 0x1, align 1 | MNetworkEnable
    bool m_bStartActive; // offset 0xCFF, size 0x1, align 1
    CUtlSymbolLarge m_iszEffectName; // offset 0xD00, size 0x8, align 8
    CUtlSymbolLarge[64] m_iszControlPointNames; // offset 0xD08, size 0x200, align 8
    int32 m_nDataCP; // offset 0xF08, size 0x4, align 4
    Vector m_vecDataCPValue; // offset 0xF0C, size 0xC, align 4
    int32 m_nTintCP; // offset 0xF18, size 0x4, align 4
    Color m_clrTint; // offset 0xF1C, size 0x4, align 1
    char _pad_0F20[0x20]; // offset 0xF20
    bool m_bOldActive; // offset 0xF40, size 0x1, align 1 | MNotSaved
    bool m_bOldFrozen; // offset 0xF41, size 0x1, align 1 | MNotSaved
    char _pad_0F42[0x16]; // offset 0xF42
};
