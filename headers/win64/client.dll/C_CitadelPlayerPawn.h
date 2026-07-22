#pragma once

class C_CitadelPlayerPawn : public CCitadelPlayerPawnBase /*0x0*/  // sizeof 0x1998, align 0x8 [vtable] (client) {MNetworkVarTypeOverride MNetworkIncludeByName MNetworkVarTypeOverride MNetworkIncludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1190]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbilityRequiresDebounce; // offset 0x1190, size 0x4, align 4
    char _pad_1194[0x24]; // offset 0x1194
    QAngle m_angEyeAngles; // offset 0x11B8, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNetworkBitCount MNetworkChangeCallback MNetworkPriority
    char _pad_11C4[0x84]; // offset 0x11C4
    QAngle m_angClientCamera; // offset 0x1248, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNetworkBitCount MNetworkChangeCallback MNetworkPriority
    char _pad_1254[0x84]; // offset 0x1254
    CMsgLaneColor m_eZipLineLaneColor; // offset 0x12D8, size 0x4, align 4 | MNetworkEnable
    int32 m_nLevel; // offset 0x12DC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32[6] m_nCurrencies; // offset 0x12E0, size 0x18, align 4 | MNetworkEnable MNetworkPriority MNetworkChangeCallback
    int32[6] m_nSpentCurrencies; // offset 0x12F8, size 0x18, align 4 | MNetworkEnable
    GameTime_t m_flLastSpawnTime; // offset 0x1310, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flRespawnTime; // offset 0x1314, size 0x4, align 255 | MNetworkEnable MNetworkChangeCallback
    bool m_bInRegenerationZone; // offset 0x1318, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bInItemShopZone; // offset 0x1319, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bInHideoutZone; // offset 0x131A, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_131B[0x1]; // offset 0x131B
    GameTime_t m_timeRevealedOnMinimapByNPC; // offset 0x131C, size 0x4, align 255 | MNetworkEnable
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecFullSellPriceItems; // offset 0x1320, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback
    C_NetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t > m_vecFullSellPriceAbilityUpgrades; // offset 0x1338, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecQuickbuyQueue; // offset 0x1350, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecQuickbuySellQueue; // offset 0x1368, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback
    CUtlStringToken m_unQuickbuyAutoPurchaseRequest; // offset 0x1380, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bQuickbuyAutoPurchase; // offset 0x1384, size 0x1, align 1 | MNetworkEnable
    bool m_bQuickbuyAutoQueueBuild; // offset 0x1385, size 0x1, align 1 | MNetworkEnable
    bool m_bHasQuickbuyBeenUsed; // offset 0x1386, size 0x1, align 1 | MNetworkEnable
    char _pad_1387[0x1]; // offset 0x1387
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecRestrictedToItems; // offset 0x1388, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup
    HeroBuildID_t m_unHeroBuildID; // offset 0x13A0, size 0x4, align 255 | MNetworkEnable
    char _pad_13A4[0x4]; // offset 0x13A4
    CUtlString m_sHeroBuildSerialized; // offset 0x13A8, size 0x8, align 8 | MNetworkEnable MNetworkChangeCallback
    CHandle< C_BaseEntity > m_hViewEntityForObserver; // offset 0x13B0, size 0x4, align 4 | MNetworkEnable
    bool m_bNetworkDisconnected; // offset 0x13B4, size 0x1, align 1 | MNetworkEnable
    bool m_bLearningAbility; // offset 0x13B5, size 0x1, align 1 | MNetworkEnable
    char _pad_13B6[0x2]; // offset 0x13B6
    int32 m_nFlashStartTick; // offset 0x13B8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nFlashMaxStartTick; // offset 0x13BC, size 0x4, align 4 | MNetworkEnable
    int32 m_nFlashFadeStartTick; // offset 0x13C0, size 0x4, align 4 | MNetworkEnable
    int32 m_nFlashEndTick; // offset 0x13C4, size 0x4, align 4 | MNetworkEnable
    int8 m_nFlashMaxAlpha; // offset 0x13C8, size 0x1, align 1 | MNetworkEnable
    char _pad_13C9[0x3]; // offset 0x13C9
    int32 m_nDeducedLane; // offset 0x13CC, size 0x4, align 4 | MNetworkEnable
    CHandle< C_BaseEntity > m_hEnemyPlayerAimTarget; // offset 0x13D0, size 0x4, align 4 | MNetworkEnable
    bool[4] m_arrPreventAbilityLearning; // offset 0x13D4, size 0x4, align 1 | MNetworkEnable MNetworkUserGroup
    ItemDraftRoundState_t m_ItemDraftRoundState; // offset 0x13D8, size 0x88, align 255 | MNetworkEnable MNetworkChangeCallback
    CCitadelRecentDamage m_sInCombat; // offset 0x1460, size 0x18, align 255 | MNetworkEnable
    CCitadelRecentDamage m_sPlayerDamageTaken; // offset 0x1478, size 0x18, align 255 | MNetworkEnable
    CCitadelRecentDamage m_sPlayerDamageDealt; // offset 0x1490, size 0x18, align 255 | MNetworkEnable
    int8 m_nSuccessiveDucks; // offset 0x14A8, size 0x1, align 1 | MNetworkEnable
    char _pad_14A9[0x3]; // offset 0x14A9
    GameTime_t m_flLastDuckTime; // offset 0x14AC, size 0x4, align 255 | MNetworkEnable
    bool m_bDismissedReportCard; // offset 0x14B0, size 0x1, align 1 | MNetworkEnable
    char _pad_14B1[0x3]; // offset 0x14B1
    float32 m_flCurrentHealingAmount; // offset 0x14B4, size 0x4, align 4 | MNetworkEnable
    QAngle m_angLockedEyeAngles; // offset 0x14B8, size 0xC, align 4 | MNetworkEnable
    char _pad_14C4[0x4]; // offset 0x14C4
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0x14C8, size 0x1E8, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    CCitadelHeroComponent m_CCitadelHeroComponent; // offset 0x16B0, size 0x40, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    char _pad_16F0[0x74]; // offset 0x16F0
    Vector m_vLastVelocity; // offset 0x1764, size 0xC, align 4
    char _pad_1770[0x24]; // offset 0x1770
    float32 m_flRichPresenceUpdateInterval; // offset 0x1794, size 0x4, align 4
    char _pad_1798[0xF0]; // offset 0x1798
    InputBitMask_t m_nQueuedAbility; // offset 0x1888, size 0x8, align 8
    GameTime_t m_QueuedAbilityEndTime; // offset 0x1890, size 0x4, align 255
    char _pad_1894[0x4]; // offset 0x1894
    bool m_bAnimGraphMovementClipped; // offset 0x1898, size 0x1, align 1 | MNetworkEnable
    bool m_bAnimGraphMovementDisableGravity; // offset 0x1899, size 0x1, align 1 | MNetworkEnable
    bool m_bAnimGraphMovementDirectAirControl; // offset 0x189A, size 0x1, align 1 | MNetworkEnable
    char _pad_189B[0x1]; // offset 0x189B
    GameTime_t m_flPredTimeSlowedStart; // offset 0x189C, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flPredTimeSlowedEnd; // offset 0x18A0, size 0x4, align 255 | MNetworkEnable
    float32 m_flPredSlowSpeed; // offset 0x18A4, size 0x4, align 4 | MNetworkEnable
    GameTime_t[4] m_flTimeSlowedStart; // offset 0x18A8, size 0x10, align 4 | MNetworkEnable
    GameTime_t[4] m_flTimeSlowedEnd; // offset 0x18B8, size 0x10, align 4 | MNetworkEnable
    float32[4] m_flSlowSpeed; // offset 0x18C8, size 0x10, align 4 | MNetworkEnable
    GameTime_t m_flForceInCombatAnimsUntilTime; // offset 0x18D8, size 0x4, align 255 | MNetworkEnable
    int32 m_iCurSlowSlot; // offset 0x18DC, size 0x4, align 4
    bool m_bLocoLeanTriggeredForDirection; // offset 0x18E0, size 0x1, align 1
    bool m_bLocoRunToStopCanTrigger; // offset 0x18E1, size 0x1, align 1
    char _pad_18E2[0x2]; // offset 0x18E2
    float32 m_flCrouchFraction; // offset 0x18E4, size 0x4, align 4
    float32 m_flCrouchSpeed; // offset 0x18E8, size 0x4, align 4
    GameTime_t m_fidgetTime; // offset 0x18EC, size 0x4, align 255
    Vector m_vShootTestOffsetStanding; // offset 0x18F0, size 0xC, align 4
    Vector m_vShootTestOffsetCrouching; // offset 0x18FC, size 0xC, align 4
    GameTime_t m_leanStartTime; // offset 0x1908, size 0x4, align 255
    char _pad_190C[0x80]; // offset 0x190C
    uint8 m_nAudioEnclosure; // offset 0x198C, size 0x1, align 1 | MNetworkEnable
    bool m_bAudioHasSkyExposure; // offset 0x198D, size 0x1, align 1 | MNetworkEnable
    char _pad_198E[0xA]; // offset 0x198E
};
