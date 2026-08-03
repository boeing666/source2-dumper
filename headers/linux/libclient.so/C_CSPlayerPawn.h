#pragma once

class C_CSPlayerPawn : public C_CSPlayerPawnBase /*0x0*/  // sizeof 0x4300, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1418]; // offset 0x0
    CCSPlayer_BulletServices* m_pBulletServices; // offset 0x1418, size 0x8, align 8
    CCSPlayer_HostageServices* m_pHostageServices; // offset 0x1420, size 0x8, align 8
    CCSPlayer_BuyServices* m_pBuyServices; // offset 0x1428, size 0x8, align 8
    CCSPlayer_GlowServices* m_pGlowServices; // offset 0x1430, size 0x8, align 8
    CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // offset 0x1438, size 0x8, align 8
    CCSPlayer_AimPunchServices* m_pAimPunchServices; // offset 0x1440, size 0x8, align 8
    CCSPlayer_DamageReactServices* m_pDamageReactServices; // offset 0x1448, size 0x8, align 8
    GameTime_t m_flHealthShotBoostExpirationTime; // offset 0x1450, size 0x4, align 255
    GameTime_t m_flLastFiredWeaponTime; // offset 0x1454, size 0x4, align 255
    bool m_bHasFemaleVoice; // offset 0x1458, size 0x1, align 1
    char _pad_1459[0x3]; // offset 0x1459
    float32 m_flLandingTimeSeconds; // offset 0x145C, size 0x4, align 4
    float32 m_flOldFallVelocity; // offset 0x1460, size 0x4, align 4
    char[18] m_szLastPlaceName; // offset 0x1464, size 0x12, align 1
    bool m_bPrevDefuser; // offset 0x1476, size 0x1, align 1
    bool m_bPrevHelmet; // offset 0x1477, size 0x1, align 1
    int32 m_nPrevArmorVal; // offset 0x1478, size 0x4, align 4
    int32 m_nPrevGrenadeAmmoCount; // offset 0x147C, size 0x4, align 4
    uint32 m_unPreviousWeaponHash; // offset 0x1480, size 0x4, align 4
    uint32 m_unWeaponHash; // offset 0x1484, size 0x4, align 4
    bool m_bInBuyZone; // offset 0x1488, size 0x1, align 1
    bool m_bPreviouslyInBuyZone; // offset 0x1489, size 0x1, align 1
    bool m_bInLanding; // offset 0x148A, size 0x1, align 1
    char _pad_148B[0x1]; // offset 0x148B
    float32 m_flLandingStartTime; // offset 0x148C, size 0x4, align 4
    bool m_bInHostageRescueZone; // offset 0x1490, size 0x1, align 1
    bool m_bInBombZone; // offset 0x1491, size 0x1, align 1
    bool m_bIsBuyMenuOpen; // offset 0x1492, size 0x1, align 1
    char _pad_1493[0x1]; // offset 0x1493
    GameTime_t m_flTimeOfLastInjury; // offset 0x1494, size 0x4, align 255
    GameTime_t m_flNextSprayDecalTime; // offset 0x1498, size 0x4, align 255
    char _pad_149C[0x164]; // offset 0x149C
    int32 m_iRetakesOffering; // offset 0x1600, size 0x4, align 4
    int32 m_iRetakesOfferingCard; // offset 0x1604, size 0x4, align 4
    bool m_bRetakesHasDefuseKit; // offset 0x1608, size 0x1, align 1
    bool m_bRetakesMVPLastRound; // offset 0x1609, size 0x1, align 1
    char _pad_160A[0x2]; // offset 0x160A
    int32 m_iRetakesMVPBoostItem; // offset 0x160C, size 0x4, align 4
    loadout_slot_t m_RetakesMVPBoostExtraUtility; // offset 0x1610, size 0x4, align 4
    char _pad_1614[0x1]; // offset 0x1614
    bool m_bNeedToReApplyGloves; // offset 0x1615, size 0x1, align 1
    char _pad_1616[0x2]; // offset 0x1616
    C_EconItemView m_EconGloves; // offset 0x1618, size 0x1378, align 255
    uint8 m_nEconGlovesChanged; // offset 0x2990, size 0x1, align 1
    bool m_bMustSyncRagdollState; // offset 0x2991, size 0x1, align 1
    char _pad_2992[0x2]; // offset 0x2992
    int32 m_nRagdollDamageBone; // offset 0x2994, size 0x4, align 4
    Vector m_vRagdollDamageForce; // offset 0x2998, size 0xC, align 4
    char[64] m_szRagdollDamageWeaponName; // offset 0x29A4, size 0x40, align 1
    bool m_bRagdollDamageHeadshot; // offset 0x29E4, size 0x1, align 1
    char _pad_29E5[0x3]; // offset 0x29E5
    VectorWS m_vRagdollServerOrigin; // offset 0x29E8, size 0xC, align 4
    GameTime_t m_lastLandTime; // offset 0x29F4, size 0x4, align 255
    bool m_bOnGroundLastTick; // offset 0x29F8, size 0x1, align 1
    char _pad_29F9[0x1B]; // offset 0x29F9
    CHandle< C_CS2HudModelArms > m_hHudModelArms; // offset 0x2A14, size 0x4, align 4
    QAngle m_qDeathEyeAngles; // offset 0x2A18, size 0xC, align 4
    bool m_bLeftHanded; // offset 0x2A24, size 0x1, align 1
    char _pad_2A25[0x3]; // offset 0x2A25
    GameTime_t m_fSwitchedHandednessTime; // offset 0x2A28, size 0x4, align 255
    float32 m_flViewmodelOffsetX; // offset 0x2A2C, size 0x4, align 4
    float32 m_flViewmodelOffsetY; // offset 0x2A30, size 0x4, align 4
    float32 m_flViewmodelOffsetZ; // offset 0x2A34, size 0x4, align 4
    float32 m_flViewmodelFOV; // offset 0x2A38, size 0x4, align 4
    uint32[5] m_vecPlayerPatchEconIndices; // offset 0x2A3C, size 0x14, align 4
    char _pad_2A50[0x30]; // offset 0x2A50
    Color m_GunGameImmunityColor; // offset 0x2A80, size 0x4, align 1
    char _pad_2A84[0x4C]; // offset 0x2A84
    CUtlVector< C_BulletHitModel* > m_vecBulletHitModels; // offset 0x2AD0, size 0x18, align 8
    bool m_bIsWalking; // offset 0x2AE8, size 0x1, align 1
    char _pad_2AE9[0x7]; // offset 0x2AE9
    EntitySpottedState_t m_entitySpottedState; // offset 0x2AF0, size 0x18, align 255
    bool m_bIsScoped; // offset 0x2B08, size 0x1, align 1
    bool m_bResumeZoom; // offset 0x2B09, size 0x1, align 1
    bool m_bIsDefusing; // offset 0x2B0A, size 0x1, align 1
    bool m_bIsGrabbingHostage; // offset 0x2B0B, size 0x1, align 1
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // offset 0x2B0C, size 0x4, align 4
    GameTime_t m_flEmitSoundTime; // offset 0x2B10, size 0x4, align 255
    bool m_bInNoDefuseArea; // offset 0x2B14, size 0x1, align 1
    char _pad_2B15[0x3]; // offset 0x2B15
    int32 m_nWhichBombZone; // offset 0x2B18, size 0x4, align 4
    int32 m_iShotsFired; // offset 0x2B1C, size 0x4, align 4
    float32 m_flFlinchStack; // offset 0x2B20, size 0x4, align 4
    float32 m_flVelocityModifier; // offset 0x2B24, size 0x4, align 4
    bool m_bWaitForNoAttack; // offset 0x2B28, size 0x1, align 1
    char _pad_2B29[0x3]; // offset 0x2B29
    float32 m_ignoreLadderJumpTime; // offset 0x2B2C, size 0x4, align 4
    char _pad_2B30[0x1]; // offset 0x2B30
    bool m_bKilledByHeadshot; // offset 0x2B31, size 0x1, align 1
    char _pad_2B32[0x2]; // offset 0x2B32
    int32 m_ArmorValue; // offset 0x2B34, size 0x4, align 4
    uint16 m_unCurrentEquipmentValue; // offset 0x2B38, size 0x2, align 2
    uint16 m_unRoundStartEquipmentValue; // offset 0x2B3A, size 0x2, align 2
    uint16 m_unFreezetimeEndEquipmentValue; // offset 0x2B3C, size 0x2, align 2
    char _pad_2B3E[0x2]; // offset 0x2B3E
    CEntityIndex m_nLastKillerIndex; // offset 0x2B40, size 0x4, align 4
    bool m_bOldIsScoped; // offset 0x2B44, size 0x1, align 1
    bool m_bHasDeathInfo; // offset 0x2B45, size 0x1, align 1
    char _pad_2B46[0x2]; // offset 0x2B46
    float32 m_flDeathInfoTime; // offset 0x2B48, size 0x4, align 4
    VectorWS m_vecDeathInfoOrigin; // offset 0x2B4C, size 0xC, align 4
    char _pad_2B58[0x30]; // offset 0x2B58
    GameTime_t m_grenadeParameterStashTime; // offset 0x2B88, size 0x4, align 255
    bool m_bGrenadeParametersStashed; // offset 0x2B8C, size 0x1, align 1
    char _pad_2B8D[0x3]; // offset 0x2B8D
    QAngle m_angStashedShootAngles; // offset 0x2B90, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPosition; // offset 0x2B9C, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPawnCenter; // offset 0x2BA8, size 0xC, align 4
    Vector m_vecStashedVelocity; // offset 0x2BB4, size 0xC, align 4
    char _pad_2BC0[0x1530]; // offset 0x2BC0
    bool m_bShouldAutobuyDMWeapons; // offset 0x40F0, size 0x1, align 1
    char _pad_40F1[0x3]; // offset 0x40F1
    GameTime_t m_fImmuneToGunGameDamageTime; // offset 0x40F4, size 0x4, align 255
    bool m_bGunGameImmunity; // offset 0x40F8, size 0x1, align 1
    char _pad_40F9[0x3]; // offset 0x40F9
    GameTime_t m_fImmuneToGunGameDamageTimeLast; // offset 0x40FC, size 0x4, align 255
    float32 m_fMolotovDamageTime; // offset 0x4100, size 0x4, align 4
    char _pad_4104[0x68]; // offset 0x4104
    ParticleIndex_t m_nPlayerInfernoBodyFx; // offset 0x416C, size 0x4, align 255
    char _pad_4170[0x70]; // offset 0x4170
    QAngle m_angEyeAngles; // offset 0x41E0, size 0xC, align 4
    char _pad_41EC[0x8C]; // offset 0x41EC
    GameTime_t[4] m_arrOldEyeAnglesTimes; // offset 0x4278, size 0x10, align 4
    QAngle[4] m_arrOldEyeAngles; // offset 0x4288, size 0x30, align 4
    QAngle m_angEyeAnglesVelocity; // offset 0x42B8, size 0xC, align 4
    CEntityIndex m_iIDEntIndex; // offset 0x42C4, size 0x4, align 4
    CountdownTimer m_delayTargetIDTimer; // offset 0x42C8, size 0x18, align 8
    CEntityIndex m_iTargetItemEntIdx; // offset 0x42E0, size 0x4, align 4
    CEntityIndex m_iOldIDEntIndex; // offset 0x42E4, size 0x4, align 4
    CountdownTimer m_holdTargetIDTimer; // offset 0x42E8, size 0x18, align 8
};
