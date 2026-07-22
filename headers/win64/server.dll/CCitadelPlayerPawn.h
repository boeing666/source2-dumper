#pragma once

class CCitadelPlayerPawn : public CCitadelPlayerPawnBase /*0x0*/  // sizeof 0x2210, align 0x10 [vtable] (server) {MNetworkIncludeByName MNetworkExcludeByName MNetworkExcludeByUserGroup MNetworkExcludeByName MNetworkExcludeByName MNetworkUserGroupProxy MNetworkUserGroupProxy MNetworkVarTypeOverride MNetworkIncludeByName MNetworkVarTypeOverride MNetworkIncludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xDF0]; // offset 0x0
    int32[45] m_arrGoldSources; // offset 0xDF0, size 0xB4, align 4
    QAngle m_angClientCamera; // offset 0xEA4, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup MNetworkBitCount MNetworkPriority
    QAngle m_angEyeAngles; // offset 0xEB0, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup MNetworkEncoder MNetworkBitCount MNetworkPriority
    QAngle m_angLockedEyeAngles; // offset 0xEBC, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    int32 m_nLevel; // offset 0xEC8, size 0x4, align 4 | MNetworkEnable
    int32[6] m_nCurrencies; // offset 0xECC, size 0x18, align 4 | MNetworkEnable
    int32[6] m_nSpentCurrencies; // offset 0xEE4, size 0x18, align 4 | MNetworkEnable
    GameTime_t m_flRespawnTime; // offset 0xEFC, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flLastSpawnTime; // offset 0xF00, size 0x4, align 255 | MNetworkEnable
    bool m_bInRegenerationZone; // offset 0xF04, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bInItemShopZone; // offset 0xF05, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bInHideoutZone; // offset 0xF06, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0F07[0x1]; // offset 0xF07
    GameTime_t m_timeRevealedOnMinimapByNPC; // offset 0xF08, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_0F0C[0x4]; // offset 0xF0C
    CNetworkUtlVectorBase< CUtlStringToken > m_vecFullSellPriceItems; // offset 0xF10, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup
    CNetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t > m_vecFullSellPriceAbilityUpgrades; // offset 0xF28, size 0x60, align 8 | MNetworkEnable MNetworkUserGroup
    CNetworkUtlVectorBase< CUtlStringToken > m_vecQuickbuyQueue; // offset 0xF88, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup
    char _pad_0FA0[0x18]; // offset 0xFA0
    CNetworkUtlVectorBase< CUtlStringToken > m_vecQuickbuySellQueue; // offset 0xFB8, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup
    bool m_bQuickbuyAutoPurchase; // offset 0xFD0, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0FD1[0x3]; // offset 0xFD1
    CUtlStringToken m_unQuickbuyAutoPurchaseRequest; // offset 0xFD4, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bQuickbuyAutoQueueBuild; // offset 0xFD8, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0FD9[0x2F]; // offset 0xFD9
    CNetworkUtlVectorBase< CUtlStringToken > m_vecRestrictedToItems; // offset 0x1008, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup
    HeroBuildID_t m_unHeroBuildID; // offset 0x1020, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_1024[0x4]; // offset 0x1024
    CUtlString m_sHeroBuildSerialized; // offset 0x1028, size 0x8, align 8 | MNetworkEnable MNetworkUserGroup
    CHandle< CBaseEntity > m_hViewEntityForObserver; // offset 0x1030, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bNetworkDisconnected; // offset 0x1034, size 0x1, align 1 | MNetworkEnable
    bool m_bLearningAbility; // offset 0x1035, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_1036[0x2]; // offset 0x1036
    int32 m_nFlashStartTick; // offset 0x1038, size 0x4, align 4 | MNetworkEnable
    int32 m_nFlashMaxStartTick; // offset 0x103C, size 0x4, align 4 | MNetworkEnable
    int32 m_nFlashFadeStartTick; // offset 0x1040, size 0x4, align 4 | MNetworkEnable
    int32 m_nFlashEndTick; // offset 0x1044, size 0x4, align 4 | MNetworkEnable
    int8 m_nFlashMaxAlpha; // offset 0x1048, size 0x1, align 1 | MNetworkEnable
    char _pad_1049[0x3]; // offset 0x1049
    int32 m_nDeducedLane; // offset 0x104C, size 0x4, align 4 | MNetworkEnable
    CHandle< CBaseEntity > m_hEnemyPlayerAimTarget; // offset 0x1050, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup MNetworkPriority
    char _pad_1054[0x4]; // offset 0x1054
    ItemDraftRoundState_t m_ItemDraftRoundState; // offset 0x1058, size 0x88, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_10E0[0x18]; // offset 0x10E0
    bool m_bDismissedReportCard; // offset 0x10F8, size 0x1, align 1 | MNetworkEnable
    char _pad_10F9[0x3]; // offset 0x10F9
    float32 m_flCurrentHealingAmount; // offset 0x10FC, size 0x4, align 4 | MNetworkEnable
    CHandle< CCitadelBaseAbility > m_hAbilityRequiresDebounce; // offset 0x1100, size 0x4, align 4
    char _pad_1104[0x4]; // offset 0x1104
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0x1108, size 0x268, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias MNetworkPriority
    CCitadelHeroComponent m_CCitadelHeroComponent; // offset 0x1370, size 0x40, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    CCitadelRegenComponent m_CCitadelRegenComponent; // offset 0x13B0, size 0x160, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0x1510, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    bool m_bHasShopOpen; // offset 0x1530, size 0x1, align 1
    char _pad_1531[0x3]; // offset 0x1531
    ECitadelPingLocation_t m_eCurrentPingLocation; // offset 0x1534, size 0x4, align 4
    char _pad_1538[0x6C0]; // offset 0x1538
    float32 m_flLastRegenThinkTime; // offset 0x1BF8, size 0x4, align 4
    char _pad_1BFC[0x34]; // offset 0x1BFC
    int32 m_nBulletsFiredAtUs; // offset 0x1C30, size 0x4, align 4
    int32 m_nBulletsHitOnUs; // offset 0x1C34, size 0x4, align 4
    int32 m_nHeadshotsOnUs; // offset 0x1C38, size 0x4, align 4
    GameTime_t m_flLastGameStatsRecorded; // offset 0x1C3C, size 0x4, align 255
    float32 m_flUnusedGoldRemainder; // offset 0x1C40, size 0x4, align 4
    float32 m_flUnusedAbilityRemainder; // offset 0x1C44, size 0x4, align 4
    int32 m_nBulletsFiredAtEnemyHeroes; // offset 0x1C48, size 0x4, align 4
    int32 m_nBulletsHitOnEnemyHeroes; // offset 0x1C4C, size 0x4, align 4
    int32 m_nHeadshotsOnEnemyHeroes; // offset 0x1C50, size 0x4, align 4
    int32 m_nLuckyShotsOnEnemyHeroes; // offset 0x1C54, size 0x4, align 4
    int32 m_nBulletsHitOnImmobileEnemyHeroes; // offset 0x1C58, size 0x4, align 4
    int32 m_nHeadshotsOnImmobileEnemyHeroes; // offset 0x1C5C, size 0x4, align 4
    CHandle< CBaseEntity > m_hEnemyHeroClientAimedAtAttackTime; // offset 0x1C60, size 0x4, align 4
    bool m_bHasOverrideSpawnPos; // offset 0x1C64, size 0x1, align 1
    char _pad_1C65[0x3]; // offset 0x1C65
    Vector m_vecOverrideSpawnPos; // offset 0x1C68, size 0xC, align 4
    int32 m_iTrooperWaveEventCount; // offset 0x1C74, size 0x4, align 4
    int32 m_iTrooperWaveNumber; // offset 0x1C78, size 0x4, align 4
    int32 m_iPrevTrooperWaveEventCount; // offset 0x1C7C, size 0x4, align 4
    int32 m_iPrevTrooperWaveNumber; // offset 0x1C80, size 0x4, align 4
    bool m_bHasStartedPlaying; // offset 0x1C84, size 0x1, align 1
    char _pad_1C85[0x3]; // offset 0x1C85
    CHandle< CBaseEntity > m_hRevengeTarget; // offset 0x1C88, size 0x4, align 4
    char _pad_1C8C[0x10]; // offset 0x1C8C
    GameTime_t m_flLastHurtTimeByEnemyHero; // offset 0x1C9C, size 0x4, align 255
    GameTime_t m_flLastHurtByNeutral; // offset 0x1CA0, size 0x4, align 255
    GameTime_t m_flLastHurtByEnemyNPC; // offset 0x1CA4, size 0x4, align 255
    GameTime_t m_flLastTimeLookedAtByDirector; // offset 0x1CA8, size 0x4, align 255
    char _pad_1CAC[0x4]; // offset 0x1CAC
    CTakeDamageResult m_ragdollDamage; // offset 0x1CB0, size 0x30, align 255
    char _pad_1CE0[0x88]; // offset 0x1CE0
    CCitadelRecentDamage m_sInCombat; // offset 0x1D68, size 0x18, align 255 | MNetworkEnable
    CCitadelRecentDamage m_sPlayerDamageTaken; // offset 0x1D80, size 0x18, align 255 | MNetworkEnable
    CCitadelRecentDamage m_sPlayerDamageDealt; // offset 0x1D98, size 0x18, align 255 | MNetworkEnable
    char _pad_1DB0[0xBC]; // offset 0x1DB0
    CMsgLaneColor m_eZipLineLaneColor; // offset 0x1E6C, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bCanBecomeRagdoll; // offset 0x1E70, size 0x1, align 1
    char _pad_1E71[0x3]; // offset 0x1E71
    float32 m_blindUntilTime; // offset 0x1E74, size 0x4, align 4
    float32 m_blindStartTime; // offset 0x1E78, size 0x4, align 4
    int8 m_nSuccessiveDucks; // offset 0x1E7C, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_1E7D[0x3]; // offset 0x1E7D
    GameTime_t m_flLastDuckTime; // offset 0x1E80, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bAnimGraphMovementClipped; // offset 0x1E84, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bAnimGraphMovementDisableGravity; // offset 0x1E85, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bAnimGraphMovementDirectAirControl; // offset 0x1E86, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_1E87[0x1]; // offset 0x1E87
    GameTime_t m_flPredTimeSlowedStart; // offset 0x1E88, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flPredTimeSlowedEnd; // offset 0x1E8C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    float32 m_flPredSlowSpeed; // offset 0x1E90, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t[4] m_flTimeSlowedStart; // offset 0x1E94, size 0x10, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t[4] m_flTimeSlowedEnd; // offset 0x1EA4, size 0x10, align 4 | MNetworkEnable MNetworkUserGroup
    float32[4] m_flSlowSpeed; // offset 0x1EB4, size 0x10, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flForceInCombatAnimsUntilTime; // offset 0x1EC4, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool[4] m_arrPreventAbilityLearning; // offset 0x1EC8, size 0x4, align 1 | MNetworkEnable MNetworkUserGroup
    int32 m_iCurSlowSlot; // offset 0x1ECC, size 0x4, align 4
    char _pad_1ED0[0x4]; // offset 0x1ED0
    ParticleIndex_t m_nRespawnParticleIndex; // offset 0x1ED4, size 0x4, align 255
    ParticleIndex_t m_nShoppingParticle; // offset 0x1ED8, size 0x4, align 255
    char _pad_1EDC[0x2C]; // offset 0x1EDC
    CCitadelPlayerBot* m_pBot; // offset 0x1F08, size 0x8, align 8
    char _pad_1F10[0x280]; // offset 0x1F10
    bool m_bLocoLeanTriggeredForDirection; // offset 0x2190, size 0x1, align 1
    bool m_bLocoRunToStopCanTrigger; // offset 0x2191, size 0x1, align 1
    char _pad_2192[0x2]; // offset 0x2192
    float32 m_flCrouchFraction; // offset 0x2194, size 0x4, align 4
    float32 m_flCrouchSpeed; // offset 0x2198, size 0x4, align 4
    GameTime_t m_fidgetTime; // offset 0x219C, size 0x4, align 255
    Vector m_vShootTestOffsetStanding; // offset 0x21A0, size 0xC, align 4
    Vector m_vShootTestOffsetCrouching; // offset 0x21AC, size 0xC, align 4
    GameTime_t m_leanStartTime; // offset 0x21B8, size 0x4, align 255
    GameTick_t m_nLastUnpredictableMovementTick; // offset 0x21BC, size 0x4, align 255
    char _pad_21C0[0x40]; // offset 0x21C0
    uint8 m_nAudioEnclosure; // offset 0x2200, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bAudioHasSkyExposure; // offset 0x2201, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_2202[0xE]; // offset 0x2202
};
