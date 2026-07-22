#pragma once

class C_CSPlayerPawn : public C_CSPlayerPawnBase /*0x0*/  // sizeof 0x42F0, align 0x10 [vtable] (client)
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
    char _pad_149C[0x15C]; // offset 0x149C
    int32 m_iRetakesOffering; // offset 0x15F8, size 0x4, align 4
    int32 m_iRetakesOfferingCard; // offset 0x15FC, size 0x4, align 4
    bool m_bRetakesHasDefuseKit; // offset 0x1600, size 0x1, align 1
    bool m_bRetakesMVPLastRound; // offset 0x1601, size 0x1, align 1
    char _pad_1602[0x2]; // offset 0x1602
    int32 m_iRetakesMVPBoostItem; // offset 0x1604, size 0x4, align 4
    loadout_slot_t m_RetakesMVPBoostExtraUtility; // offset 0x1608, size 0x4, align 4
    char _pad_160C[0x1]; // offset 0x160C
    bool m_bNeedToReApplyGloves; // offset 0x160D, size 0x1, align 1
    char _pad_160E[0x2]; // offset 0x160E
    C_EconItemView m_EconGloves; // offset 0x1610, size 0x1378, align 255
    uint8 m_nEconGlovesChanged; // offset 0x2988, size 0x1, align 1
    bool m_bMustSyncRagdollState; // offset 0x2989, size 0x1, align 1
    char _pad_298A[0x2]; // offset 0x298A
    int32 m_nRagdollDamageBone; // offset 0x298C, size 0x4, align 4
    Vector m_vRagdollDamageForce; // offset 0x2990, size 0xC, align 4
    char[64] m_szRagdollDamageWeaponName; // offset 0x299C, size 0x40, align 1
    bool m_bRagdollDamageHeadshot; // offset 0x29DC, size 0x1, align 1
    char _pad_29DD[0x3]; // offset 0x29DD
    VectorWS m_vRagdollServerOrigin; // offset 0x29E0, size 0xC, align 4
    GameTime_t m_lastLandTime; // offset 0x29EC, size 0x4, align 255
    bool m_bOnGroundLastTick; // offset 0x29F0, size 0x1, align 1
    char _pad_29F1[0x1B]; // offset 0x29F1
    CHandle< C_CS2HudModelArms > m_hHudModelArms; // offset 0x2A0C, size 0x4, align 4
    QAngle m_qDeathEyeAngles; // offset 0x2A10, size 0xC, align 4
    bool m_bLeftHanded; // offset 0x2A1C, size 0x1, align 1
    char _pad_2A1D[0x3]; // offset 0x2A1D
    GameTime_t m_fSwitchedHandednessTime; // offset 0x2A20, size 0x4, align 255
    float32 m_flViewmodelOffsetX; // offset 0x2A24, size 0x4, align 4
    float32 m_flViewmodelOffsetY; // offset 0x2A28, size 0x4, align 4
    float32 m_flViewmodelOffsetZ; // offset 0x2A2C, size 0x4, align 4
    float32 m_flViewmodelFOV; // offset 0x2A30, size 0x4, align 4
    uint32[5] m_vecPlayerPatchEconIndices; // offset 0x2A34, size 0x14, align 4
    char _pad_2A48[0x30]; // offset 0x2A48
    Color m_GunGameImmunityColor; // offset 0x2A78, size 0x4, align 1
    char _pad_2A7C[0x4C]; // offset 0x2A7C
    CUtlVector< C_BulletHitModel* > m_vecBulletHitModels; // offset 0x2AC8, size 0x18, align 8
    bool m_bIsWalking; // offset 0x2AE0, size 0x1, align 1
    char _pad_2AE1[0x7]; // offset 0x2AE1
    EntitySpottedState_t m_entitySpottedState; // offset 0x2AE8, size 0x18, align 255
    bool m_bIsScoped; // offset 0x2B00, size 0x1, align 1
    bool m_bResumeZoom; // offset 0x2B01, size 0x1, align 1
    bool m_bIsDefusing; // offset 0x2B02, size 0x1, align 1
    bool m_bIsGrabbingHostage; // offset 0x2B03, size 0x1, align 1
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // offset 0x2B04, size 0x4, align 4
    GameTime_t m_flEmitSoundTime; // offset 0x2B08, size 0x4, align 255
    bool m_bInNoDefuseArea; // offset 0x2B0C, size 0x1, align 1
    char _pad_2B0D[0x3]; // offset 0x2B0D
    int32 m_nWhichBombZone; // offset 0x2B10, size 0x4, align 4
    int32 m_iShotsFired; // offset 0x2B14, size 0x4, align 4
    float32 m_flFlinchStack; // offset 0x2B18, size 0x4, align 4
    float32 m_flVelocityModifier; // offset 0x2B1C, size 0x4, align 4
    bool m_bWaitForNoAttack; // offset 0x2B20, size 0x1, align 1
    char _pad_2B21[0x3]; // offset 0x2B21
    float32 m_ignoreLadderJumpTime; // offset 0x2B24, size 0x4, align 4
    char _pad_2B28[0x1]; // offset 0x2B28
    bool m_bKilledByHeadshot; // offset 0x2B29, size 0x1, align 1
    char _pad_2B2A[0x2]; // offset 0x2B2A
    int32 m_ArmorValue; // offset 0x2B2C, size 0x4, align 4
    uint16 m_unCurrentEquipmentValue; // offset 0x2B30, size 0x2, align 2
    uint16 m_unRoundStartEquipmentValue; // offset 0x2B32, size 0x2, align 2
    uint16 m_unFreezetimeEndEquipmentValue; // offset 0x2B34, size 0x2, align 2
    char _pad_2B36[0x2]; // offset 0x2B36
    CEntityIndex m_nLastKillerIndex; // offset 0x2B38, size 0x4, align 4
    bool m_bOldIsScoped; // offset 0x2B3C, size 0x1, align 1
    bool m_bHasDeathInfo; // offset 0x2B3D, size 0x1, align 1
    char _pad_2B3E[0x2]; // offset 0x2B3E
    float32 m_flDeathInfoTime; // offset 0x2B40, size 0x4, align 4
    VectorWS m_vecDeathInfoOrigin; // offset 0x2B44, size 0xC, align 4
    char _pad_2B50[0x30]; // offset 0x2B50
    GameTime_t m_grenadeParameterStashTime; // offset 0x2B80, size 0x4, align 255
    bool m_bGrenadeParametersStashed; // offset 0x2B84, size 0x1, align 1
    char _pad_2B85[0x3]; // offset 0x2B85
    QAngle m_angStashedShootAngles; // offset 0x2B88, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPosition; // offset 0x2B94, size 0xC, align 4
    Vector m_vecStashedVelocity; // offset 0x2BA0, size 0xC, align 4
    char _pad_2BAC[0x1534]; // offset 0x2BAC
    bool m_bShouldAutobuyDMWeapons; // offset 0x40E0, size 0x1, align 1
    char _pad_40E1[0x3]; // offset 0x40E1
    GameTime_t m_fImmuneToGunGameDamageTime; // offset 0x40E4, size 0x4, align 255
    bool m_bGunGameImmunity; // offset 0x40E8, size 0x1, align 1
    char _pad_40E9[0x3]; // offset 0x40E9
    GameTime_t m_fImmuneToGunGameDamageTimeLast; // offset 0x40EC, size 0x4, align 255
    float32 m_fMolotovDamageTime; // offset 0x40F0, size 0x4, align 4
    char _pad_40F4[0x68]; // offset 0x40F4
    ParticleIndex_t m_nPlayerInfernoBodyFx; // offset 0x415C, size 0x4, align 255
    char _pad_4160[0x70]; // offset 0x4160
    QAngle m_angEyeAngles; // offset 0x41D0, size 0xC, align 4
    char _pad_41DC[0x8C]; // offset 0x41DC
    GameTime_t[4] m_arrOldEyeAnglesTimes; // offset 0x4268, size 0x10, align 4
    QAngle[4] m_arrOldEyeAngles; // offset 0x4278, size 0x30, align 4
    QAngle m_angEyeAnglesVelocity; // offset 0x42A8, size 0xC, align 4
    CEntityIndex m_iIDEntIndex; // offset 0x42B4, size 0x4, align 4
    CountdownTimer m_delayTargetIDTimer; // offset 0x42B8, size 0x18, align 8
    CEntityIndex m_iTargetItemEntIdx; // offset 0x42D0, size 0x4, align 4
    CEntityIndex m_iOldIDEntIndex; // offset 0x42D4, size 0x4, align 4
    CountdownTimer m_holdTargetIDTimer; // offset 0x42D8, size 0x18, align 8
};
