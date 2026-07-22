#pragma once

class C_DOTA_DataNonSpectator : public C_BaseEntity /*0x0*/  // sizeof 0x1F58, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< DataTeamPlayer_t > m_vecDataTeam; // offset 0x770, size 0x68, align 8
    uint64[256] m_bWorldTreeState; // offset 0x7D8, size 0x800, align 8
    uint64[256] m_bNPCVisibleState; // offset 0xFD8, size 0x800, align 8
    C_UtlVectorEmbeddedNetworkVar< TreeModelReplacement_t > m_vecWorldTreeModelReplacements; // offset 0x17D8, size 0x68, align 8
    Vector2D[2] m_vDesiredWardPlacement; // offset 0x1840, size 0x10, align 4
    int32[5] m_nEnemyStartingPosition; // offset 0x1850, size 0x14, align 4
    int32 m_nTotalEventPoints; // offset 0x1864, size 0x4, align 4
    HeroID_t m_nCaptainInspectedHeroID; // offset 0x1868, size 0x4, align 255
    int32 m_nFeaturedPlayerID; // offset 0x186C, size 0x4, align 4
    float32[20] m_flSuggestedWardWeights; // offset 0x1870, size 0x50, align 4
    uint8[20] m_nSuggestedWardIndexes; // offset 0x18C0, size 0x14, align 1
    int32[5] m_iSuggestedLanes; // offset 0x18D4, size 0x14, align 4
    float32[5] m_iSuggestedLaneWeights; // offset 0x18E8, size 0x14, align 4
    bool[5] m_bSuggestedLaneRoam; // offset 0x18FC, size 0x5, align 1
    bool[5] m_bSuggestedLaneJungle; // offset 0x1901, size 0x5, align 1
    char _pad_1906[0x2]; // offset 0x1906
    C_UtlVectorEmbeddedNetworkVar< TierNeutralInfo_t > m_vecNeutralItemsTierInfo; // offset 0x1908, size 0x68, align 8
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecNeutralStashItems; // offset 0x1970, size 0x18, align 8
    C_NetworkUtlVectorBase< AbilityID_t > m_vecNeutralItemsConsumed; // offset 0x1988, size 0x18, align 8
    C_UtlVectorEmbeddedNetworkVar< PingConfirmationState_t > m_PingConfirmationStates; // offset 0x19A0, size 0x68, align 8
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecKnownClearCamps; // offset 0x1A08, size 0x18, align 8
    Vector2D[100] m_vPossibleWardPlacement; // offset 0x1A20, size 0x320, align 4
    float32[100] m_vPossibleWardRadii; // offset 0x1D40, size 0x190, align 4
    C_UtlVectorEmbeddedNetworkVar< DOTATeleportInfo_t > m_vecTrackedTeleports; // offset 0x1ED0, size 0x68, align 8
    CRoshanPhaseInfo m_roshanSpawnInfo; // offset 0x1F38, size 0x18, align 255
    int32 m_nNextPowerRuneType; // offset 0x1F50, size 0x4, align 4
    int32 m_nNextPowerRuneSpawnIndex; // offset 0x1F54, size 0x4, align 4
};
