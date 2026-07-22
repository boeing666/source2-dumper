#pragma once

class C_DOTAPlayerController : public CBasePlayerController /*0x0*/  // sizeof 0x1098, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA20]; // offset 0x0
    int32 m_iMinimapMove; // offset 0xA20, size 0x4, align 4
    char _pad_0A24[0x4]; // offset 0xA24
    KeyValues* m_pClickBehaviorKeys; // offset 0xA28, size 0x8, align 8
    GameTime_t m_flCenterTime; // offset 0xA30, size 0x4, align 255
    int32 m_iConfirmationIndex; // offset 0xA34, size 0x4, align 4
    bool m_bCenterOnHero; // offset 0xA38, size 0x1, align 1
    bool m_bHeroAssigned; // offset 0xA39, size 0x1, align 1
    char _pad_0A3A[0x2]; // offset 0xA3A
    int32 m_nKeyBindHeroID; // offset 0xA3C, size 0x4, align 4
    bool m_bUsingCameraMan; // offset 0xA40, size 0x1, align 1
    bool m_bUsingAssistedCameraOperator; // offset 0xA41, size 0x1, align 1
    char _pad_0A42[0x2]; // offset 0xA42
    int32 m_nPlayerAssistFlags; // offset 0xA44, size 0x4, align 4
    VectorWS m_vLatestEvent; // offset 0xA48, size 0xC, align 4
    char _pad_0A54[0x24]; // offset 0xA54
    CHandle< C_DOTABaseAbility > m_hFreeDrawAbility; // offset 0xA78, size 0x4, align 4
    VectorWS m_vLastFreeDrawPosition; // offset 0xA7C, size 0xC, align 4
    PlayerID_t m_nPlayerID; // offset 0xA88, size 0x4, align 255
    CHandle< C_BaseEntity > m_hAssignedHero; // offset 0xA8C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastAssignedHero; // offset 0xA90, size 0x4, align 4
    CHandle< C_BaseEntity > m_hKillCamUnit; // offset 0xA94, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPreviousKillCamUnit; // offset 0xA98, size 0x4, align 4
    float32 m_flKillCamUnitReceivedTime; // offset 0xA9C, size 0x4, align 4
    char _pad_0AA0[0x8]; // offset 0xAA0
    int32 m_nRareLineClickCount; // offset 0xAA8, size 0x4, align 4
    int32 m_nRareLinesPlayed; // offset 0xAAC, size 0x4, align 4
    int32 m_nRareLineGroup; // offset 0xAB0, size 0x4, align 4
    float32 m_flLastRareLinePlayTime; // offset 0xAB4, size 0x4, align 4
    float32 m_flUnitOrdersSendTime; // offset 0xAB8, size 0x4, align 4
    float32 m_flLastUnitOrdersSendTime; // offset 0xABC, size 0x4, align 4
    float32 m_flLastUnitOrdersTotalLatency; // offset 0xAC0, size 0x4, align 4
    float32 m_flLastPingTime; // offset 0xAC4, size 0x4, align 4
    float32 m_flPingAllowance; // offset 0xAC8, size 0x4, align 4
    bool m_bTeleportRequiresHalt; // offset 0xACC, size 0x1, align 1
    bool m_bChannelRequiresHalt; // offset 0xACD, size 0x1, align 1
    bool m_bInteractionChannelsRequireHalt; // offset 0xACE, size 0x1, align 1
    bool m_bAutoPurchaseItems; // offset 0xACF, size 0x1, align 1
    bool m_bDisableHUDErrorMessages; // offset 0xAD0, size 0x1, align 1
    char _pad_0AD1[0x3]; // offset 0xAD1
    float32 m_flMouseDragStartX; // offset 0xAD4, size 0x4, align 4
    float32 m_flMouseDragStartY; // offset 0xAD8, size 0x4, align 4
    int32 m_nWeatherType; // offset 0xADC, size 0x4, align 4
    bool m_bDynamicWeatherSystemActive; // offset 0xAE0, size 0x1, align 1
    bool m_bDynamicSoundHandled; // offset 0xAE1, size 0x1, align 1
    char _pad_0AE2[0x2]; // offset 0xAE2
    GameTime_t m_flDynamicWeatherNextSwitchTime; // offset 0xAE4, size 0x4, align 255
    GameTime_t m_flDynamicWeatherScaleFinishedTime; // offset 0xAE8, size 0x4, align 255
    float32 m_flDynamicWeatherIntensity; // offset 0xAEC, size 0x4, align 4
    ParticleIndex_t m_nXPRangeFXIndex; // offset 0xAF0, size 0x4, align 255
    ParticleIndex_t m_nVisionRangeFXIndex; // offset 0xAF4, size 0x4, align 255
    char _pad_0AF8[0x4]; // offset 0xAF8
    CHandle< C_DOTABaseAbility > m_hRangeHintAbility; // offset 0xAFC, size 0x4, align 4
    ParticleIndex_t m_nRangeHintFXIndex; // offset 0xB00, size 0x4, align 255
    float32 m_flRangeHintFXLastRadius; // offset 0xB04, size 0x4, align 4
    int32 m_nSelectedControlGroup; // offset 0xB08, size 0x4, align 4
    int32 m_nCachedCoachedTeam; // offset 0xB0C, size 0x4, align 4
    float32 m_flLastReportedMissedSnapshotRate; // offset 0xB10, size 0x4, align 4
    CHandle< C_DOTABaseAbility > m_hActiveAbility; // offset 0xB14, size 0x4, align 4
    CUtlVector< CUnitOrders > m_unitorders; // offset 0xB18, size 0x18, align 8
    int32 m_nNextOutgoingOrderSequenceNumber; // offset 0xB30, size 0x4, align 4
    int32 m_nServerOrderSequenceNumber; // offset 0xB34, size 0x4, align 4
    int32 m_nMaxSentOutgoingOrderSequenceNumber; // offset 0xB38, size 0x4, align 4
    char _pad_0B3C[0x4]; // offset 0xB3C
    CUtlVector< CEntityIndex > m_nSelectedUnits; // offset 0xB40, size 0x18, align 8
    CUtlVector< ParticleIndex_t > m_nWaypoints; // offset 0xB58, size 0x18, align 8
    int32 m_iActions; // offset 0xB70, size 0x4, align 4
    CHandle< C_DOTA_BaseNPC > m_hQueryUnit; // offset 0xB74, size 0x4, align 4
    bool m_bInQuery; // offset 0xB78, size 0x1, align 1
    bool m_bSelectionChangedInDataUpdate; // offset 0xB79, size 0x1, align 1
    char _pad_0B7A[0x66]; // offset 0xB7A
    GameTime_t m_flQueryInhibitingActionTime; // offset 0xBE0, size 0x4, align 255
    float32 m_flQueryInhibitDuration; // offset 0xBE4, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_RingedEntities; // offset 0xBE8, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_ActiveRingOwners; // offset 0xC00, size 0x18, align 8
    bool m_bOverridingQuery; // offset 0xC18, size 0x1, align 1
    char _pad_0C19[0x7]; // offset 0xC19
    float32 m_flLastAutoRepeatTime; // offset 0xC20, size 0x4, align 4
    bool m_bNextDoubleclickIsOnlyAClick; // offset 0xC24, size 0x1, align 1
    char _pad_0C25[0x3]; // offset 0xC25
    float32 m_flConsumeDoubleclickTime; // offset 0xC28, size 0x4, align 4
    char _pad_0C2C[0x4]; // offset 0xC2C
    CUtlString m_LightInfoWeatherEffect; // offset 0xC30, size 0x8, align 8
    bool m_bPreviousWasLightInfoWeather; // offset 0xC38, size 0x1, align 1
    char _pad_0C39[0x7]; // offset 0xC39
    CUtlString m_MapDefaultWeatherEffect; // offset 0xC40, size 0x8, align 8
    bool m_bMapUsesDynamicWeather; // offset 0xC48, size 0x1, align 1
    char _pad_0C49[0x27]; // offset 0xC49
    int32 m_nCastRangeEffectCreationRadius; // offset 0xC70, size 0x4, align 4
    char _pad_0C74[0x1C]; // offset 0xC74
    CUtlVector< ParticleIndex_t > m_vecSuggestedWardLocationEffects; // offset 0xC90, size 0x18, align 8
    CHandle< C_DOTA_BaseNPC > m_hSmartCastNPC; // offset 0xCA8, size 0x4, align 4
    ParticleIndex_t m_nTeamSprayParticleIndex; // offset 0xCAC, size 0x4, align 255
    ParticleIndex_t m_nScanCastIndicatorParticleIndex; // offset 0xCB0, size 0x4, align 255
    bool m_bIsNextCastOrderFromMouseClick; // offset 0xCB4, size 0x1, align 1
    char _pad_0CB5[0x53]; // offset 0xCB5
    bool m_bIsSelectHeroHeld; // offset 0xD08, size 0x1, align 1
    char _pad_0D09[0x7]; // offset 0xD09
    float64 m_flSelectHeroHeldStartTime; // offset 0xD10, size 0x8, align 8
    float64 m_fLastNetworkStatsSent; // offset 0xD18, size 0x8, align 8
    char _pad_0D20[0x18]; // offset 0xD20
    int32[2] m_iCursor; // offset 0xD38, size 0x8, align 4
    int32 m_iSpectatorClickBehavior; // offset 0xD40, size 0x4, align 4
    float32 m_flAspectRatio; // offset 0xD44, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSpectatorQueryUnit; // offset 0xD48, size 0x4, align 4
    int32 m_iStatsPanel; // offset 0xD4C, size 0x4, align 4
    int32 m_iShopPanel; // offset 0xD50, size 0x4, align 4
    ShopItemViewMode_t m_iShopViewMode; // offset 0xD54, size 0x4, align 4
    int32 m_iStatsDropdownCategory; // offset 0xD58, size 0x4, align 4
    int32 m_iStatsDropdownSort; // offset 0xD5C, size 0x4, align 4
    char[64] m_szShopString; // offset 0xD60, size 0x40, align 1
    C_UtlVectorEmbeddedNetworkVar< ClientQuickBuyItemState > m_vecClientQuickBuyState; // offset 0xDA0, size 0x68, align 8
    bool m_bInShowCaseMode; // offset 0xE08, size 0x1, align 1
    char _pad_0E09[0x3]; // offset 0xE09
    float32 m_flCameraZoomAmount; // offset 0xE0C, size 0x4, align 4
    int32 m_iHighPriorityScore; // offset 0xE10, size 0x4, align 4
    float32 m_flUnfilteredFrameTime; // offset 0xE14, size 0x4, align 4
    CUtlVector< NeutralCampStackPullAlarm_t > m_NeutralCampAlarms; // offset 0xE18, size 0x18, align 8
    int32[2] m_iPrevCursor; // offset 0xE30, size 0x8, align 4
    char _pad_0E38[0xA0]; // offset 0xE38
    int32 m_iPositionHistoryTail; // offset 0xED8, size 0x4, align 4
    int32 m_iMusicStatus; // offset 0xEDC, size 0x4, align 4
    int32 m_iPreviousMusicStatus; // offset 0xEE0, size 0x4, align 4
    bool m_bRequestedInventory; // offset 0xEE4, size 0x1, align 1
    bool m_bPrecachedInventory; // offset 0xEE5, size 0x1, align 1
    char _pad_0EE6[0x2]; // offset 0xEE6
    float32[3] m_flMusicOperatorVals; // offset 0xEE8, size 0xC, align 4
    int32[4] m_iMusicOperatorVals; // offset 0xEF4, size 0x10, align 4
    char _pad_0F04[0x4]; // offset 0xF04
    CUtlVector< sControlGroupElem >[10] m_ControlGroups; // offset 0xF08, size 0xF0, align 8
    KeyValues* m_pkvControlGroupKV; // offset 0xFF8, size 0x8, align 8
    char _pad_1000[0x58]; // offset 0x1000
    float32 m_flAltHeldStartTime; // offset 0x1058, size 0x4, align 4
    char _pad_105C[0x3C]; // offset 0x105C
};
