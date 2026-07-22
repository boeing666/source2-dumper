#pragma once

class C_DOTAPlayerController : public CBasePlayerController /*0x0*/  // sizeof 0xF18, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8A0]; // offset 0x0
    int32 m_iMinimapMove; // offset 0x8A0, size 0x4, align 4
    char _pad_08A4[0x4]; // offset 0x8A4
    KeyValues* m_pClickBehaviorKeys; // offset 0x8A8, size 0x8, align 8
    GameTime_t m_flCenterTime; // offset 0x8B0, size 0x4, align 255
    int32 m_iConfirmationIndex; // offset 0x8B4, size 0x4, align 4
    bool m_bCenterOnHero; // offset 0x8B8, size 0x1, align 1
    bool m_bHeroAssigned; // offset 0x8B9, size 0x1, align 1
    char _pad_08BA[0x2]; // offset 0x8BA
    int32 m_nKeyBindHeroID; // offset 0x8BC, size 0x4, align 4
    bool m_bUsingCameraMan; // offset 0x8C0, size 0x1, align 1
    bool m_bUsingAssistedCameraOperator; // offset 0x8C1, size 0x1, align 1
    char _pad_08C2[0x2]; // offset 0x8C2
    int32 m_nPlayerAssistFlags; // offset 0x8C4, size 0x4, align 4
    VectorWS m_vLatestEvent; // offset 0x8C8, size 0xC, align 4
    char _pad_08D4[0x24]; // offset 0x8D4
    CHandle< C_DOTABaseAbility > m_hFreeDrawAbility; // offset 0x8F8, size 0x4, align 4
    VectorWS m_vLastFreeDrawPosition; // offset 0x8FC, size 0xC, align 4
    PlayerID_t m_nPlayerID; // offset 0x908, size 0x4, align 255
    CHandle< C_BaseEntity > m_hAssignedHero; // offset 0x90C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastAssignedHero; // offset 0x910, size 0x4, align 4
    CHandle< C_BaseEntity > m_hKillCamUnit; // offset 0x914, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPreviousKillCamUnit; // offset 0x918, size 0x4, align 4
    float32 m_flKillCamUnitReceivedTime; // offset 0x91C, size 0x4, align 4
    char _pad_0920[0x8]; // offset 0x920
    int32 m_nRareLineClickCount; // offset 0x928, size 0x4, align 4
    int32 m_nRareLinesPlayed; // offset 0x92C, size 0x4, align 4
    int32 m_nRareLineGroup; // offset 0x930, size 0x4, align 4
    float32 m_flLastRareLinePlayTime; // offset 0x934, size 0x4, align 4
    float32 m_flUnitOrdersSendTime; // offset 0x938, size 0x4, align 4
    float32 m_flLastUnitOrdersSendTime; // offset 0x93C, size 0x4, align 4
    float32 m_flLastUnitOrdersTotalLatency; // offset 0x940, size 0x4, align 4
    float32 m_flLastPingTime; // offset 0x944, size 0x4, align 4
    float32 m_flPingAllowance; // offset 0x948, size 0x4, align 4
    bool m_bTeleportRequiresHalt; // offset 0x94C, size 0x1, align 1
    bool m_bChannelRequiresHalt; // offset 0x94D, size 0x1, align 1
    bool m_bInteractionChannelsRequireHalt; // offset 0x94E, size 0x1, align 1
    bool m_bAutoPurchaseItems; // offset 0x94F, size 0x1, align 1
    bool m_bDisableHUDErrorMessages; // offset 0x950, size 0x1, align 1
    char _pad_0951[0x3]; // offset 0x951
    float32 m_flMouseDragStartX; // offset 0x954, size 0x4, align 4
    float32 m_flMouseDragStartY; // offset 0x958, size 0x4, align 4
    int32 m_nWeatherType; // offset 0x95C, size 0x4, align 4
    bool m_bDynamicWeatherSystemActive; // offset 0x960, size 0x1, align 1
    bool m_bDynamicSoundHandled; // offset 0x961, size 0x1, align 1
    char _pad_0962[0x2]; // offset 0x962
    GameTime_t m_flDynamicWeatherNextSwitchTime; // offset 0x964, size 0x4, align 255
    GameTime_t m_flDynamicWeatherScaleFinishedTime; // offset 0x968, size 0x4, align 255
    float32 m_flDynamicWeatherIntensity; // offset 0x96C, size 0x4, align 4
    ParticleIndex_t m_nXPRangeFXIndex; // offset 0x970, size 0x4, align 255
    ParticleIndex_t m_nVisionRangeFXIndex; // offset 0x974, size 0x4, align 255
    char _pad_0978[0x4]; // offset 0x978
    CHandle< C_DOTABaseAbility > m_hRangeHintAbility; // offset 0x97C, size 0x4, align 4
    ParticleIndex_t m_nRangeHintFXIndex; // offset 0x980, size 0x4, align 255
    float32 m_flRangeHintFXLastRadius; // offset 0x984, size 0x4, align 4
    int32 m_nSelectedControlGroup; // offset 0x988, size 0x4, align 4
    int32 m_nCachedCoachedTeam; // offset 0x98C, size 0x4, align 4
    float32 m_flLastReportedMissedSnapshotRate; // offset 0x990, size 0x4, align 4
    CHandle< C_DOTABaseAbility > m_hActiveAbility; // offset 0x994, size 0x4, align 4
    CUtlVector< CUnitOrders > m_unitorders; // offset 0x998, size 0x18, align 8
    int32 m_nNextOutgoingOrderSequenceNumber; // offset 0x9B0, size 0x4, align 4
    int32 m_nServerOrderSequenceNumber; // offset 0x9B4, size 0x4, align 4
    int32 m_nMaxSentOutgoingOrderSequenceNumber; // offset 0x9B8, size 0x4, align 4
    char _pad_09BC[0x4]; // offset 0x9BC
    CUtlVector< CEntityIndex > m_nSelectedUnits; // offset 0x9C0, size 0x18, align 8
    CUtlVector< ParticleIndex_t > m_nWaypoints; // offset 0x9D8, size 0x18, align 8
    int32 m_iActions; // offset 0x9F0, size 0x4, align 4
    CHandle< C_DOTA_BaseNPC > m_hQueryUnit; // offset 0x9F4, size 0x4, align 4
    bool m_bInQuery; // offset 0x9F8, size 0x1, align 1
    bool m_bSelectionChangedInDataUpdate; // offset 0x9F9, size 0x1, align 1
    char _pad_09FA[0x66]; // offset 0x9FA
    GameTime_t m_flQueryInhibitingActionTime; // offset 0xA60, size 0x4, align 255
    float32 m_flQueryInhibitDuration; // offset 0xA64, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_RingedEntities; // offset 0xA68, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_ActiveRingOwners; // offset 0xA80, size 0x18, align 8
    bool m_bOverridingQuery; // offset 0xA98, size 0x1, align 1
    char _pad_0A99[0x7]; // offset 0xA99
    float32 m_flLastAutoRepeatTime; // offset 0xAA0, size 0x4, align 4
    bool m_bNextDoubleclickIsOnlyAClick; // offset 0xAA4, size 0x1, align 1
    char _pad_0AA5[0x3]; // offset 0xAA5
    float32 m_flConsumeDoubleclickTime; // offset 0xAA8, size 0x4, align 4
    char _pad_0AAC[0x4]; // offset 0xAAC
    CUtlString m_LightInfoWeatherEffect; // offset 0xAB0, size 0x8, align 8
    bool m_bPreviousWasLightInfoWeather; // offset 0xAB8, size 0x1, align 1
    char _pad_0AB9[0x7]; // offset 0xAB9
    CUtlString m_MapDefaultWeatherEffect; // offset 0xAC0, size 0x8, align 8
    bool m_bMapUsesDynamicWeather; // offset 0xAC8, size 0x1, align 1
    char _pad_0AC9[0x27]; // offset 0xAC9
    int32 m_nCastRangeEffectCreationRadius; // offset 0xAF0, size 0x4, align 4
    char _pad_0AF4[0x1C]; // offset 0xAF4
    CUtlVector< ParticleIndex_t > m_vecSuggestedWardLocationEffects; // offset 0xB10, size 0x18, align 8
    CHandle< C_DOTA_BaseNPC > m_hSmartCastNPC; // offset 0xB28, size 0x4, align 4
    ParticleIndex_t m_nTeamSprayParticleIndex; // offset 0xB2C, size 0x4, align 255
    ParticleIndex_t m_nScanCastIndicatorParticleIndex; // offset 0xB30, size 0x4, align 255
    bool m_bIsNextCastOrderFromMouseClick; // offset 0xB34, size 0x1, align 1
    char _pad_0B35[0x53]; // offset 0xB35
    bool m_bIsSelectHeroHeld; // offset 0xB88, size 0x1, align 1
    char _pad_0B89[0x7]; // offset 0xB89
    float64 m_flSelectHeroHeldStartTime; // offset 0xB90, size 0x8, align 8
    float64 m_fLastNetworkStatsSent; // offset 0xB98, size 0x8, align 8
    char _pad_0BA0[0x18]; // offset 0xBA0
    int32[2] m_iCursor; // offset 0xBB8, size 0x8, align 4
    int32 m_iSpectatorClickBehavior; // offset 0xBC0, size 0x4, align 4
    float32 m_flAspectRatio; // offset 0xBC4, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSpectatorQueryUnit; // offset 0xBC8, size 0x4, align 4
    int32 m_iStatsPanel; // offset 0xBCC, size 0x4, align 4
    int32 m_iShopPanel; // offset 0xBD0, size 0x4, align 4
    ShopItemViewMode_t m_iShopViewMode; // offset 0xBD4, size 0x4, align 4
    int32 m_iStatsDropdownCategory; // offset 0xBD8, size 0x4, align 4
    int32 m_iStatsDropdownSort; // offset 0xBDC, size 0x4, align 4
    char[64] m_szShopString; // offset 0xBE0, size 0x40, align 1
    C_UtlVectorEmbeddedNetworkVar< ClientQuickBuyItemState > m_vecClientQuickBuyState; // offset 0xC20, size 0x68, align 8
    bool m_bInShowCaseMode; // offset 0xC88, size 0x1, align 1
    char _pad_0C89[0x3]; // offset 0xC89
    float32 m_flCameraZoomAmount; // offset 0xC8C, size 0x4, align 4
    int32 m_iHighPriorityScore; // offset 0xC90, size 0x4, align 4
    float32 m_flUnfilteredFrameTime; // offset 0xC94, size 0x4, align 4
    CUtlVector< NeutralCampStackPullAlarm_t > m_NeutralCampAlarms; // offset 0xC98, size 0x18, align 8
    int32[2] m_iPrevCursor; // offset 0xCB0, size 0x8, align 4
    char _pad_0CB8[0xA0]; // offset 0xCB8
    int32 m_iPositionHistoryTail; // offset 0xD58, size 0x4, align 4
    int32 m_iMusicStatus; // offset 0xD5C, size 0x4, align 4
    int32 m_iPreviousMusicStatus; // offset 0xD60, size 0x4, align 4
    bool m_bRequestedInventory; // offset 0xD64, size 0x1, align 1
    bool m_bPrecachedInventory; // offset 0xD65, size 0x1, align 1
    char _pad_0D66[0x2]; // offset 0xD66
    float32[3] m_flMusicOperatorVals; // offset 0xD68, size 0xC, align 4
    int32[4] m_iMusicOperatorVals; // offset 0xD74, size 0x10, align 4
    char _pad_0D84[0x4]; // offset 0xD84
    CUtlVector< sControlGroupElem >[10] m_ControlGroups; // offset 0xD88, size 0xF0, align 8
    KeyValues* m_pkvControlGroupKV; // offset 0xE78, size 0x8, align 8
    char _pad_0E80[0x58]; // offset 0xE80
    float32 m_flAltHeldStartTime; // offset 0xED8, size 0x4, align 4
    char _pad_0EDC[0x3C]; // offset 0xEDC
};
