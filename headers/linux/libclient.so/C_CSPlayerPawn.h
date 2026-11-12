#pragma once

class C_CSPlayerPawn : public C_CSPlayerPawnBase /*0x0*/  // sizeof 0x4600, align 0x10 [vtable] (client)
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
    char _pad_157C[0x194]; // offset 0x157C
    int32 m_iRetakesOffering; // offset 0x1710, size 0x4, align 4
    int32 m_iRetakesOfferingCard; // offset 0x1714, size 0x4, align 4
    bool m_bRetakesHasDefuseKit; // offset 0x1718, size 0x1, align 1
    bool m_bRetakesMVPLastRound; // offset 0x1719, size 0x1, align 1
    char _pad_171A[0x2]; // offset 0x171A
    int32 m_iRetakesMVPBoostItem; // offset 0x171C, size 0x4, align 4
    loadout_slot_t m_RetakesMVPBoostExtraUtility; // offset 0x1720, size 0x4, align 4
    char _pad_1724[0x1]; // offset 0x1724
    bool m_bNeedToReApplyGloves; // offset 0x1725, size 0x1, align 1
    char _pad_1726[0x2]; // offset 0x1726
    C_EconItemView m_EconGloves; // offset 0x1728, size 0x14B8, align 255
    uint8 m_nEconGlovesChanged; // offset 0x2BE0, size 0x1, align 1
    bool m_bMustSyncRagdollState; // offset 0x2BE1, size 0x1, align 1
    char _pad_2BE2[0x2]; // offset 0x2BE2
    int32 m_nRagdollDamageBone; // offset 0x2BE4, size 0x4, align 4
    Vector m_vRagdollDamageForce; // offset 0x2BE8, size 0xC, align 4
    char[64] m_szRagdollDamageWeaponName; // offset 0x2BF4, size 0x40, align 1
    bool m_bRagdollDamageHeadshot; // offset 0x2C34, size 0x1, align 1
    char _pad_2C35[0x3]; // offset 0x2C35
    VectorWS m_vRagdollServerOrigin; // offset 0x2C38, size 0xC, align 4
    GameTime_t m_lastLandTime; // offset 0x2C44, size 0x4, align 255
    bool m_bOnGroundLastTick; // offset 0x2C48, size 0x1, align 1
    char _pad_2C49[0x1F]; // offset 0x2C49
    CHandle< C_CS2HudModelArms > m_hHudModelArms; // offset 0x2C68, size 0x4, align 4
    QAngle m_qDeathEyeAngles; // offset 0x2C6C, size 0xC, align 4
    bool m_bLeftHanded; // offset 0x2C78, size 0x1, align 1
    char _pad_2C79[0x3]; // offset 0x2C79
    GameTime_t m_fSwitchedHandednessTime; // offset 0x2C7C, size 0x4, align 255
    float32 m_flViewmodelOffsetX; // offset 0x2C80, size 0x4, align 4
    float32 m_flViewmodelOffsetY; // offset 0x2C84, size 0x4, align 4
    float32 m_flViewmodelOffsetZ; // offset 0x2C88, size 0x4, align 4
    float32 m_flViewmodelFOV; // offset 0x2C8C, size 0x4, align 4
    uint32[5] m_vecPlayerPatchEconIndices; // offset 0x2C90, size 0x14, align 4
    char _pad_2CA4[0x34]; // offset 0x2CA4
    Color m_GunGameImmunityColor; // offset 0x2CD8, size 0x4, align 4
    char _pad_2CDC[0x4C]; // offset 0x2CDC
    CUtlVector< C_BulletHitModel* > m_vecBulletHitModels; // offset 0x2D28, size 0x18, align 8
    bool m_bIsWalking; // offset 0x2D40, size 0x1, align 1
    char _pad_2D41[0x7]; // offset 0x2D41
    EntitySpottedState_t m_entitySpottedState; // offset 0x2D48, size 0x18, align 255
    bool m_bIsScoped; // offset 0x2D60, size 0x1, align 1
    bool m_bResumeZoom; // offset 0x2D61, size 0x1, align 1
    bool m_bIsDefusing; // offset 0x2D62, size 0x1, align 1
    bool m_bIsGrabbingHostage; // offset 0x2D63, size 0x1, align 1
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // offset 0x2D64, size 0x4, align 4
    GameTime_t m_flEmitSoundTime; // offset 0x2D68, size 0x4, align 255
    GameTime_t m_flEmitSoundTime_Client; // offset 0x2D6C, size 0x4, align 255
    bool m_bInNoDefuseArea; // offset 0x2D70, size 0x1, align 1
    char _pad_2D71[0x3]; // offset 0x2D71
    int32 m_nWhichBombZone; // offset 0x2D74, size 0x4, align 4
    int32 m_iShotsFired; // offset 0x2D78, size 0x4, align 4
    float32 m_flFlinchStack; // offset 0x2D7C, size 0x4, align 4
    float32 m_flVelocityModifier; // offset 0x2D80, size 0x4, align 4
    bool m_bWaitForNoAttack; // offset 0x2D84, size 0x1, align 1
    char _pad_2D85[0x3]; // offset 0x2D85
    float32 m_ignoreLadderJumpTime; // offset 0x2D88, size 0x4, align 4
    char _pad_2D8C[0x1]; // offset 0x2D8C
    bool m_bKilledByHeadshot; // offset 0x2D8D, size 0x1, align 1
    char _pad_2D8E[0x2]; // offset 0x2D8E
    int32 m_ArmorValue; // offset 0x2D90, size 0x4, align 4
    uint16 m_unCurrentEquipmentValue; // offset 0x2D94, size 0x2, align 2
    uint16 m_unRoundStartEquipmentValue; // offset 0x2D96, size 0x2, align 2
    uint16 m_unFreezetimeEndEquipmentValue; // offset 0x2D98, size 0x2, align 2
    char _pad_2D9A[0x2]; // offset 0x2D9A
    CEntityIndex m_nLastKillerIndex; // offset 0x2D9C, size 0x4, align 4
    bool m_bOldIsScoped; // offset 0x2DA0, size 0x1, align 1
    bool m_bHasDeathInfo; // offset 0x2DA1, size 0x1, align 1
    char _pad_2DA2[0x2]; // offset 0x2DA2
    float32 m_flDeathInfoTime; // offset 0x2DA4, size 0x4, align 4
    VectorWS m_vecDeathInfoOrigin; // offset 0x2DA8, size 0xC, align 4
    char _pad_2DB4[0x2C]; // offset 0x2DB4
    GameTime_t m_grenadeParameterStashTime; // offset 0x2DE0, size 0x4, align 255
    bool m_bGrenadeParametersStashed; // offset 0x2DE4, size 0x1, align 1
    char _pad_2DE5[0x3]; // offset 0x2DE5
    QAngle m_angStashedShootAngles; // offset 0x2DE8, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPosition; // offset 0x2DF4, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPawnCenter; // offset 0x2E00, size 0xC, align 4
    Vector m_vecStashedVelocity; // offset 0x2E0C, size 0xC, align 4
    float32 m_flInterpolatedInaccuracy; // offset 0x2E18, size 0x4, align 4
    char _pad_2E1C[0x15B4]; // offset 0x2E1C
    bool m_bShouldAutobuyDMWeapons; // offset 0x43D0, size 0x1, align 1
    char _pad_43D1[0x3]; // offset 0x43D1
    GameTime_t m_fImmuneToGunGameDamageTime; // offset 0x43D4, size 0x4, align 255
    bool m_bGunGameImmunity; // offset 0x43D8, size 0x1, align 1
    char _pad_43D9[0x3]; // offset 0x43D9
    GameTime_t m_fImmuneToGunGameDamageTimeLast; // offset 0x43DC, size 0x4, align 255
    float32 m_flBigHeadScale; // offset 0x43E0, size 0x4, align 4
    float32 m_fMolotovDamageTime; // offset 0x43E4, size 0x4, align 4
    char _pad_43E8[0x70]; // offset 0x43E8
    ParticleIndex_t m_nPlayerInfernoBodyFx; // offset 0x4458, size 0x4, align 255
    char _pad_445C[0x74]; // offset 0x445C
    QAngle m_angEyeAngles; // offset 0x44D0, size 0xC, align 4
    char _pad_44DC[0x8C]; // offset 0x44DC
    GameTime_t[4] m_arrOldEyeAnglesTimes; // offset 0x4568, size 0x10, align 4
    QAngle[4] m_arrOldEyeAngles; // offset 0x4578, size 0x30, align 4
    QAngle m_angEyeAnglesVelocity; // offset 0x45A8, size 0xC, align 4
    CEntityIndex m_iIDEntIndex; // offset 0x45B4, size 0x4, align 4
    CountdownTimer m_delayTargetIDTimer; // offset 0x45B8, size 0x18, align 8
    CEntityIndex m_iTargetItemEntIdx; // offset 0x45D0, size 0x4, align 4
    CEntityIndex m_iOldIDEntIndex; // offset 0x45D4, size 0x4, align 4
    CountdownTimer m_holdTargetIDTimer; // offset 0x45D8, size 0x18, align 8
    char _pad_45F0[0x10]; // offset 0x45F0
};
