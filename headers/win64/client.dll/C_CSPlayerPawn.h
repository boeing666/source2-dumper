#pragma once

class C_CSPlayerPawn : public C_CSPlayerPawnBase /*0x0*/  // sizeof 0x3460, align 0x10 [vtable] (client)
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
    char _pad_1514[0x15C]; // offset 0x1514
    int32 m_iRetakesOffering; // offset 0x1670, size 0x4, align 4
    int32 m_iRetakesOfferingCard; // offset 0x1674, size 0x4, align 4
    bool m_bRetakesHasDefuseKit; // offset 0x1678, size 0x1, align 1
    bool m_bRetakesMVPLastRound; // offset 0x1679, size 0x1, align 1
    char _pad_167A[0x2]; // offset 0x167A
    int32 m_iRetakesMVPBoostItem; // offset 0x167C, size 0x4, align 4
    loadout_slot_t m_RetakesMVPBoostExtraUtility; // offset 0x1680, size 0x4, align 4
    char _pad_1684[0x1]; // offset 0x1684
    bool m_bNeedToReApplyGloves; // offset 0x1685, size 0x1, align 1
    char _pad_1686[0x2]; // offset 0x1686
    C_EconItemView m_EconGloves; // offset 0x1688, size 0x470, align 255
    uint8 m_nEconGlovesChanged; // offset 0x1AF8, size 0x1, align 1
    bool m_bMustSyncRagdollState; // offset 0x1AF9, size 0x1, align 1
    char _pad_1AFA[0x2]; // offset 0x1AFA
    int32 m_nRagdollDamageBone; // offset 0x1AFC, size 0x4, align 4
    Vector m_vRagdollDamageForce; // offset 0x1B00, size 0xC, align 4
    char[64] m_szRagdollDamageWeaponName; // offset 0x1B0C, size 0x40, align 1
    bool m_bRagdollDamageHeadshot; // offset 0x1B4C, size 0x1, align 1
    char _pad_1B4D[0x3]; // offset 0x1B4D
    VectorWS m_vRagdollServerOrigin; // offset 0x1B50, size 0xC, align 4
    GameTime_t m_lastLandTime; // offset 0x1B5C, size 0x4, align 255
    bool m_bOnGroundLastTick; // offset 0x1B60, size 0x1, align 1
    char _pad_1B61[0x1B]; // offset 0x1B61
    CHandle< C_CS2HudModelArms > m_hHudModelArms; // offset 0x1B7C, size 0x4, align 4
    QAngle m_qDeathEyeAngles; // offset 0x1B80, size 0xC, align 4
    bool m_bLeftHanded; // offset 0x1B8C, size 0x1, align 1
    char _pad_1B8D[0x3]; // offset 0x1B8D
    GameTime_t m_fSwitchedHandednessTime; // offset 0x1B90, size 0x4, align 255
    float32 m_flViewmodelOffsetX; // offset 0x1B94, size 0x4, align 4
    float32 m_flViewmodelOffsetY; // offset 0x1B98, size 0x4, align 4
    float32 m_flViewmodelOffsetZ; // offset 0x1B9C, size 0x4, align 4
    float32 m_flViewmodelFOV; // offset 0x1BA0, size 0x4, align 4
    uint32[5] m_vecPlayerPatchEconIndices; // offset 0x1BA4, size 0x14, align 4
    char _pad_1BB8[0x30]; // offset 0x1BB8
    Color m_GunGameImmunityColor; // offset 0x1BE8, size 0x4, align 1
    char _pad_1BEC[0x4C]; // offset 0x1BEC
    CUtlVector< C_BulletHitModel* > m_vecBulletHitModels; // offset 0x1C38, size 0x18, align 8
    bool m_bIsWalking; // offset 0x1C50, size 0x1, align 1
    char _pad_1C51[0x7]; // offset 0x1C51
    EntitySpottedState_t m_entitySpottedState; // offset 0x1C58, size 0x18, align 255
    bool m_bIsScoped; // offset 0x1C70, size 0x1, align 1
    bool m_bResumeZoom; // offset 0x1C71, size 0x1, align 1
    bool m_bIsDefusing; // offset 0x1C72, size 0x1, align 1
    bool m_bIsGrabbingHostage; // offset 0x1C73, size 0x1, align 1
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // offset 0x1C74, size 0x4, align 4
    GameTime_t m_flEmitSoundTime; // offset 0x1C78, size 0x4, align 255
    bool m_bInNoDefuseArea; // offset 0x1C7C, size 0x1, align 1
    char _pad_1C7D[0x3]; // offset 0x1C7D
    int32 m_nWhichBombZone; // offset 0x1C80, size 0x4, align 4
    int32 m_iShotsFired; // offset 0x1C84, size 0x4, align 4
    float32 m_flFlinchStack; // offset 0x1C88, size 0x4, align 4
    float32 m_flVelocityModifier; // offset 0x1C8C, size 0x4, align 4
    bool m_bWaitForNoAttack; // offset 0x1C90, size 0x1, align 1
    char _pad_1C91[0x3]; // offset 0x1C91
    float32 m_ignoreLadderJumpTime; // offset 0x1C94, size 0x4, align 4
    char _pad_1C98[0x1]; // offset 0x1C98
    bool m_bKilledByHeadshot; // offset 0x1C99, size 0x1, align 1
    char _pad_1C9A[0x2]; // offset 0x1C9A
    int32 m_ArmorValue; // offset 0x1C9C, size 0x4, align 4
    uint16 m_unCurrentEquipmentValue; // offset 0x1CA0, size 0x2, align 2
    uint16 m_unRoundStartEquipmentValue; // offset 0x1CA2, size 0x2, align 2
    uint16 m_unFreezetimeEndEquipmentValue; // offset 0x1CA4, size 0x2, align 2
    char _pad_1CA6[0x2]; // offset 0x1CA6
    CEntityIndex m_nLastKillerIndex; // offset 0x1CA8, size 0x4, align 4
    bool m_bOldIsScoped; // offset 0x1CAC, size 0x1, align 1
    bool m_bHasDeathInfo; // offset 0x1CAD, size 0x1, align 1
    char _pad_1CAE[0x2]; // offset 0x1CAE
    float32 m_flDeathInfoTime; // offset 0x1CB0, size 0x4, align 4
    VectorWS m_vecDeathInfoOrigin; // offset 0x1CB4, size 0xC, align 4
    char _pad_1CC0[0x30]; // offset 0x1CC0
    GameTime_t m_grenadeParameterStashTime; // offset 0x1CF0, size 0x4, align 255
    bool m_bGrenadeParametersStashed; // offset 0x1CF4, size 0x1, align 1
    char _pad_1CF5[0x3]; // offset 0x1CF5
    QAngle m_angStashedShootAngles; // offset 0x1CF8, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPosition; // offset 0x1D04, size 0xC, align 4
    Vector m_vecStashedVelocity; // offset 0x1D10, size 0xC, align 4
    char _pad_1D1C[0x1534]; // offset 0x1D1C
    bool m_bShouldAutobuyDMWeapons; // offset 0x3250, size 0x1, align 1
    char _pad_3251[0x3]; // offset 0x3251
    GameTime_t m_fImmuneToGunGameDamageTime; // offset 0x3254, size 0x4, align 255
    bool m_bGunGameImmunity; // offset 0x3258, size 0x1, align 1
    char _pad_3259[0x3]; // offset 0x3259
    GameTime_t m_fImmuneToGunGameDamageTimeLast; // offset 0x325C, size 0x4, align 255
    float32 m_fMolotovDamageTime; // offset 0x3260, size 0x4, align 4
    char _pad_3264[0x68]; // offset 0x3264
    ParticleIndex_t m_nPlayerInfernoBodyFx; // offset 0x32CC, size 0x4, align 255
    char _pad_32D0[0x70]; // offset 0x32D0
    QAngle m_angEyeAngles; // offset 0x3340, size 0xC, align 4
    char _pad_334C[0x84]; // offset 0x334C
    GameTime_t[4] m_arrOldEyeAnglesTimes; // offset 0x33D0, size 0x10, align 4
    QAngle[4] m_arrOldEyeAngles; // offset 0x33E0, size 0x30, align 4
    QAngle m_angEyeAnglesVelocity; // offset 0x3410, size 0xC, align 4
    CEntityIndex m_iIDEntIndex; // offset 0x341C, size 0x4, align 4
    CountdownTimer m_delayTargetIDTimer; // offset 0x3420, size 0x18, align 8
    CEntityIndex m_iTargetItemEntIdx; // offset 0x3438, size 0x4, align 4
    CEntityIndex m_iOldIDEntIndex; // offset 0x343C, size 0x4, align 4
    CountdownTimer m_holdTargetIDTimer; // offset 0x3440, size 0x18, align 8
    char _pad_3458[0x8]; // offset 0x3458
};
