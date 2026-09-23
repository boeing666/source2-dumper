#pragma once

class C_CSPlayerPawn : public C_CSPlayerPawnBase /*0x0*/  // sizeof 0x45C0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x14F8]; // offset 0x0
    CCSPlayer_BulletServices* m_pBulletServices; // offset 0x14F8, size 0x8, align 8
    CCSPlayer_HostageServices* m_pHostageServices; // offset 0x1500, size 0x8, align 8
    CCSPlayer_BuyServices* m_pBuyServices; // offset 0x1508, size 0x8, align 8
    CCSPlayer_GlowServices* m_pGlowServices; // offset 0x1510, size 0x8, align 8
    CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // offset 0x1518, size 0x8, align 8
    CCSPlayer_AimPunchServices* m_pAimPunchServices; // offset 0x1520, size 0x8, align 8
    CCSPlayer_DamageReactServices* m_pDamageReactServices; // offset 0x1528, size 0x8, align 8
    GameTime_t m_flHealthShotBoostExpirationTime; // offset 0x1530, size 0x4, align 255
    GameTime_t m_flLastFiredWeaponTime; // offset 0x1534, size 0x4, align 255
    bool m_bHasFemaleVoice; // offset 0x1538, size 0x1, align 1
    char _pad_1539[0x3]; // offset 0x1539
    float32 m_flLandingTimeSeconds; // offset 0x153C, size 0x4, align 4
    float32 m_flOldFallVelocity; // offset 0x1540, size 0x4, align 4
    char[18] m_szLastPlaceName; // offset 0x1544, size 0x12, align 1
    bool m_bPrevDefuser; // offset 0x1556, size 0x1, align 1
    bool m_bPrevHelmet; // offset 0x1557, size 0x1, align 1
    int32 m_nPrevArmorVal; // offset 0x1558, size 0x4, align 4
    int32 m_nPrevGrenadeAmmoCount; // offset 0x155C, size 0x4, align 4
    uint32 m_unPreviousWeaponHash; // offset 0x1560, size 0x4, align 4
    uint32 m_unWeaponHash; // offset 0x1564, size 0x4, align 4
    bool m_bInBuyZone; // offset 0x1568, size 0x1, align 1
    bool m_bPreviouslyInBuyZone; // offset 0x1569, size 0x1, align 1
    bool m_bInLanding; // offset 0x156A, size 0x1, align 1
    char _pad_156B[0x1]; // offset 0x156B
    float32 m_flLandingStartTime; // offset 0x156C, size 0x4, align 4
    bool m_bInHostageRescueZone; // offset 0x1570, size 0x1, align 1
    bool m_bInBombZone; // offset 0x1571, size 0x1, align 1
    bool m_bIsBuyMenuOpen; // offset 0x1572, size 0x1, align 1
    char _pad_1573[0x1]; // offset 0x1573
    GameTime_t m_flTimeOfLastInjury; // offset 0x1574, size 0x4, align 255
    GameTime_t m_flNextSprayDecalTime; // offset 0x1578, size 0x4, align 255
    char _pad_157C[0x164]; // offset 0x157C
    int32 m_iRetakesOffering; // offset 0x16E0, size 0x4, align 4
    int32 m_iRetakesOfferingCard; // offset 0x16E4, size 0x4, align 4
    bool m_bRetakesHasDefuseKit; // offset 0x16E8, size 0x1, align 1
    bool m_bRetakesMVPLastRound; // offset 0x16E9, size 0x1, align 1
    char _pad_16EA[0x2]; // offset 0x16EA
    int32 m_iRetakesMVPBoostItem; // offset 0x16EC, size 0x4, align 4
    loadout_slot_t m_RetakesMVPBoostExtraUtility; // offset 0x16F0, size 0x4, align 4
    char _pad_16F4[0x1]; // offset 0x16F4
    bool m_bNeedToReApplyGloves; // offset 0x16F5, size 0x1, align 1
    char _pad_16F6[0x2]; // offset 0x16F6
    C_EconItemView m_EconGloves; // offset 0x16F8, size 0x14B8, align 255
    uint8 m_nEconGlovesChanged; // offset 0x2BB0, size 0x1, align 1
    bool m_bMustSyncRagdollState; // offset 0x2BB1, size 0x1, align 1
    char _pad_2BB2[0x2]; // offset 0x2BB2
    int32 m_nRagdollDamageBone; // offset 0x2BB4, size 0x4, align 4
    Vector m_vRagdollDamageForce; // offset 0x2BB8, size 0xC, align 4
    char[64] m_szRagdollDamageWeaponName; // offset 0x2BC4, size 0x40, align 1
    bool m_bRagdollDamageHeadshot; // offset 0x2C04, size 0x1, align 1
    char _pad_2C05[0x3]; // offset 0x2C05
    VectorWS m_vRagdollServerOrigin; // offset 0x2C08, size 0xC, align 4
    GameTime_t m_lastLandTime; // offset 0x2C14, size 0x4, align 255
    bool m_bOnGroundLastTick; // offset 0x2C18, size 0x1, align 1
    char _pad_2C19[0x1B]; // offset 0x2C19
    CHandle< CCSMinimapVolume > m_hActiveMinimapVolume; // offset 0x2C34, size 0x4, align 4
    CHandle< C_CS2HudModelArms > m_hHudModelArms; // offset 0x2C38, size 0x4, align 4
    QAngle m_qDeathEyeAngles; // offset 0x2C3C, size 0xC, align 4
    bool m_bLeftHanded; // offset 0x2C48, size 0x1, align 1
    char _pad_2C49[0x3]; // offset 0x2C49
    GameTime_t m_fSwitchedHandednessTime; // offset 0x2C4C, size 0x4, align 255
    float32 m_flViewmodelOffsetX; // offset 0x2C50, size 0x4, align 4
    float32 m_flViewmodelOffsetY; // offset 0x2C54, size 0x4, align 4
    float32 m_flViewmodelOffsetZ; // offset 0x2C58, size 0x4, align 4
    float32 m_flViewmodelFOV; // offset 0x2C5C, size 0x4, align 4
    uint32[5] m_vecPlayerPatchEconIndices; // offset 0x2C60, size 0x14, align 4
    char _pad_2C74[0x34]; // offset 0x2C74
    Color m_GunGameImmunityColor; // offset 0x2CA8, size 0x4, align 4
    char _pad_2CAC[0x4C]; // offset 0x2CAC
    CUtlVector< C_BulletHitModel* > m_vecBulletHitModels; // offset 0x2CF8, size 0x18, align 8
    bool m_bIsWalking; // offset 0x2D10, size 0x1, align 1
    char _pad_2D11[0x7]; // offset 0x2D11
    EntitySpottedState_t m_entitySpottedState; // offset 0x2D18, size 0x18, align 255
    bool m_bIsScoped; // offset 0x2D30, size 0x1, align 1
    bool m_bResumeZoom; // offset 0x2D31, size 0x1, align 1
    bool m_bIsDefusing; // offset 0x2D32, size 0x1, align 1
    bool m_bIsGrabbingHostage; // offset 0x2D33, size 0x1, align 1
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // offset 0x2D34, size 0x4, align 4
    GameTime_t m_flEmitSoundTime; // offset 0x2D38, size 0x4, align 255
    bool m_bInNoDefuseArea; // offset 0x2D3C, size 0x1, align 1
    char _pad_2D3D[0x3]; // offset 0x2D3D
    int32 m_nWhichBombZone; // offset 0x2D40, size 0x4, align 4
    int32 m_iShotsFired; // offset 0x2D44, size 0x4, align 4
    float32 m_flFlinchStack; // offset 0x2D48, size 0x4, align 4
    float32 m_flVelocityModifier; // offset 0x2D4C, size 0x4, align 4
    bool m_bWaitForNoAttack; // offset 0x2D50, size 0x1, align 1
    char _pad_2D51[0x3]; // offset 0x2D51
    float32 m_ignoreLadderJumpTime; // offset 0x2D54, size 0x4, align 4
    char _pad_2D58[0x1]; // offset 0x2D58
    bool m_bKilledByHeadshot; // offset 0x2D59, size 0x1, align 1
    char _pad_2D5A[0x2]; // offset 0x2D5A
    int32 m_ArmorValue; // offset 0x2D5C, size 0x4, align 4
    uint16 m_unCurrentEquipmentValue; // offset 0x2D60, size 0x2, align 2
    uint16 m_unRoundStartEquipmentValue; // offset 0x2D62, size 0x2, align 2
    uint16 m_unFreezetimeEndEquipmentValue; // offset 0x2D64, size 0x2, align 2
    char _pad_2D66[0x2]; // offset 0x2D66
    CEntityIndex m_nLastKillerIndex; // offset 0x2D68, size 0x4, align 4
    bool m_bOldIsScoped; // offset 0x2D6C, size 0x1, align 1
    bool m_bHasDeathInfo; // offset 0x2D6D, size 0x1, align 1
    char _pad_2D6E[0x2]; // offset 0x2D6E
    float32 m_flDeathInfoTime; // offset 0x2D70, size 0x4, align 4
    VectorWS m_vecDeathInfoOrigin; // offset 0x2D74, size 0xC, align 4
    char _pad_2D80[0x30]; // offset 0x2D80
    GameTime_t m_grenadeParameterStashTime; // offset 0x2DB0, size 0x4, align 255
    bool m_bGrenadeParametersStashed; // offset 0x2DB4, size 0x1, align 1
    char _pad_2DB5[0x3]; // offset 0x2DB5
    QAngle m_angStashedShootAngles; // offset 0x2DB8, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPosition; // offset 0x2DC4, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPawnCenter; // offset 0x2DD0, size 0xC, align 4
    Vector m_vecStashedVelocity; // offset 0x2DDC, size 0xC, align 4
    float32 m_flInterpolatedInaccuracy; // offset 0x2DE8, size 0x4, align 4
    char _pad_2DEC[0x15B4]; // offset 0x2DEC
    bool m_bShouldAutobuyDMWeapons; // offset 0x43A0, size 0x1, align 1
    char _pad_43A1[0x3]; // offset 0x43A1
    GameTime_t m_fImmuneToGunGameDamageTime; // offset 0x43A4, size 0x4, align 255
    bool m_bGunGameImmunity; // offset 0x43A8, size 0x1, align 1
    char _pad_43A9[0x3]; // offset 0x43A9
    GameTime_t m_fImmuneToGunGameDamageTimeLast; // offset 0x43AC, size 0x4, align 255
    float32 m_fMolotovDamageTime; // offset 0x43B0, size 0x4, align 4
    char _pad_43B4[0x68]; // offset 0x43B4
    ParticleIndex_t m_nPlayerInfernoBodyFx; // offset 0x441C, size 0x4, align 255
    char _pad_4420[0x70]; // offset 0x4420
    QAngle m_angEyeAngles; // offset 0x4490, size 0xC, align 4
    char _pad_449C[0x8C]; // offset 0x449C
    GameTime_t[4] m_arrOldEyeAnglesTimes; // offset 0x4528, size 0x10, align 4
    QAngle[4] m_arrOldEyeAngles; // offset 0x4538, size 0x30, align 4
    QAngle m_angEyeAnglesVelocity; // offset 0x4568, size 0xC, align 4
    CEntityIndex m_iIDEntIndex; // offset 0x4574, size 0x4, align 4
    CountdownTimer m_delayTargetIDTimer; // offset 0x4578, size 0x18, align 8
    CEntityIndex m_iTargetItemEntIdx; // offset 0x4590, size 0x4, align 4
    CEntityIndex m_iOldIDEntIndex; // offset 0x4594, size 0x4, align 4
    CountdownTimer m_holdTargetIDTimer; // offset 0x4598, size 0x18, align 8
    char _pad_45B0[0x10]; // offset 0x45B0
};
