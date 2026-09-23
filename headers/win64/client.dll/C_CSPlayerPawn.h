#pragma once

class C_CSPlayerPawn : public C_CSPlayerPawnBase /*0x0*/  // sizeof 0x3710, align 0x10 [vtable] (client)
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
    char _pad_15F4[0x164]; // offset 0x15F4
    int32 m_iRetakesOffering; // offset 0x1758, size 0x4, align 4
    int32 m_iRetakesOfferingCard; // offset 0x175C, size 0x4, align 4
    bool m_bRetakesHasDefuseKit; // offset 0x1760, size 0x1, align 1
    bool m_bRetakesMVPLastRound; // offset 0x1761, size 0x1, align 1
    char _pad_1762[0x2]; // offset 0x1762
    int32 m_iRetakesMVPBoostItem; // offset 0x1764, size 0x4, align 4
    loadout_slot_t m_RetakesMVPBoostExtraUtility; // offset 0x1768, size 0x4, align 4
    char _pad_176C[0x1]; // offset 0x176C
    bool m_bNeedToReApplyGloves; // offset 0x176D, size 0x1, align 1
    char _pad_176E[0x2]; // offset 0x176E
    C_EconItemView m_EconGloves; // offset 0x1770, size 0x5B0, align 255
    uint8 m_nEconGlovesChanged; // offset 0x1D20, size 0x1, align 1
    bool m_bMustSyncRagdollState; // offset 0x1D21, size 0x1, align 1
    char _pad_1D22[0x2]; // offset 0x1D22
    int32 m_nRagdollDamageBone; // offset 0x1D24, size 0x4, align 4
    Vector m_vRagdollDamageForce; // offset 0x1D28, size 0xC, align 4
    char[64] m_szRagdollDamageWeaponName; // offset 0x1D34, size 0x40, align 1
    bool m_bRagdollDamageHeadshot; // offset 0x1D74, size 0x1, align 1
    char _pad_1D75[0x3]; // offset 0x1D75
    VectorWS m_vRagdollServerOrigin; // offset 0x1D78, size 0xC, align 4
    GameTime_t m_lastLandTime; // offset 0x1D84, size 0x4, align 255
    bool m_bOnGroundLastTick; // offset 0x1D88, size 0x1, align 1
    char _pad_1D89[0x1B]; // offset 0x1D89
    CHandle< CCSMinimapVolume > m_hActiveMinimapVolume; // offset 0x1DA4, size 0x4, align 4
    CHandle< C_CS2HudModelArms > m_hHudModelArms; // offset 0x1DA8, size 0x4, align 4
    QAngle m_qDeathEyeAngles; // offset 0x1DAC, size 0xC, align 4
    bool m_bLeftHanded; // offset 0x1DB8, size 0x1, align 1
    char _pad_1DB9[0x3]; // offset 0x1DB9
    GameTime_t m_fSwitchedHandednessTime; // offset 0x1DBC, size 0x4, align 255
    float32 m_flViewmodelOffsetX; // offset 0x1DC0, size 0x4, align 4
    float32 m_flViewmodelOffsetY; // offset 0x1DC4, size 0x4, align 4
    float32 m_flViewmodelOffsetZ; // offset 0x1DC8, size 0x4, align 4
    float32 m_flViewmodelFOV; // offset 0x1DCC, size 0x4, align 4
    uint32[5] m_vecPlayerPatchEconIndices; // offset 0x1DD0, size 0x14, align 4
    char _pad_1DE4[0x34]; // offset 0x1DE4
    Color m_GunGameImmunityColor; // offset 0x1E18, size 0x4, align 4
    char _pad_1E1C[0x4C]; // offset 0x1E1C
    CUtlVector< C_BulletHitModel* > m_vecBulletHitModels; // offset 0x1E68, size 0x18, align 8
    bool m_bIsWalking; // offset 0x1E80, size 0x1, align 1
    char _pad_1E81[0x7]; // offset 0x1E81
    EntitySpottedState_t m_entitySpottedState; // offset 0x1E88, size 0x18, align 255
    bool m_bIsScoped; // offset 0x1EA0, size 0x1, align 1
    bool m_bResumeZoom; // offset 0x1EA1, size 0x1, align 1
    bool m_bIsDefusing; // offset 0x1EA2, size 0x1, align 1
    bool m_bIsGrabbingHostage; // offset 0x1EA3, size 0x1, align 1
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // offset 0x1EA4, size 0x4, align 4
    GameTime_t m_flEmitSoundTime; // offset 0x1EA8, size 0x4, align 255
    bool m_bInNoDefuseArea; // offset 0x1EAC, size 0x1, align 1
    char _pad_1EAD[0x3]; // offset 0x1EAD
    int32 m_nWhichBombZone; // offset 0x1EB0, size 0x4, align 4
    int32 m_iShotsFired; // offset 0x1EB4, size 0x4, align 4
    float32 m_flFlinchStack; // offset 0x1EB8, size 0x4, align 4
    float32 m_flVelocityModifier; // offset 0x1EBC, size 0x4, align 4
    bool m_bWaitForNoAttack; // offset 0x1EC0, size 0x1, align 1
    char _pad_1EC1[0x3]; // offset 0x1EC1
    float32 m_ignoreLadderJumpTime; // offset 0x1EC4, size 0x4, align 4
    char _pad_1EC8[0x1]; // offset 0x1EC8
    bool m_bKilledByHeadshot; // offset 0x1EC9, size 0x1, align 1
    char _pad_1ECA[0x2]; // offset 0x1ECA
    int32 m_ArmorValue; // offset 0x1ECC, size 0x4, align 4
    uint16 m_unCurrentEquipmentValue; // offset 0x1ED0, size 0x2, align 2
    uint16 m_unRoundStartEquipmentValue; // offset 0x1ED2, size 0x2, align 2
    uint16 m_unFreezetimeEndEquipmentValue; // offset 0x1ED4, size 0x2, align 2
    char _pad_1ED6[0x2]; // offset 0x1ED6
    CEntityIndex m_nLastKillerIndex; // offset 0x1ED8, size 0x4, align 4
    bool m_bOldIsScoped; // offset 0x1EDC, size 0x1, align 1
    bool m_bHasDeathInfo; // offset 0x1EDD, size 0x1, align 1
    char _pad_1EDE[0x2]; // offset 0x1EDE
    float32 m_flDeathInfoTime; // offset 0x1EE0, size 0x4, align 4
    VectorWS m_vecDeathInfoOrigin; // offset 0x1EE4, size 0xC, align 4
    char _pad_1EF0[0x30]; // offset 0x1EF0
    GameTime_t m_grenadeParameterStashTime; // offset 0x1F20, size 0x4, align 255
    bool m_bGrenadeParametersStashed; // offset 0x1F24, size 0x1, align 1
    char _pad_1F25[0x3]; // offset 0x1F25
    QAngle m_angStashedShootAngles; // offset 0x1F28, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPosition; // offset 0x1F34, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPawnCenter; // offset 0x1F40, size 0xC, align 4
    Vector m_vecStashedVelocity; // offset 0x1F4C, size 0xC, align 4
    float32 m_flInterpolatedInaccuracy; // offset 0x1F58, size 0x4, align 4
    char _pad_1F5C[0x15A4]; // offset 0x1F5C
    bool m_bShouldAutobuyDMWeapons; // offset 0x3500, size 0x1, align 1
    char _pad_3501[0x3]; // offset 0x3501
    GameTime_t m_fImmuneToGunGameDamageTime; // offset 0x3504, size 0x4, align 255
    bool m_bGunGameImmunity; // offset 0x3508, size 0x1, align 1
    char _pad_3509[0x3]; // offset 0x3509
    GameTime_t m_fImmuneToGunGameDamageTimeLast; // offset 0x350C, size 0x4, align 255
    float32 m_fMolotovDamageTime; // offset 0x3510, size 0x4, align 4
    char _pad_3514[0x68]; // offset 0x3514
    ParticleIndex_t m_nPlayerInfernoBodyFx; // offset 0x357C, size 0x4, align 255
    char _pad_3580[0x70]; // offset 0x3580
    QAngle m_angEyeAngles; // offset 0x35F0, size 0xC, align 4
    char _pad_35FC[0x84]; // offset 0x35FC
    GameTime_t[4] m_arrOldEyeAnglesTimes; // offset 0x3680, size 0x10, align 4
    QAngle[4] m_arrOldEyeAngles; // offset 0x3690, size 0x30, align 4
    QAngle m_angEyeAnglesVelocity; // offset 0x36C0, size 0xC, align 4
    CEntityIndex m_iIDEntIndex; // offset 0x36CC, size 0x4, align 4
    CountdownTimer m_delayTargetIDTimer; // offset 0x36D0, size 0x18, align 8
    CEntityIndex m_iTargetItemEntIdx; // offset 0x36E8, size 0x4, align 4
    CEntityIndex m_iOldIDEntIndex; // offset 0x36EC, size 0x4, align 4
    CountdownTimer m_holdTargetIDTimer; // offset 0x36F0, size 0x18, align 8
    char _pad_3708[0x8]; // offset 0x3708
};
