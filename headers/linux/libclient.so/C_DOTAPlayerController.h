#pragma once

class C_DOTAPlayerController : public CBasePlayerController /*0x0*/  // sizeof 0x10A0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA28]; // offset 0x0
    int32 m_iMinimapMove; // offset 0xA28, size 0x4, align 4
    char _pad_0A2C[0x4]; // offset 0xA2C
    KeyValues* m_pClickBehaviorKeys; // offset 0xA30, size 0x8, align 8
    GameTime_t m_flCenterTime; // offset 0xA38, size 0x4, align 255
    int32 m_iConfirmationIndex; // offset 0xA3C, size 0x4, align 4
    bool m_bCenterOnHero; // offset 0xA40, size 0x1, align 1
    bool m_bHeroAssigned; // offset 0xA41, size 0x1, align 1
    char _pad_0A42[0x2]; // offset 0xA42
    int32 m_nKeyBindHeroID; // offset 0xA44, size 0x4, align 4
    bool m_bUsingCameraMan; // offset 0xA48, size 0x1, align 1
    bool m_bUsingAssistedCameraOperator; // offset 0xA49, size 0x1, align 1
    char _pad_0A4A[0x2]; // offset 0xA4A
    int32 m_nPlayerAssistFlags; // offset 0xA4C, size 0x4, align 4
    VectorWS m_vLatestEvent; // offset 0xA50, size 0xC, align 4
    char _pad_0A5C[0x24]; // offset 0xA5C
    CHandle< C_DOTABaseAbility > m_hFreeDrawAbility; // offset 0xA80, size 0x4, align 4
    VectorWS m_vLastFreeDrawPosition; // offset 0xA84, size 0xC, align 4
    PlayerID_t m_nPlayerID; // offset 0xA90, size 0x4, align 255
    CHandle< C_BaseEntity > m_hAssignedHero; // offset 0xA94, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastAssignedHero; // offset 0xA98, size 0x4, align 4
    CHandle< C_BaseEntity > m_hKillCamUnit; // offset 0xA9C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPreviousKillCamUnit; // offset 0xAA0, size 0x4, align 4
    float32 m_flKillCamUnitReceivedTime; // offset 0xAA4, size 0x4, align 4
    char _pad_0AA8[0x8]; // offset 0xAA8
    int32 m_nRareLineClickCount; // offset 0xAB0, size 0x4, align 4
    int32 m_nRareLinesPlayed; // offset 0xAB4, size 0x4, align 4
    int32 m_nRareLineGroup; // offset 0xAB8, size 0x4, align 4
    float32 m_flLastRareLinePlayTime; // offset 0xABC, size 0x4, align 4
    float32 m_flUnitOrdersSendTime; // offset 0xAC0, size 0x4, align 4
    float32 m_flLastUnitOrdersSendTime; // offset 0xAC4, size 0x4, align 4
    float32 m_flLastUnitOrdersTotalLatency; // offset 0xAC8, size 0x4, align 4
    float32 m_flLastPingTime; // offset 0xACC, size 0x4, align 4
    float32 m_flPingAllowance; // offset 0xAD0, size 0x4, align 4
    bool m_bTeleportRequiresHalt; // offset 0xAD4, size 0x1, align 1
    bool m_bChannelRequiresHalt; // offset 0xAD5, size 0x1, align 1
    bool m_bInteractionChannelsRequireHalt; // offset 0xAD6, size 0x1, align 1
    bool m_bAutoPurchaseItems; // offset 0xAD7, size 0x1, align 1
    bool m_bDisableHUDErrorMessages; // offset 0xAD8, size 0x1, align 1
    char _pad_0AD9[0x3]; // offset 0xAD9
    float32 m_flMouseDragStartX; // offset 0xADC, size 0x4, align 4
    float32 m_flMouseDragStartY; // offset 0xAE0, size 0x4, align 4
    int32 m_nWeatherType; // offset 0xAE4, size 0x4, align 4
    bool m_bDynamicWeatherSystemActive; // offset 0xAE8, size 0x1, align 1
    bool m_bDynamicSoundHandled; // offset 0xAE9, size 0x1, align 1
    char _pad_0AEA[0x2]; // offset 0xAEA
    GameTime_t m_flDynamicWeatherNextSwitchTime; // offset 0xAEC, size 0x4, align 255
    GameTime_t m_flDynamicWeatherScaleFinishedTime; // offset 0xAF0, size 0x4, align 255
    float32 m_flDynamicWeatherIntensity; // offset 0xAF4, size 0x4, align 4
    ParticleIndex_t m_nXPRangeFXIndex; // offset 0xAF8, size 0x4, align 255
    ParticleIndex_t m_nVisionRangeFXIndex; // offset 0xAFC, size 0x4, align 255
    char _pad_0B00[0x4]; // offset 0xB00
    CHandle< C_DOTABaseAbility > m_hRangeHintAbility; // offset 0xB04, size 0x4, align 4
    ParticleIndex_t m_nRangeHintFXIndex; // offset 0xB08, size 0x4, align 255
    float32 m_flRangeHintFXLastRadius; // offset 0xB0C, size 0x4, align 4
    int32 m_nSelectedControlGroup; // offset 0xB10, size 0x4, align 4
    int32 m_nCachedCoachedTeam; // offset 0xB14, size 0x4, align 4
    float32 m_flLastReportedMissedSnapshotRate; // offset 0xB18, size 0x4, align 4
    CHandle< C_DOTABaseAbility > m_hActiveAbility; // offset 0xB1C, size 0x4, align 4
    CUtlVector< CUnitOrders > m_unitorders; // offset 0xB20, size 0x18, align 8
    int32 m_nNextOutgoingOrderSequenceNumber; // offset 0xB38, size 0x4, align 4
    int32 m_nServerOrderSequenceNumber; // offset 0xB3C, size 0x4, align 4
    int32 m_nMaxSentOutgoingOrderSequenceNumber; // offset 0xB40, size 0x4, align 4
    char _pad_0B44[0x4]; // offset 0xB44
    CUtlVector< CEntityIndex > m_nSelectedUnits; // offset 0xB48, size 0x18, align 8
    CUtlVector< ParticleIndex_t > m_nWaypoints; // offset 0xB60, size 0x18, align 8
    int32 m_iActions; // offset 0xB78, size 0x4, align 4
    CHandle< C_DOTA_BaseNPC > m_hQueryUnit; // offset 0xB7C, size 0x4, align 4
    bool m_bInQuery; // offset 0xB80, size 0x1, align 1
    bool m_bSelectionChangedInDataUpdate; // offset 0xB81, size 0x1, align 1
    char _pad_0B82[0x66]; // offset 0xB82
    GameTime_t m_flQueryInhibitingActionTime; // offset 0xBE8, size 0x4, align 255
    float32 m_flQueryInhibitDuration; // offset 0xBEC, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_RingedEntities; // offset 0xBF0, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_ActiveRingOwners; // offset 0xC08, size 0x18, align 8
    bool m_bOverridingQuery; // offset 0xC20, size 0x1, align 1
    char _pad_0C21[0x7]; // offset 0xC21
    float32 m_flLastAutoRepeatTime; // offset 0xC28, size 0x4, align 4
    bool m_bNextDoubleclickIsOnlyAClick; // offset 0xC2C, size 0x1, align 1
    char _pad_0C2D[0x3]; // offset 0xC2D
    float32 m_flConsumeDoubleclickTime; // offset 0xC30, size 0x4, align 4
    char _pad_0C34[0x4]; // offset 0xC34
    CUtlString m_LightInfoWeatherEffect; // offset 0xC38, size 0x8, align 8
    bool m_bPreviousWasLightInfoWeather; // offset 0xC40, size 0x1, align 1
    char _pad_0C41[0x7]; // offset 0xC41
    CUtlString m_MapDefaultWeatherEffect; // offset 0xC48, size 0x8, align 8
    bool m_bMapUsesDynamicWeather; // offset 0xC50, size 0x1, align 1
    char _pad_0C51[0x27]; // offset 0xC51
    int32 m_nCastRangeEffectCreationRadius; // offset 0xC78, size 0x4, align 4
    char _pad_0C7C[0x1C]; // offset 0xC7C
    CUtlVector< ParticleIndex_t > m_vecSuggestedWardLocationEffects; // offset 0xC98, size 0x18, align 8
    CHandle< C_DOTA_BaseNPC > m_hSmartCastNPC; // offset 0xCB0, size 0x4, align 4
    ParticleIndex_t m_nTeamSprayParticleIndex; // offset 0xCB4, size 0x4, align 255
    ParticleIndex_t m_nScanCastIndicatorParticleIndex; // offset 0xCB8, size 0x4, align 255
    bool m_bIsNextCastOrderFromMouseClick; // offset 0xCBC, size 0x1, align 1
    char _pad_0CBD[0x53]; // offset 0xCBD
    bool m_bIsSelectHeroHeld; // offset 0xD10, size 0x1, align 1
    char _pad_0D11[0x7]; // offset 0xD11
    float64 m_flSelectHeroHeldStartTime; // offset 0xD18, size 0x8, align 8
    float64 m_fLastNetworkStatsSent; // offset 0xD20, size 0x8, align 8
    char _pad_0D28[0x18]; // offset 0xD28
    int32[2] m_iCursor; // offset 0xD40, size 0x8, align 4
    int32 m_iSpectatorClickBehavior; // offset 0xD48, size 0x4, align 4
    float32 m_flAspectRatio; // offset 0xD4C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSpectatorQueryUnit; // offset 0xD50, size 0x4, align 4
    int32 m_iStatsPanel; // offset 0xD54, size 0x4, align 4
    int32 m_iShopPanel; // offset 0xD58, size 0x4, align 4
    ShopItemViewMode_t m_iShopViewMode; // offset 0xD5C, size 0x4, align 4
    int32 m_iStatsDropdownCategory; // offset 0xD60, size 0x4, align 4
    int32 m_iStatsDropdownSort; // offset 0xD64, size 0x4, align 4
    char[64] m_szShopString; // offset 0xD68, size 0x40, align 1
    C_UtlVectorEmbeddedNetworkVar< ClientQuickBuyItemState > m_vecClientQuickBuyState; // offset 0xDA8, size 0x68, align 8
    bool m_bInShowCaseMode; // offset 0xE10, size 0x1, align 1
    char _pad_0E11[0x3]; // offset 0xE11
    float32 m_flCameraZoomAmount; // offset 0xE14, size 0x4, align 4
    int32 m_iHighPriorityScore; // offset 0xE18, size 0x4, align 4
    float32 m_flUnfilteredFrameTime; // offset 0xE1C, size 0x4, align 4
    CUtlVector< NeutralCampStackPullAlarm_t > m_NeutralCampAlarms; // offset 0xE20, size 0x18, align 8
    int32[2] m_iPrevCursor; // offset 0xE38, size 0x8, align 4
    char _pad_0E40[0xA0]; // offset 0xE40
    int32 m_iPositionHistoryTail; // offset 0xEE0, size 0x4, align 4
    int32 m_iMusicStatus; // offset 0xEE4, size 0x4, align 4
    int32 m_iPreviousMusicStatus; // offset 0xEE8, size 0x4, align 4
    bool m_bRequestedInventory; // offset 0xEEC, size 0x1, align 1
    bool m_bPrecachedInventory; // offset 0xEED, size 0x1, align 1
    char _pad_0EEE[0x2]; // offset 0xEEE
    float32[3] m_flMusicOperatorVals; // offset 0xEF0, size 0xC, align 4
    int32[4] m_iMusicOperatorVals; // offset 0xEFC, size 0x10, align 4
    char _pad_0F0C[0x4]; // offset 0xF0C
    CUtlVector< sControlGroupElem >[10] m_ControlGroups; // offset 0xF10, size 0xF0, align 8
    KeyValues* m_pkvControlGroupKV; // offset 0x1000, size 0x8, align 8
    char _pad_1008[0x58]; // offset 0x1008
    float32 m_flAltHeldStartTime; // offset 0x1060, size 0x4, align 4
    char _pad_1064[0x3C]; // offset 0x1064
};
