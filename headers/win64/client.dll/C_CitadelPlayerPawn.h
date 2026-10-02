#pragma once

class C_CitadelPlayerPawn : public CCitadelPlayerPawnBase /*0x0*/  // sizeof 0x1968, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x10E4]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbilityRequiresDebounce; // offset 0x10E4, size 0x4, align 4
    char _pad_10E8[0x20]; // offset 0x10E8
    QAngle m_angEyeAngles; // offset 0x1108, size 0xC, align 4
    char _pad_1114[0x84]; // offset 0x1114
    QAngle m_angClientCamera; // offset 0x1198, size 0xC, align 4
    char _pad_11A4[0x84]; // offset 0x11A4
    CMsgLaneColor m_eZipLineLaneColor; // offset 0x1228, size 0x4, align 4
    int8 m_nMapDistrictLocation; // offset 0x122C, size 0x1, align 1
    char _pad_122D[0x3]; // offset 0x122D
    int32 m_nLevel; // offset 0x1230, size 0x4, align 4
    int32[6] m_nCurrencies; // offset 0x1234, size 0x18, align 4
    int32[6] m_nSpentCurrencies; // offset 0x124C, size 0x18, align 4
    int32 m_nNumHeroChangesUsed; // offset 0x1264, size 0x4, align 4
    GameTime_t m_flLastSpawnTime; // offset 0x1268, size 0x4, align 255
    GameTime_t m_flRespawnTime; // offset 0x126C, size 0x4, align 255
    bool m_bInRegenerationZone; // offset 0x1270, size 0x1, align 1
    bool m_bInItemShopZone; // offset 0x1271, size 0x1, align 1
    bool m_bInHideoutZone; // offset 0x1272, size 0x1, align 1
    char _pad_1273[0x1]; // offset 0x1273
    int32 m_nLastEnteredTunnelID; // offset 0x1274, size 0x4, align 4
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecFullSellPriceItems; // offset 0x1278, size 0x18, align 8
    C_NetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t > m_vecFullSellPriceAbilityUpgrades; // offset 0x1290, size 0x18, align 8
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecQuickbuyQueue; // offset 0x12A8, size 0x18, align 8
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecQuickbuySellQueue; // offset 0x12C0, size 0x18, align 8
    CUtlStringToken m_unQuickbuyAutoPurchaseRequest; // offset 0x12D8, size 0x4, align 4
    bool m_bQuickbuyAutoPurchase; // offset 0x12DC, size 0x1, align 1
    bool m_bQuickbuyAutoQueueBuild; // offset 0x12DD, size 0x1, align 1
    bool m_bHasQuickbuyBeenUsed; // offset 0x12DE, size 0x1, align 1
    char _pad_12DF[0x1]; // offset 0x12DF
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecRestrictedToItems; // offset 0x12E0, size 0x18, align 8
    HeroBuildID_t m_unHeroBuildID; // offset 0x12F8, size 0x4, align 255
    char _pad_12FC[0x4]; // offset 0x12FC
    CUtlString m_sHeroBuildSerialized; // offset 0x1300, size 0x8, align 8
    CHandle< C_BaseEntity > m_hViewEntityForObserver; // offset 0x1308, size 0x4, align 4
    bool m_bNetworkDisconnected; // offset 0x130C, size 0x1, align 1
    bool m_bLearningAbility; // offset 0x130D, size 0x1, align 1
    char _pad_130E[0x2]; // offset 0x130E
    int32 m_nFlashStartTick; // offset 0x1310, size 0x4, align 4
    int32 m_nFlashMaxStartTick; // offset 0x1314, size 0x4, align 4
    int32 m_nFlashFadeStartTick; // offset 0x1318, size 0x4, align 4
    int32 m_nFlashEndTick; // offset 0x131C, size 0x4, align 4
    int8 m_nFlashMaxAlpha; // offset 0x1320, size 0x1, align 1
    char _pad_1321[0x3]; // offset 0x1321
    int32 m_nDeducedLane; // offset 0x1324, size 0x4, align 4
    CPlayerSlot m_hEnemyPlayerPrimaryAimTarget; // offset 0x1328, size 0x4, align 4
    char _pad_132C[0x4]; // offset 0x132C
    uint64 m_iEnemyPlayerAimTargetBitVec; // offset 0x1330, size 0x8, align 8
    bool[4] m_arrPreventAbilityLearning; // offset 0x1338, size 0x4, align 1
    char _pad_133C[0x4]; // offset 0x133C
    ItemDraftRoundState_t m_ItemDraftRoundState; // offset 0x1340, size 0x88, align 255
    int32 m_nStreetBrawlCorruptionsAvailable; // offset 0x13C8, size 0x4, align 4
    char _pad_13CC[0x4]; // offset 0x13CC
    CCitadelRecentDamage m_sInCombat; // offset 0x13D0, size 0x18, align 255
    CCitadelRecentDamage m_sPlayerDamageTaken; // offset 0x13E8, size 0x18, align 255
    CCitadelRecentDamage m_sPlayerDamageDealt; // offset 0x1400, size 0x18, align 255
    GameTime_t m_tLastRevealTime; // offset 0x1418, size 0x4, align 255
    GameTime_t m_tLastPlayerRevealTime; // offset 0x141C, size 0x4, align 255
    int8 m_nSuccessiveDucks; // offset 0x1420, size 0x1, align 1
    char _pad_1421[0x3]; // offset 0x1421
    GameTime_t m_flLastDuckTime; // offset 0x1424, size 0x4, align 255
    bool m_bDismissedReportCard; // offset 0x1428, size 0x1, align 1
    char _pad_1429[0x3]; // offset 0x1429
    float32 m_flCurrentHealingAmount; // offset 0x142C, size 0x4, align 4
    QAngle m_angLockedEyeAngles; // offset 0x1430, size 0xC, align 4
    bool m_bIgnoringZoom; // offset 0x143C, size 0x1, align 1
    char _pad_143D[0x3]; // offset 0x143D
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0x1440, size 0x1E0, align 255
    CCitadelHeroComponent m_CCitadelHeroComponent; // offset 0x1620, size 0x40, align 255
    char _pad_1660[0x58]; // offset 0x1660
    Vector m_vLastVelocity; // offset 0x16B8, size 0xC, align 4
    char _pad_16C4[0x34]; // offset 0x16C4
    float32 m_flRichPresenceUpdateInterval; // offset 0x16F8, size 0x4, align 4
    char _pad_16FC[0xF4]; // offset 0x16FC
    InputBitMask_t m_nQueuedAbility; // offset 0x17F0, size 0x8, align 8
    GameTime_t m_QueuedAbilityEndTime; // offset 0x17F8, size 0x4, align 255
    char _pad_17FC[0x4]; // offset 0x17FC
    GameTime_t m_flPredTimeSlowedStart; // offset 0x1800, size 0x4, align 255
    GameTime_t m_flPredTimeSlowedEnd; // offset 0x1804, size 0x4, align 255
    float32 m_flPredSlowSpeed; // offset 0x1808, size 0x4, align 4
    GameTime_t[4] m_flTimeSlowedStart; // offset 0x180C, size 0x10, align 4
    GameTime_t[4] m_flTimeSlowedEnd; // offset 0x181C, size 0x10, align 4
    float32[4] m_flSlowSpeed; // offset 0x182C, size 0x10, align 4
    GameTime_t m_flForceInCombatAnimsUntilTime; // offset 0x183C, size 0x4, align 255
    int32 m_iCurSlowSlot; // offset 0x1840, size 0x4, align 4
    bool m_bLocoLeanTriggeredForDirection; // offset 0x1844, size 0x1, align 1
    bool m_bLocoRunToStopCanTrigger; // offset 0x1845, size 0x1, align 1
    char _pad_1846[0x2]; // offset 0x1846
    float32 m_flCrouchFraction; // offset 0x1848, size 0x4, align 4
    float32 m_flCrouchSpeed; // offset 0x184C, size 0x4, align 4
    GameTime_t m_fidgetTime; // offset 0x1850, size 0x4, align 255
    Vector m_vShootTestOffsetStanding; // offset 0x1854, size 0xC, align 4
    Vector m_vShootTestOffsetCrouching; // offset 0x1860, size 0xC, align 4
    GameTime_t m_leanStartTime; // offset 0x186C, size 0x4, align 255
    char _pad_1870[0xA4]; // offset 0x1870
    float32 m_fAudioEnclosure; // offset 0x1914, size 0x4, align 4
    bool m_bAudioHasSkyExposure; // offset 0x1918, size 0x1, align 1
    char _pad_1919[0x2F]; // offset 0x1919
    C_NetworkUtlVectorBase< itemid_t > m_vecEquippedItemIDs; // offset 0x1948, size 0x18, align 8
    char _pad_1960[0x8]; // offset 0x1960
};
