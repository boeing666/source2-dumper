#pragma once

class C_CitadelPlayerPawn : public CCitadelPlayerPawnBase /*0x0*/  // sizeof 0x1968, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x10F4]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbilityRequiresDebounce; // offset 0x10F4, size 0x4, align 4
    char _pad_10F8[0x20]; // offset 0x10F8
    QAngle m_angEyeAngles; // offset 0x1118, size 0xC, align 4
    char _pad_1124[0x84]; // offset 0x1124
    QAngle m_angClientCamera; // offset 0x11A8, size 0xC, align 4
    char _pad_11B4[0x84]; // offset 0x11B4
    CMsgLaneColor m_eZipLineLaneColor; // offset 0x1238, size 0x4, align 4
    int8 m_nMapDistrictLocation; // offset 0x123C, size 0x1, align 1
    char _pad_123D[0x3]; // offset 0x123D
    int32 m_nLevel; // offset 0x1240, size 0x4, align 4
    int32[6] m_nCurrencies; // offset 0x1244, size 0x18, align 4
    int32[6] m_nSpentCurrencies; // offset 0x125C, size 0x18, align 4
    int32 m_nNumHeroChangesUsed; // offset 0x1274, size 0x4, align 4
    GameTime_t m_flLastSpawnTime; // offset 0x1278, size 0x4, align 255
    GameTime_t m_flRespawnTime; // offset 0x127C, size 0x4, align 255
    bool m_bInRegenerationZone; // offset 0x1280, size 0x1, align 1
    bool m_bInItemShopZone; // offset 0x1281, size 0x1, align 1
    bool m_bInHideoutZone; // offset 0x1282, size 0x1, align 1
    char _pad_1283[0x1]; // offset 0x1283
    int32 m_nLastEnteredTunnelID; // offset 0x1284, size 0x4, align 4
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecFullSellPriceItems; // offset 0x1288, size 0x18, align 8
    C_NetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t > m_vecFullSellPriceAbilityUpgrades; // offset 0x12A0, size 0x18, align 8
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecQuickbuyQueue; // offset 0x12B8, size 0x18, align 8
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecQuickbuySellQueue; // offset 0x12D0, size 0x18, align 8
    CUtlStringToken m_unQuickbuyAutoPurchaseRequest; // offset 0x12E8, size 0x4, align 4
    bool m_bQuickbuyAutoPurchase; // offset 0x12EC, size 0x1, align 1
    bool m_bQuickbuyAutoQueueBuild; // offset 0x12ED, size 0x1, align 1
    bool m_bHasQuickbuyBeenUsed; // offset 0x12EE, size 0x1, align 1
    char _pad_12EF[0x1]; // offset 0x12EF
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecRestrictedToItems; // offset 0x12F0, size 0x18, align 8
    HeroBuildID_t m_unHeroBuildID; // offset 0x1308, size 0x4, align 255
    char _pad_130C[0x4]; // offset 0x130C
    CUtlString m_sHeroBuildSerialized; // offset 0x1310, size 0x8, align 8
    CHandle< C_BaseEntity > m_hViewEntityForObserver; // offset 0x1318, size 0x4, align 4
    bool m_bNetworkDisconnected; // offset 0x131C, size 0x1, align 1
    bool m_bLearningAbility; // offset 0x131D, size 0x1, align 1
    char _pad_131E[0x2]; // offset 0x131E
    int32 m_nFlashStartTick; // offset 0x1320, size 0x4, align 4
    int32 m_nFlashMaxStartTick; // offset 0x1324, size 0x4, align 4
    int32 m_nFlashFadeStartTick; // offset 0x1328, size 0x4, align 4
    int32 m_nFlashEndTick; // offset 0x132C, size 0x4, align 4
    int8 m_nFlashMaxAlpha; // offset 0x1330, size 0x1, align 1
    char _pad_1331[0x3]; // offset 0x1331
    int32 m_nDeducedLane; // offset 0x1334, size 0x4, align 4
    CPlayerSlot m_hEnemyPlayerPrimaryAimTarget; // offset 0x1338, size 0x4, align 4
    char _pad_133C[0x4]; // offset 0x133C
    uint64 m_iEnemyPlayerAimTargetBitVec; // offset 0x1340, size 0x8, align 8
    bool[4] m_arrPreventAbilityLearning; // offset 0x1348, size 0x4, align 1
    char _pad_134C[0x4]; // offset 0x134C
    ItemDraftRoundState_t m_ItemDraftRoundState; // offset 0x1350, size 0x88, align 255
    int32 m_nStreetBrawlCorruptionsAvailable; // offset 0x13D8, size 0x4, align 4
    char _pad_13DC[0x4]; // offset 0x13DC
    CCitadelRecentDamage m_sInCombat; // offset 0x13E0, size 0x18, align 255
    CCitadelRecentDamage m_sPlayerDamageTaken; // offset 0x13F8, size 0x18, align 255
    CCitadelRecentDamage m_sPlayerDamageDealt; // offset 0x1410, size 0x18, align 255
    GameTime_t m_tLastRevealTime; // offset 0x1428, size 0x4, align 255
    GameTime_t m_tLastPlayerRevealTime; // offset 0x142C, size 0x4, align 255
    int8 m_nSuccessiveDucks; // offset 0x1430, size 0x1, align 1
    char _pad_1431[0x3]; // offset 0x1431
    GameTime_t m_flLastDuckTime; // offset 0x1434, size 0x4, align 255
    bool m_bDismissedReportCard; // offset 0x1438, size 0x1, align 1
    char _pad_1439[0x3]; // offset 0x1439
    float32 m_flCurrentHealingAmount; // offset 0x143C, size 0x4, align 4
    QAngle m_angLockedEyeAngles; // offset 0x1440, size 0xC, align 4
    bool m_bIgnoringZoom; // offset 0x144C, size 0x1, align 1
    char _pad_144D[0x3]; // offset 0x144D
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0x1450, size 0x1E0, align 255
    CCitadelHeroComponent m_CCitadelHeroComponent; // offset 0x1630, size 0x40, align 255
    char _pad_1670[0x58]; // offset 0x1670
    Vector m_vLastVelocity; // offset 0x16C8, size 0xC, align 4
    char _pad_16D4[0x38]; // offset 0x16D4
    float32 m_flRichPresenceUpdateInterval; // offset 0x170C, size 0x4, align 4
    char _pad_1710[0xE0]; // offset 0x1710
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
