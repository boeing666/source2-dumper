#pragma once

class CDOTA_DataNonSpectator : public CBaseEntity /*0x0*/  // sizeof 0x1C80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CUtlVectorEmbeddedNetworkVar< DataTeamPlayer_t > m_vecDataTeam; // offset 0x498, size 0x68, align 8
    uint64[256] m_bWorldTreeState; // offset 0x500, size 0x800, align 8
    uint64[256] m_bNPCVisibleState; // offset 0xD00, size 0x800, align 8
    CUtlVectorEmbeddedNetworkVar< TreeModelReplacement_t > m_vecWorldTreeModelReplacements; // offset 0x1500, size 0x68, align 8
    Vector2D[2] m_vDesiredWardPlacement; // offset 0x1568, size 0x10, align 4
    int32[5] m_nEnemyStartingPosition; // offset 0x1578, size 0x14, align 4
    HeroID_t m_nCaptainInspectedHeroID; // offset 0x158C, size 0x4, align 255
    float32[20] m_flSuggestedWardWeights; // offset 0x1590, size 0x50, align 4
    uint8[20] m_nSuggestedWardIndexes; // offset 0x15E0, size 0x14, align 1
    int32[5] m_iSuggestedLanes; // offset 0x15F4, size 0x14, align 4
    float32[5] m_iSuggestedLaneWeights; // offset 0x1608, size 0x14, align 4
    bool[5] m_bSuggestedLaneRoam; // offset 0x161C, size 0x5, align 1
    bool[5] m_bSuggestedLaneJungle; // offset 0x1621, size 0x5, align 1
    char _pad_1626[0x2]; // offset 0x1626
    CUtlVectorEmbeddedNetworkVar< TierNeutralInfo_t > m_vecNeutralItemsTierInfo; // offset 0x1628, size 0x68, align 8
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecNeutralStashItems; // offset 0x1690, size 0x18, align 8
    CNetworkUtlVectorBase< AbilityID_t > m_vecNeutralItemsConsumed; // offset 0x16A8, size 0x18, align 8
    CUtlVectorEmbeddedNetworkVar< PingConfirmationState_t > m_PingConfirmationStates; // offset 0x16C0, size 0x68, align 8
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecKnownClearCamps; // offset 0x1728, size 0x18, align 8
    Vector2D[100] m_vPossibleWardPlacement; // offset 0x1740, size 0x320, align 4
    float32[100] m_vPossibleWardRadii; // offset 0x1A60, size 0x190, align 4
    CUtlVectorEmbeddedNetworkVar< DOTATeleportInfo_t > m_vecTrackedTeleports; // offset 0x1BF0, size 0x68, align 8
    CRoshanPhaseInfo m_roshanSpawnInfo; // offset 0x1C58, size 0x18, align 255
    int32 m_nNextPowerRuneType; // offset 0x1C70, size 0x4, align 4
    int32 m_nNextPowerRuneSpawnIndex; // offset 0x1C74, size 0x4, align 4
    int32 m_iTowerKills; // offset 0x1C78, size 0x4, align 4
    char _pad_1C7C[0x4]; // offset 0x1C7C
};
