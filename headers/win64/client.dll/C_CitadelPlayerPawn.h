#pragma once

class C_CitadelPlayerPawn : public CCitadelPlayerPawnBase /*0x0*/  // sizeof 0x1960, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x10DC]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbilityRequiresDebounce; // offset 0x10DC, size 0x4, align 4
    char _pad_10E0[0x20]; // offset 0x10E0
    QAngle m_angEyeAngles; // offset 0x1100, size 0xC, align 4
    char _pad_110C[0x84]; // offset 0x110C
    QAngle m_angClientCamera; // offset 0x1190, size 0xC, align 4
    char _pad_119C[0x84]; // offset 0x119C
    CMsgLaneColor m_eZipLineLaneColor; // offset 0x1220, size 0x4, align 4
    int8 m_nMapDistrictLocation; // offset 0x1224, size 0x1, align 1
    char _pad_1225[0x3]; // offset 0x1225
    int32 m_nLevel; // offset 0x1228, size 0x4, align 4
    int32[6] m_nCurrencies; // offset 0x122C, size 0x18, align 4
    int32[6] m_nSpentCurrencies; // offset 0x1244, size 0x18, align 4
    int32 m_nNumHeroChangesUsed; // offset 0x125C, size 0x4, align 4
    GameTime_t m_flLastSpawnTime; // offset 0x1260, size 0x4, align 255
    GameTime_t m_flRespawnTime; // offset 0x1264, size 0x4, align 255
    bool m_bInRegenerationZone; // offset 0x1268, size 0x1, align 1
    bool m_bInItemShopZone; // offset 0x1269, size 0x1, align 1
    bool m_bInHideoutZone; // offset 0x126A, size 0x1, align 1
    char _pad_126B[0x1]; // offset 0x126B
    int32 m_nLastEnteredTunnelID; // offset 0x126C, size 0x4, align 4
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecFullSellPriceItems; // offset 0x1270, size 0x18, align 8
    C_NetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t > m_vecFullSellPriceAbilityUpgrades; // offset 0x1288, size 0x18, align 8
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecQuickbuyQueue; // offset 0x12A0, size 0x18, align 8
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecQuickbuySellQueue; // offset 0x12B8, size 0x18, align 8
    CUtlStringToken m_unQuickbuyAutoPurchaseRequest; // offset 0x12D0, size 0x4, align 4
    bool m_bQuickbuyAutoPurchase; // offset 0x12D4, size 0x1, align 1
    bool m_bQuickbuyAutoQueueBuild; // offset 0x12D5, size 0x1, align 1
    bool m_bHasQuickbuyBeenUsed; // offset 0x12D6, size 0x1, align 1
    char _pad_12D7[0x1]; // offset 0x12D7
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecRestrictedToItems; // offset 0x12D8, size 0x18, align 8
    HeroBuildID_t m_unHeroBuildID; // offset 0x12F0, size 0x4, align 255
    char _pad_12F4[0x4]; // offset 0x12F4
    CUtlString m_sHeroBuildSerialized; // offset 0x12F8, size 0x8, align 8
    CHandle< C_BaseEntity > m_hViewEntityForObserver; // offset 0x1300, size 0x4, align 4
    bool m_bNetworkDisconnected; // offset 0x1304, size 0x1, align 1
    bool m_bLearningAbility; // offset 0x1305, size 0x1, align 1
    char _pad_1306[0x2]; // offset 0x1306
    int32 m_nFlashStartTick; // offset 0x1308, size 0x4, align 4
    int32 m_nFlashMaxStartTick; // offset 0x130C, size 0x4, align 4
    int32 m_nFlashFadeStartTick; // offset 0x1310, size 0x4, align 4
    int32 m_nFlashEndTick; // offset 0x1314, size 0x4, align 4
    int8 m_nFlashMaxAlpha; // offset 0x1318, size 0x1, align 1
    char _pad_1319[0x3]; // offset 0x1319
    int32 m_nDeducedLane; // offset 0x131C, size 0x4, align 4
    CPlayerSlot m_hEnemyPlayerPrimaryAimTarget; // offset 0x1320, size 0x4, align 4
    char _pad_1324[0x4]; // offset 0x1324
    uint64 m_iEnemyPlayerAimTargetBitVec; // offset 0x1328, size 0x8, align 8
    bool[4] m_arrPreventAbilityLearning; // offset 0x1330, size 0x4, align 1
    char _pad_1334[0x4]; // offset 0x1334
    ItemDraftRoundState_t m_ItemDraftRoundState; // offset 0x1338, size 0x88, align 255
    int32 m_nStreetBrawlCorruptionsAvailable; // offset 0x13C0, size 0x4, align 4
    char _pad_13C4[0x4]; // offset 0x13C4
    CCitadelRecentDamage m_sInCombat; // offset 0x13C8, size 0x18, align 255
    CCitadelRecentDamage m_sPlayerDamageTaken; // offset 0x13E0, size 0x18, align 255
    CCitadelRecentDamage m_sPlayerDamageDealt; // offset 0x13F8, size 0x18, align 255
    GameTime_t m_tLastRevealTime; // offset 0x1410, size 0x4, align 255
    GameTime_t m_tLastPlayerRevealTime; // offset 0x1414, size 0x4, align 255
    int8 m_nSuccessiveDucks; // offset 0x1418, size 0x1, align 1
    char _pad_1419[0x3]; // offset 0x1419
    GameTime_t m_flLastDuckTime; // offset 0x141C, size 0x4, align 255
    bool m_bDismissedReportCard; // offset 0x1420, size 0x1, align 1
    char _pad_1421[0x3]; // offset 0x1421
    float32 m_flCurrentHealingAmount; // offset 0x1424, size 0x4, align 4
    QAngle m_angLockedEyeAngles; // offset 0x1428, size 0xC, align 4
    bool m_bIgnoringZoom; // offset 0x1434, size 0x1, align 1
    char _pad_1435[0x3]; // offset 0x1435
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0x1438, size 0x1E0, align 255
    CCitadelHeroComponent m_CCitadelHeroComponent; // offset 0x1618, size 0x40, align 255
    char _pad_1658[0x58]; // offset 0x1658
    Vector m_vLastVelocity; // offset 0x16B0, size 0xC, align 4
    char _pad_16BC[0x34]; // offset 0x16BC
    float32 m_flRichPresenceUpdateInterval; // offset 0x16F0, size 0x4, align 4
    char _pad_16F4[0xF4]; // offset 0x16F4
    InputBitMask_t m_nQueuedAbility; // offset 0x17E8, size 0x8, align 8
    GameTime_t m_QueuedAbilityEndTime; // offset 0x17F0, size 0x4, align 255
    char _pad_17F4[0x4]; // offset 0x17F4
    GameTime_t m_flPredTimeSlowedStart; // offset 0x17F8, size 0x4, align 255
    GameTime_t m_flPredTimeSlowedEnd; // offset 0x17FC, size 0x4, align 255
    float32 m_flPredSlowSpeed; // offset 0x1800, size 0x4, align 4
    GameTime_t[4] m_flTimeSlowedStart; // offset 0x1804, size 0x10, align 4
    GameTime_t[4] m_flTimeSlowedEnd; // offset 0x1814, size 0x10, align 4
    float32[4] m_flSlowSpeed; // offset 0x1824, size 0x10, align 4
    GameTime_t m_flForceInCombatAnimsUntilTime; // offset 0x1834, size 0x4, align 255
    int32 m_iCurSlowSlot; // offset 0x1838, size 0x4, align 4
    bool m_bLocoLeanTriggeredForDirection; // offset 0x183C, size 0x1, align 1
    bool m_bLocoRunToStopCanTrigger; // offset 0x183D, size 0x1, align 1
    char _pad_183E[0x2]; // offset 0x183E
    float32 m_flCrouchFraction; // offset 0x1840, size 0x4, align 4
    float32 m_flCrouchSpeed; // offset 0x1844, size 0x4, align 4
    GameTime_t m_fidgetTime; // offset 0x1848, size 0x4, align 255
    Vector m_vShootTestOffsetStanding; // offset 0x184C, size 0xC, align 4
    Vector m_vShootTestOffsetCrouching; // offset 0x1858, size 0xC, align 4
    GameTime_t m_leanStartTime; // offset 0x1864, size 0x4, align 255
    char _pad_1868[0xA4]; // offset 0x1868
    float32 m_fAudioEnclosure; // offset 0x190C, size 0x4, align 4
    bool m_bAudioHasSkyExposure; // offset 0x1910, size 0x1, align 1
    char _pad_1911[0x2F]; // offset 0x1911
    C_NetworkUtlVectorBase< itemid_t > m_vecEquippedItemIDs; // offset 0x1940, size 0x18, align 8
    char _pad_1958[0x8]; // offset 0x1958
};
