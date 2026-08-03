#pragma once

class C_CSPlayerPawn : public C_CSPlayerPawnBase /*0x0*/  // sizeof 0x3470, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1490]; // offset 0x0
    CCSPlayer_BulletServices* m_pBulletServices; // offset 0x1490, size 0x8, align 8
    CCSPlayer_HostageServices* m_pHostageServices; // offset 0x1498, size 0x8, align 8
    CCSPlayer_BuyServices* m_pBuyServices; // offset 0x14A0, size 0x8, align 8
    CCSPlayer_GlowServices* m_pGlowServices; // offset 0x14A8, size 0x8, align 8
    CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // offset 0x14B0, size 0x8, align 8
    CCSPlayer_AimPunchServices* m_pAimPunchServices; // offset 0x14B8, size 0x8, align 8
    CCSPlayer_DamageReactServices* m_pDamageReactServices; // offset 0x14C0, size 0x8, align 8
    GameTime_t m_flHealthShotBoostExpirationTime; // offset 0x14C8, size 0x4, align 255
    GameTime_t m_flLastFiredWeaponTime; // offset 0x14CC, size 0x4, align 255
    bool m_bHasFemaleVoice; // offset 0x14D0, size 0x1, align 1
    char _pad_14D1[0x3]; // offset 0x14D1
    float32 m_flLandingTimeSeconds; // offset 0x14D4, size 0x4, align 4
    float32 m_flOldFallVelocity; // offset 0x14D8, size 0x4, align 4
    char[18] m_szLastPlaceName; // offset 0x14DC, size 0x12, align 1
    bool m_bPrevDefuser; // offset 0x14EE, size 0x1, align 1
    bool m_bPrevHelmet; // offset 0x14EF, size 0x1, align 1
    int32 m_nPrevArmorVal; // offset 0x14F0, size 0x4, align 4
    int32 m_nPrevGrenadeAmmoCount; // offset 0x14F4, size 0x4, align 4
    uint32 m_unPreviousWeaponHash; // offset 0x14F8, size 0x4, align 4
    uint32 m_unWeaponHash; // offset 0x14FC, size 0x4, align 4
    bool m_bInBuyZone; // offset 0x1500, size 0x1, align 1
    bool m_bPreviouslyInBuyZone; // offset 0x1501, size 0x1, align 1
    bool m_bInLanding; // offset 0x1502, size 0x1, align 1
    char _pad_1503[0x1]; // offset 0x1503
    float32 m_flLandingStartTime; // offset 0x1504, size 0x4, align 4
    bool m_bInHostageRescueZone; // offset 0x1508, size 0x1, align 1
    bool m_bInBombZone; // offset 0x1509, size 0x1, align 1
    bool m_bIsBuyMenuOpen; // offset 0x150A, size 0x1, align 1
    char _pad_150B[0x1]; // offset 0x150B
    GameTime_t m_flTimeOfLastInjury; // offset 0x150C, size 0x4, align 255
    GameTime_t m_flNextSprayDecalTime; // offset 0x1510, size 0x4, align 255
    char _pad_1514[0x164]; // offset 0x1514
    int32 m_iRetakesOffering; // offset 0x1678, size 0x4, align 4
    int32 m_iRetakesOfferingCard; // offset 0x167C, size 0x4, align 4
    bool m_bRetakesHasDefuseKit; // offset 0x1680, size 0x1, align 1
    bool m_bRetakesMVPLastRound; // offset 0x1681, size 0x1, align 1
    char _pad_1682[0x2]; // offset 0x1682
    int32 m_iRetakesMVPBoostItem; // offset 0x1684, size 0x4, align 4
    loadout_slot_t m_RetakesMVPBoostExtraUtility; // offset 0x1688, size 0x4, align 4
    char _pad_168C[0x1]; // offset 0x168C
    bool m_bNeedToReApplyGloves; // offset 0x168D, size 0x1, align 1
    char _pad_168E[0x2]; // offset 0x168E
    C_EconItemView m_EconGloves; // offset 0x1690, size 0x470, align 255
    uint8 m_nEconGlovesChanged; // offset 0x1B00, size 0x1, align 1
    bool m_bMustSyncRagdollState; // offset 0x1B01, size 0x1, align 1
    char _pad_1B02[0x2]; // offset 0x1B02
    int32 m_nRagdollDamageBone; // offset 0x1B04, size 0x4, align 4
    Vector m_vRagdollDamageForce; // offset 0x1B08, size 0xC, align 4
    char[64] m_szRagdollDamageWeaponName; // offset 0x1B14, size 0x40, align 1
    bool m_bRagdollDamageHeadshot; // offset 0x1B54, size 0x1, align 1
    char _pad_1B55[0x3]; // offset 0x1B55
    VectorWS m_vRagdollServerOrigin; // offset 0x1B58, size 0xC, align 4
    GameTime_t m_lastLandTime; // offset 0x1B64, size 0x4, align 255
    bool m_bOnGroundLastTick; // offset 0x1B68, size 0x1, align 1
    char _pad_1B69[0x1B]; // offset 0x1B69
    CHandle< C_CS2HudModelArms > m_hHudModelArms; // offset 0x1B84, size 0x4, align 4
    QAngle m_qDeathEyeAngles; // offset 0x1B88, size 0xC, align 4
    bool m_bLeftHanded; // offset 0x1B94, size 0x1, align 1
    char _pad_1B95[0x3]; // offset 0x1B95
    GameTime_t m_fSwitchedHandednessTime; // offset 0x1B98, size 0x4, align 255
    float32 m_flViewmodelOffsetX; // offset 0x1B9C, size 0x4, align 4
    float32 m_flViewmodelOffsetY; // offset 0x1BA0, size 0x4, align 4
    float32 m_flViewmodelOffsetZ; // offset 0x1BA4, size 0x4, align 4
    float32 m_flViewmodelFOV; // offset 0x1BA8, size 0x4, align 4
    uint32[5] m_vecPlayerPatchEconIndices; // offset 0x1BAC, size 0x14, align 4
    char _pad_1BC0[0x30]; // offset 0x1BC0
    Color m_GunGameImmunityColor; // offset 0x1BF0, size 0x4, align 1
    char _pad_1BF4[0x4C]; // offset 0x1BF4
    CUtlVector< C_BulletHitModel* > m_vecBulletHitModels; // offset 0x1C40, size 0x18, align 8
    bool m_bIsWalking; // offset 0x1C58, size 0x1, align 1
    char _pad_1C59[0x7]; // offset 0x1C59
    EntitySpottedState_t m_entitySpottedState; // offset 0x1C60, size 0x18, align 255
    bool m_bIsScoped; // offset 0x1C78, size 0x1, align 1
    bool m_bResumeZoom; // offset 0x1C79, size 0x1, align 1
    bool m_bIsDefusing; // offset 0x1C7A, size 0x1, align 1
    bool m_bIsGrabbingHostage; // offset 0x1C7B, size 0x1, align 1
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // offset 0x1C7C, size 0x4, align 4
    GameTime_t m_flEmitSoundTime; // offset 0x1C80, size 0x4, align 255
    bool m_bInNoDefuseArea; // offset 0x1C84, size 0x1, align 1
    char _pad_1C85[0x3]; // offset 0x1C85
    int32 m_nWhichBombZone; // offset 0x1C88, size 0x4, align 4
    int32 m_iShotsFired; // offset 0x1C8C, size 0x4, align 4
    float32 m_flFlinchStack; // offset 0x1C90, size 0x4, align 4
    float32 m_flVelocityModifier; // offset 0x1C94, size 0x4, align 4
    bool m_bWaitForNoAttack; // offset 0x1C98, size 0x1, align 1
    char _pad_1C99[0x3]; // offset 0x1C99
    float32 m_ignoreLadderJumpTime; // offset 0x1C9C, size 0x4, align 4
    char _pad_1CA0[0x1]; // offset 0x1CA0
    bool m_bKilledByHeadshot; // offset 0x1CA1, size 0x1, align 1
    char _pad_1CA2[0x2]; // offset 0x1CA2
    int32 m_ArmorValue; // offset 0x1CA4, size 0x4, align 4
    uint16 m_unCurrentEquipmentValue; // offset 0x1CA8, size 0x2, align 2
    uint16 m_unRoundStartEquipmentValue; // offset 0x1CAA, size 0x2, align 2
    uint16 m_unFreezetimeEndEquipmentValue; // offset 0x1CAC, size 0x2, align 2
    char _pad_1CAE[0x2]; // offset 0x1CAE
    CEntityIndex m_nLastKillerIndex; // offset 0x1CB0, size 0x4, align 4
    bool m_bOldIsScoped; // offset 0x1CB4, size 0x1, align 1
    bool m_bHasDeathInfo; // offset 0x1CB5, size 0x1, align 1
    char _pad_1CB6[0x2]; // offset 0x1CB6
    float32 m_flDeathInfoTime; // offset 0x1CB8, size 0x4, align 4
    VectorWS m_vecDeathInfoOrigin; // offset 0x1CBC, size 0xC, align 4
    char _pad_1CC8[0x30]; // offset 0x1CC8
    GameTime_t m_grenadeParameterStashTime; // offset 0x1CF8, size 0x4, align 255
    bool m_bGrenadeParametersStashed; // offset 0x1CFC, size 0x1, align 1
    char _pad_1CFD[0x3]; // offset 0x1CFD
    QAngle m_angStashedShootAngles; // offset 0x1D00, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPosition; // offset 0x1D0C, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPawnCenter; // offset 0x1D18, size 0xC, align 4
    Vector m_vecStashedVelocity; // offset 0x1D24, size 0xC, align 4
    char _pad_1D30[0x1530]; // offset 0x1D30
    bool m_bShouldAutobuyDMWeapons; // offset 0x3260, size 0x1, align 1
    char _pad_3261[0x3]; // offset 0x3261
    GameTime_t m_fImmuneToGunGameDamageTime; // offset 0x3264, size 0x4, align 255
    bool m_bGunGameImmunity; // offset 0x3268, size 0x1, align 1
    char _pad_3269[0x3]; // offset 0x3269
    GameTime_t m_fImmuneToGunGameDamageTimeLast; // offset 0x326C, size 0x4, align 255
    float32 m_fMolotovDamageTime; // offset 0x3270, size 0x4, align 4
    char _pad_3274[0x68]; // offset 0x3274
    ParticleIndex_t m_nPlayerInfernoBodyFx; // offset 0x32DC, size 0x4, align 255
    char _pad_32E0[0x70]; // offset 0x32E0
    QAngle m_angEyeAngles; // offset 0x3350, size 0xC, align 4
    char _pad_335C[0x84]; // offset 0x335C
    GameTime_t[4] m_arrOldEyeAnglesTimes; // offset 0x33E0, size 0x10, align 4
    QAngle[4] m_arrOldEyeAngles; // offset 0x33F0, size 0x30, align 4
    QAngle m_angEyeAnglesVelocity; // offset 0x3420, size 0xC, align 4
    CEntityIndex m_iIDEntIndex; // offset 0x342C, size 0x4, align 4
    CountdownTimer m_delayTargetIDTimer; // offset 0x3430, size 0x18, align 8
    CEntityIndex m_iTargetItemEntIdx; // offset 0x3448, size 0x4, align 4
    CEntityIndex m_iOldIDEntIndex; // offset 0x344C, size 0x4, align 4
    CountdownTimer m_holdTargetIDTimer; // offset 0x3450, size 0x18, align 8
    char _pad_3468[0x8]; // offset 0x3468
};
