#pragma once

class C_CSPlayerPawn : public C_CSPlayerPawnBase /*0x0*/  // sizeof 0x3750, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1570]; // offset 0x0
    CCSPlayer_BulletServices* m_pBulletServices; // offset 0x1570, size 0x8, align 8
    CCSPlayer_HostageServices* m_pHostageServices; // offset 0x1578, size 0x8, align 8
    CCSPlayer_BuyServices* m_pBuyServices; // offset 0x1580, size 0x8, align 8
    CCSPlayer_GlowServices* m_pGlowServices; // offset 0x1588, size 0x8, align 8
    CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // offset 0x1590, size 0x8, align 8
    CCSPlayer_AimPunchServices* m_pAimPunchServices; // offset 0x1598, size 0x8, align 8
    CCSPlayer_DamageReactServices* m_pDamageReactServices; // offset 0x15A0, size 0x8, align 8
    GameTime_t m_flHealthShotBoostExpirationTime; // offset 0x15A8, size 0x4, align 255
    GameTime_t m_flLastFiredWeaponTime; // offset 0x15AC, size 0x4, align 255
    bool m_bHasFemaleVoice; // offset 0x15B0, size 0x1, align 1
    char _pad_15B1[0x3]; // offset 0x15B1
    float32 m_flLandingTimeSeconds; // offset 0x15B4, size 0x4, align 4
    float32 m_flOldFallVelocity; // offset 0x15B8, size 0x4, align 4
    char[18] m_szLastPlaceName; // offset 0x15BC, size 0x12, align 1
    bool m_bPrevDefuser; // offset 0x15CE, size 0x1, align 1
    bool m_bPrevHelmet; // offset 0x15CF, size 0x1, align 1
    int32 m_nPrevArmorVal; // offset 0x15D0, size 0x4, align 4
    int32 m_nPrevGrenadeAmmoCount; // offset 0x15D4, size 0x4, align 4
    uint32 m_unPreviousWeaponHash; // offset 0x15D8, size 0x4, align 4
    uint32 m_unWeaponHash; // offset 0x15DC, size 0x4, align 4
    bool m_bInBuyZone; // offset 0x15E0, size 0x1, align 1
    bool m_bPreviouslyInBuyZone; // offset 0x15E1, size 0x1, align 1
    bool m_bInLanding; // offset 0x15E2, size 0x1, align 1
    char _pad_15E3[0x1]; // offset 0x15E3
    float32 m_flLandingStartTime; // offset 0x15E4, size 0x4, align 4
    bool m_bInHostageRescueZone; // offset 0x15E8, size 0x1, align 1
    bool m_bInBombZone; // offset 0x15E9, size 0x1, align 1
    bool m_bIsBuyMenuOpen; // offset 0x15EA, size 0x1, align 1
    char _pad_15EB[0x1]; // offset 0x15EB
    GameTime_t m_flTimeOfLastInjury; // offset 0x15EC, size 0x4, align 255
    GameTime_t m_flNextSprayDecalTime; // offset 0x15F0, size 0x4, align 255
    char _pad_15F4[0x194]; // offset 0x15F4
    int32 m_iRetakesOffering; // offset 0x1788, size 0x4, align 4
    int32 m_iRetakesOfferingCard; // offset 0x178C, size 0x4, align 4
    bool m_bRetakesHasDefuseKit; // offset 0x1790, size 0x1, align 1
    bool m_bRetakesMVPLastRound; // offset 0x1791, size 0x1, align 1
    char _pad_1792[0x2]; // offset 0x1792
    int32 m_iRetakesMVPBoostItem; // offset 0x1794, size 0x4, align 4
    loadout_slot_t m_RetakesMVPBoostExtraUtility; // offset 0x1798, size 0x4, align 4
    char _pad_179C[0x1]; // offset 0x179C
    bool m_bNeedToReApplyGloves; // offset 0x179D, size 0x1, align 1
    char _pad_179E[0x2]; // offset 0x179E
    C_EconItemView m_EconGloves; // offset 0x17A0, size 0x5B0, align 255
    uint8 m_nEconGlovesChanged; // offset 0x1D50, size 0x1, align 1
    bool m_bMustSyncRagdollState; // offset 0x1D51, size 0x1, align 1
    char _pad_1D52[0x2]; // offset 0x1D52
    int32 m_nRagdollDamageBone; // offset 0x1D54, size 0x4, align 4
    Vector m_vRagdollDamageForce; // offset 0x1D58, size 0xC, align 4
    char[64] m_szRagdollDamageWeaponName; // offset 0x1D64, size 0x40, align 1
    bool m_bRagdollDamageHeadshot; // offset 0x1DA4, size 0x1, align 1
    char _pad_1DA5[0x3]; // offset 0x1DA5
    VectorWS m_vRagdollServerOrigin; // offset 0x1DA8, size 0xC, align 4
    GameTime_t m_lastLandTime; // offset 0x1DB4, size 0x4, align 255
    bool m_bOnGroundLastTick; // offset 0x1DB8, size 0x1, align 1
    char _pad_1DB9[0x1F]; // offset 0x1DB9
    CHandle< C_CS2HudModelArms > m_hHudModelArms; // offset 0x1DD8, size 0x4, align 4
    QAngle m_qDeathEyeAngles; // offset 0x1DDC, size 0xC, align 4
    bool m_bLeftHanded; // offset 0x1DE8, size 0x1, align 1
    char _pad_1DE9[0x3]; // offset 0x1DE9
    GameTime_t m_fSwitchedHandednessTime; // offset 0x1DEC, size 0x4, align 255
    float32 m_flViewmodelOffsetX; // offset 0x1DF0, size 0x4, align 4
    float32 m_flViewmodelOffsetY; // offset 0x1DF4, size 0x4, align 4
    float32 m_flViewmodelOffsetZ; // offset 0x1DF8, size 0x4, align 4
    float32 m_flViewmodelFOV; // offset 0x1DFC, size 0x4, align 4
    uint32[5] m_vecPlayerPatchEconIndices; // offset 0x1E00, size 0x14, align 4
    char _pad_1E14[0x34]; // offset 0x1E14
    Color m_GunGameImmunityColor; // offset 0x1E48, size 0x4, align 4
    char _pad_1E4C[0x4C]; // offset 0x1E4C
    CUtlVector< C_BulletHitModel* > m_vecBulletHitModels; // offset 0x1E98, size 0x18, align 8
    bool m_bIsWalking; // offset 0x1EB0, size 0x1, align 1
    char _pad_1EB1[0x7]; // offset 0x1EB1
    EntitySpottedState_t m_entitySpottedState; // offset 0x1EB8, size 0x18, align 255
    bool m_bIsScoped; // offset 0x1ED0, size 0x1, align 1
    bool m_bResumeZoom; // offset 0x1ED1, size 0x1, align 1
    bool m_bIsDefusing; // offset 0x1ED2, size 0x1, align 1
    bool m_bIsGrabbingHostage; // offset 0x1ED3, size 0x1, align 1
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // offset 0x1ED4, size 0x4, align 4
    GameTime_t m_flEmitSoundTime; // offset 0x1ED8, size 0x4, align 255
    GameTime_t m_flEmitSoundTime_Client; // offset 0x1EDC, size 0x4, align 255
    bool m_bInNoDefuseArea; // offset 0x1EE0, size 0x1, align 1
    char _pad_1EE1[0x3]; // offset 0x1EE1
    int32 m_nWhichBombZone; // offset 0x1EE4, size 0x4, align 4
    int32 m_iShotsFired; // offset 0x1EE8, size 0x4, align 4
    float32 m_flFlinchStack; // offset 0x1EEC, size 0x4, align 4
    float32 m_flVelocityModifier; // offset 0x1EF0, size 0x4, align 4
    bool m_bWaitForNoAttack; // offset 0x1EF4, size 0x1, align 1
    char _pad_1EF5[0x3]; // offset 0x1EF5
    float32 m_ignoreLadderJumpTime; // offset 0x1EF8, size 0x4, align 4
    char _pad_1EFC[0x1]; // offset 0x1EFC
    bool m_bKilledByHeadshot; // offset 0x1EFD, size 0x1, align 1
    char _pad_1EFE[0x2]; // offset 0x1EFE
    int32 m_ArmorValue; // offset 0x1F00, size 0x4, align 4
    uint16 m_unCurrentEquipmentValue; // offset 0x1F04, size 0x2, align 2
    uint16 m_unRoundStartEquipmentValue; // offset 0x1F06, size 0x2, align 2
    uint16 m_unFreezetimeEndEquipmentValue; // offset 0x1F08, size 0x2, align 2
    char _pad_1F0A[0x2]; // offset 0x1F0A
    CEntityIndex m_nLastKillerIndex; // offset 0x1F0C, size 0x4, align 4
    bool m_bOldIsScoped; // offset 0x1F10, size 0x1, align 1
    bool m_bHasDeathInfo; // offset 0x1F11, size 0x1, align 1
    char _pad_1F12[0x2]; // offset 0x1F12
    float32 m_flDeathInfoTime; // offset 0x1F14, size 0x4, align 4
    VectorWS m_vecDeathInfoOrigin; // offset 0x1F18, size 0xC, align 4
    char _pad_1F24[0x2C]; // offset 0x1F24
    GameTime_t m_grenadeParameterStashTime; // offset 0x1F50, size 0x4, align 255
    bool m_bGrenadeParametersStashed; // offset 0x1F54, size 0x1, align 1
    char _pad_1F55[0x3]; // offset 0x1F55
    QAngle m_angStashedShootAngles; // offset 0x1F58, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPosition; // offset 0x1F64, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPawnCenter; // offset 0x1F70, size 0xC, align 4
    Vector m_vecStashedVelocity; // offset 0x1F7C, size 0xC, align 4
    float32 m_flInterpolatedInaccuracy; // offset 0x1F88, size 0x4, align 4
    char _pad_1F8C[0x15A4]; // offset 0x1F8C
    bool m_bShouldAutobuyDMWeapons; // offset 0x3530, size 0x1, align 1
    char _pad_3531[0x3]; // offset 0x3531
    GameTime_t m_fImmuneToGunGameDamageTime; // offset 0x3534, size 0x4, align 255
    bool m_bGunGameImmunity; // offset 0x3538, size 0x1, align 1
    char _pad_3539[0x3]; // offset 0x3539
    GameTime_t m_fImmuneToGunGameDamageTimeLast; // offset 0x353C, size 0x4, align 255
    float32 m_flBigHeadScale; // offset 0x3540, size 0x4, align 4
    float32 m_fMolotovDamageTime; // offset 0x3544, size 0x4, align 4
    char _pad_3548[0x70]; // offset 0x3548
    ParticleIndex_t m_nPlayerInfernoBodyFx; // offset 0x35B8, size 0x4, align 255
    char _pad_35BC[0x74]; // offset 0x35BC
    QAngle m_angEyeAngles; // offset 0x3630, size 0xC, align 4
    char _pad_363C[0x84]; // offset 0x363C
    GameTime_t[4] m_arrOldEyeAnglesTimes; // offset 0x36C0, size 0x10, align 4
    QAngle[4] m_arrOldEyeAngles; // offset 0x36D0, size 0x30, align 4
    QAngle m_angEyeAnglesVelocity; // offset 0x3700, size 0xC, align 4
    CEntityIndex m_iIDEntIndex; // offset 0x370C, size 0x4, align 4
    CountdownTimer m_delayTargetIDTimer; // offset 0x3710, size 0x18, align 8
    CEntityIndex m_iTargetItemEntIdx; // offset 0x3728, size 0x4, align 4
    CEntityIndex m_iOldIDEntIndex; // offset 0x372C, size 0x4, align 4
    CountdownTimer m_holdTargetIDTimer; // offset 0x3730, size 0x18, align 8
    char _pad_3748[0x8]; // offset 0x3748
};
