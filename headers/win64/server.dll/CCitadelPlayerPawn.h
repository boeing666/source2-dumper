#pragma once

class CCitadelPlayerPawn : public CCitadelPlayerPawnBase /*0x0*/  // sizeof 0x2200, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xDB0]; // offset 0x0
    int32[43] m_arrGoldSources; // offset 0xDB0, size 0xAC, align 4
    QAngle m_angClientCamera; // offset 0xE5C, size 0xC, align 4
    QAngle m_angEyeAngles; // offset 0xE68, size 0xC, align 4
    QAngle m_angLockedEyeAngles; // offset 0xE74, size 0xC, align 4
    bool m_bIgnoringZoom; // offset 0xE80, size 0x1, align 1
    char _pad_0E81[0x3]; // offset 0xE81
    int32 m_nLevel; // offset 0xE84, size 0x4, align 4
    int32[6] m_nCurrencies; // offset 0xE88, size 0x18, align 4
    int32[6] m_nSpentCurrencies; // offset 0xEA0, size 0x18, align 4
    int32 m_nNumHeroChangesUsed; // offset 0xEB8, size 0x4, align 4
    GameTime_t m_flRespawnTime; // offset 0xEBC, size 0x4, align 255
    GameTime_t m_flLastSpawnTime; // offset 0xEC0, size 0x4, align 255
    bool m_bInRegenerationZone; // offset 0xEC4, size 0x1, align 1
    bool m_bInItemShopZone; // offset 0xEC5, size 0x1, align 1
    bool m_bInHideoutZone; // offset 0xEC6, size 0x1, align 1
    char _pad_0EC7[0x1]; // offset 0xEC7
    int32 m_nLastEnteredTunnelID; // offset 0xEC8, size 0x4, align 4
    char _pad_0ECC[0x4]; // offset 0xECC
    CNetworkUtlVectorBase< CUtlStringToken > m_vecFullSellPriceItems; // offset 0xED0, size 0x18, align 8
    CNetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t > m_vecFullSellPriceAbilityUpgrades; // offset 0xEE8, size 0x60, align 8
    CNetworkUtlVectorBase< CUtlStringToken > m_vecQuickbuyQueue; // offset 0xF48, size 0x18, align 8
    char _pad_0F60[0x18]; // offset 0xF60
    CNetworkUtlVectorBase< CUtlStringToken > m_vecQuickbuySellQueue; // offset 0xF78, size 0x18, align 8
    bool m_bQuickbuyAutoPurchase; // offset 0xF90, size 0x1, align 1
    char _pad_0F91[0x3]; // offset 0xF91
    CUtlStringToken m_unQuickbuyAutoPurchaseRequest; // offset 0xF94, size 0x4, align 4
    bool m_bQuickbuyAutoQueueBuild; // offset 0xF98, size 0x1, align 1
    char _pad_0F99[0x2F]; // offset 0xF99
    CNetworkUtlVectorBase< CUtlStringToken > m_vecRestrictedToItems; // offset 0xFC8, size 0x18, align 8
    HeroBuildID_t m_unHeroBuildID; // offset 0xFE0, size 0x4, align 255
    char _pad_0FE4[0x4]; // offset 0xFE4
    CUtlString m_sHeroBuildSerialized; // offset 0xFE8, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewEntityForObserver; // offset 0xFF0, size 0x4, align 4
    bool m_bNetworkDisconnected; // offset 0xFF4, size 0x1, align 1
    bool m_bLearningAbility; // offset 0xFF5, size 0x1, align 1
    char _pad_0FF6[0x2]; // offset 0xFF6
    int32 m_nFlashStartTick; // offset 0xFF8, size 0x4, align 4
    int32 m_nFlashMaxStartTick; // offset 0xFFC, size 0x4, align 4
    int32 m_nFlashFadeStartTick; // offset 0x1000, size 0x4, align 4
    int32 m_nFlashEndTick; // offset 0x1004, size 0x4, align 4
    int8 m_nFlashMaxAlpha; // offset 0x1008, size 0x1, align 1
    char _pad_1009[0x3]; // offset 0x1009
    int32 m_nDeducedLane; // offset 0x100C, size 0x4, align 4
    CPlayerSlot m_hEnemyPlayerPrimaryAimTarget; // offset 0x1010, size 0x4, align 4
    char _pad_1014[0x4]; // offset 0x1014
    uint64 m_iEnemyPlayerAimTargetBitVec; // offset 0x1018, size 0x8, align 8
    ItemDraftRoundState_t m_ItemDraftRoundState; // offset 0x1020, size 0x88, align 255
    int32 m_nStreetBrawlCorruptionsAvailable; // offset 0x10A8, size 0x4, align 4
    char _pad_10AC[0x1C]; // offset 0x10AC
    GameTime_t m_tLastRevealTime; // offset 0x10C8, size 0x4, align 255
    GameTime_t m_tLastPlayerRevealTime; // offset 0x10CC, size 0x4, align 255
    bool m_bDismissedReportCard; // offset 0x10D0, size 0x1, align 1
    char _pad_10D1[0x3]; // offset 0x10D1
    float32 m_flCurrentHealingAmount; // offset 0x10D4, size 0x4, align 4
    CHandle< CCitadelBaseAbility > m_hAbilityRequiresDebounce; // offset 0x10D8, size 0x4, align 4
    char _pad_10DC[0x4]; // offset 0x10DC
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0x10E0, size 0x268, align 255
    CCitadelHeroComponent m_CCitadelHeroComponent; // offset 0x1348, size 0x40, align 255
    CCitadelRegenComponent m_CCitadelRegenComponent; // offset 0x1388, size 0x160, align 255
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0x14E8, size 0x20, align 255
    bool m_bHasShopOpen; // offset 0x1508, size 0x1, align 1
    char _pad_1509[0x3]; // offset 0x1509
    ECitadelPingLocation_t m_eCurrentPingLocation; // offset 0x150C, size 0x4, align 4
    char _pad_1510[0x6C0]; // offset 0x1510
    float32 m_flLastRegenThinkTime; // offset 0x1BD0, size 0x4, align 4
    char _pad_1BD4[0x3C]; // offset 0x1BD4
    int32 m_nBulletsFiredAtUs; // offset 0x1C10, size 0x4, align 4
    int32 m_nBulletsHitOnUs; // offset 0x1C14, size 0x4, align 4
    int32 m_nHeadshotsOnUs; // offset 0x1C18, size 0x4, align 4
    GameTime_t m_flLastGameStatsRecorded; // offset 0x1C1C, size 0x4, align 255
    float32 m_flUnusedGoldRemainder; // offset 0x1C20, size 0x4, align 4
    float32 m_flUnusedAbilityRemainder; // offset 0x1C24, size 0x4, align 4
    int32 m_nBulletsFiredAtEnemyHeroes; // offset 0x1C28, size 0x4, align 4
    int32 m_nBulletsHitOnEnemyHeroes; // offset 0x1C2C, size 0x4, align 4
    int32 m_nHeadshotsOnEnemyHeroes; // offset 0x1C30, size 0x4, align 4
    int32 m_nLuckyShotsOnEnemyHeroes; // offset 0x1C34, size 0x4, align 4
    int32 m_nBulletsHitOnImmobileEnemyHeroes; // offset 0x1C38, size 0x4, align 4
    int32 m_nHeadshotsOnImmobileEnemyHeroes; // offset 0x1C3C, size 0x4, align 4
    CHandle< CBaseEntity > m_hEnemyHeroClientAimedAtAttackTime; // offset 0x1C40, size 0x4, align 4
    bool m_bHasOverrideSpawnPos; // offset 0x1C44, size 0x1, align 1
    char _pad_1C45[0x3]; // offset 0x1C45
    VectorWS m_vecOverrideSpawnPos; // offset 0x1C48, size 0xC, align 4
    int32 m_iTrooperWaveEventCount; // offset 0x1C54, size 0x4, align 4
    int32 m_iTrooperWaveNumber; // offset 0x1C58, size 0x4, align 4
    int32 m_iPrevTrooperWaveEventCount; // offset 0x1C5C, size 0x4, align 4
    int32 m_iPrevTrooperWaveNumber; // offset 0x1C60, size 0x4, align 4
    bool m_bHasStartedPlaying; // offset 0x1C64, size 0x1, align 1
    char _pad_1C65[0x3]; // offset 0x1C65
    CHandle< CBaseEntity > m_hRevengeTarget; // offset 0x1C68, size 0x4, align 4
    char _pad_1C6C[0x10]; // offset 0x1C6C
    GameTime_t m_flLastHurtTimeByEnemyHero; // offset 0x1C7C, size 0x4, align 255
    GameTime_t m_flLastHurtByNeutral; // offset 0x1C80, size 0x4, align 255
    GameTime_t m_flLastHurtByEnemyNPC; // offset 0x1C84, size 0x4, align 255
    GameTime_t m_flLastTimeLookedAtByDirector; // offset 0x1C88, size 0x4, align 255
    char _pad_1C8C[0x4]; // offset 0x1C8C
    CTakeDamageResult m_ragdollDamage; // offset 0x1C90, size 0x68, align 8
    char _pad_1CF8[0x60]; // offset 0x1CF8
    CCitadelRecentDamage m_sInCombat; // offset 0x1D58, size 0x18, align 255
    CCitadelRecentDamage m_sPlayerDamageTaken; // offset 0x1D70, size 0x18, align 255
    CCitadelRecentDamage m_sPlayerDamageDealt; // offset 0x1D88, size 0x18, align 255
    char _pad_1DA0[0xBC]; // offset 0x1DA0
    CMsgLaneColor m_eZipLineLaneColor; // offset 0x1E5C, size 0x4, align 4
    CEntityIndex m_nMapDistrictTrigger; // offset 0x1E60, size 0x4, align 4
    int8 m_nMapDistrictLocation; // offset 0x1E64, size 0x1, align 1
    bool m_bCanBecomeRagdoll; // offset 0x1E65, size 0x1, align 1
    char _pad_1E66[0x2]; // offset 0x1E66
    float32 m_blindUntilTime; // offset 0x1E68, size 0x4, align 4
    float32 m_blindStartTime; // offset 0x1E6C, size 0x4, align 4
    int8 m_nSuccessiveDucks; // offset 0x1E70, size 0x1, align 1
    char _pad_1E71[0x3]; // offset 0x1E71
    GameTime_t m_flLastDuckTime; // offset 0x1E74, size 0x4, align 255
    GameTime_t m_flPredTimeSlowedStart; // offset 0x1E78, size 0x4, align 255
    GameTime_t m_flPredTimeSlowedEnd; // offset 0x1E7C, size 0x4, align 255
    float32 m_flPredSlowSpeed; // offset 0x1E80, size 0x4, align 4
    GameTime_t[4] m_flTimeSlowedStart; // offset 0x1E84, size 0x10, align 4
    GameTime_t[4] m_flTimeSlowedEnd; // offset 0x1E94, size 0x10, align 4
    float32[4] m_flSlowSpeed; // offset 0x1EA4, size 0x10, align 4
    GameTime_t m_flForceInCombatAnimsUntilTime; // offset 0x1EB4, size 0x4, align 255
    bool[4] m_arrPreventAbilityLearning; // offset 0x1EB8, size 0x4, align 1
    int32 m_iCurSlowSlot; // offset 0x1EBC, size 0x4, align 4
    char _pad_1EC0[0x4]; // offset 0x1EC0
    ParticleIndex_t m_nRespawnParticleIndex; // offset 0x1EC4, size 0x4, align 255
    ParticleIndex_t m_nShoppingParticle; // offset 0x1EC8, size 0x4, align 255
    char _pad_1ECC[0x2C]; // offset 0x1ECC
    CCitadelPlayerBot* m_pBot; // offset 0x1EF8, size 0x8, align 8
    char _pad_1F00[0x280]; // offset 0x1F00
    bool m_bLocoLeanTriggeredForDirection; // offset 0x2180, size 0x1, align 1
    bool m_bLocoRunToStopCanTrigger; // offset 0x2181, size 0x1, align 1
    char _pad_2182[0x2]; // offset 0x2182
    float32 m_flCrouchFraction; // offset 0x2184, size 0x4, align 4
    float32 m_flCrouchSpeed; // offset 0x2188, size 0x4, align 4
    GameTime_t m_fidgetTime; // offset 0x218C, size 0x4, align 255
    Vector m_vShootTestOffsetStanding; // offset 0x2190, size 0xC, align 4
    Vector m_vShootTestOffsetCrouching; // offset 0x219C, size 0xC, align 4
    GameTime_t m_leanStartTime; // offset 0x21A8, size 0x4, align 255
    char _pad_21AC[0x8]; // offset 0x21AC
    GameTick_t m_nLastUnpredictableMovementTick; // offset 0x21B4, size 0x4, align 255
    char _pad_21B8[0x48]; // offset 0x21B8
};
