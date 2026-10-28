#pragma once

class CCSPlayerPawn : public CCSPlayerPawnBase /*0x0*/  // sizeof 0x15D0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xE30]; // offset 0x0
    CCSPlayer_BulletServices* m_pBulletServices; // offset 0xE30, size 0x8, align 8
    CCSPlayer_HostageServices* m_pHostageServices; // offset 0xE38, size 0x8, align 8
    CCSPlayer_BuyServices* m_pBuyServices; // offset 0xE40, size 0x8, align 8
    CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // offset 0xE48, size 0x8, align 8
    CCSPlayer_AimPunchServices* m_pAimPunchServices; // offset 0xE50, size 0x8, align 8
    CCSPlayer_RadioServices* m_pRadioServices; // offset 0xE58, size 0x8, align 8
    CCSPlayer_DamageReactServices* m_pDamageReactServices; // offset 0xE60, size 0x8, align 8
    uint16 m_nCharacterDefIndex; // offset 0xE68, size 0x2, align 2
    bool m_bHasFemaleVoice; // offset 0xE6A, size 0x1, align 1
    char _pad_0E6B[0x5]; // offset 0xE6B
    CUtlString m_strVOPrefix; // offset 0xE70, size 0x8, align 8
    char[18] m_szLastPlaceName; // offset 0xE78, size 0x12, align 1
    char _pad_0E8A[0xE6]; // offset 0xE8A
    bool m_bInHostageResetZone; // offset 0xF70, size 0x1, align 1
    bool m_bInBuyZone; // offset 0xF71, size 0x1, align 1
    char _pad_0F72[0x6]; // offset 0xF72
    CUtlVector< CHandle< CBaseEntity > > m_TouchingBuyZones; // offset 0xF78, size 0x18, align 8
    bool m_bWasInBuyZone; // offset 0xF90, size 0x1, align 1
    bool m_bInHostageRescueZone; // offset 0xF91, size 0x1, align 1
    bool m_bInBombZone; // offset 0xF92, size 0x1, align 1
    bool m_bWasInHostageRescueZone; // offset 0xF93, size 0x1, align 1
    int32 m_iRetakesOffering; // offset 0xF94, size 0x4, align 4
    int32 m_iRetakesOfferingCard; // offset 0xF98, size 0x4, align 4
    bool m_bRetakesHasDefuseKit; // offset 0xF9C, size 0x1, align 1
    bool m_bRetakesMVPLastRound; // offset 0xF9D, size 0x1, align 1
    char _pad_0F9E[0x2]; // offset 0xF9E
    int32 m_iRetakesMVPBoostItem; // offset 0xFA0, size 0x4, align 4
    loadout_slot_t m_RetakesMVPBoostExtraUtility; // offset 0xFA4, size 0x4, align 4
    GameTime_t m_flHealthShotBoostExpirationTime; // offset 0xFA8, size 0x4, align 255
    float32 m_flLandingTimeSeconds; // offset 0xFAC, size 0x4, align 4
    bool m_bIsBuyMenuOpen; // offset 0xFB0, size 0x1, align 1
    char _pad_0FB1[0x37]; // offset 0xFB1
    GameTime_t m_lastLandTime; // offset 0xFE8, size 0x4, align 255
    bool m_bOnGroundLastTick; // offset 0xFEC, size 0x1, align 1
    char _pad_0FED[0x3]; // offset 0xFED
    int32 m_iPlayerLocked; // offset 0xFF0, size 0x4, align 4
    char _pad_0FF4[0x4]; // offset 0xFF4
    GameTime_t m_flTimeOfLastInjury; // offset 0xFF8, size 0x4, align 255
    GameTime_t m_flNextSprayDecalTime; // offset 0xFFC, size 0x4, align 255
    bool m_bNextSprayDecalTimeExpedited; // offset 0x1000, size 0x1, align 1
    char _pad_1001[0x3]; // offset 0x1001
    int32 m_nRagdollDamageBone; // offset 0x1004, size 0x4, align 4
    Vector m_vRagdollDamageForce; // offset 0x1008, size 0xC, align 4
    char[64] m_szRagdollDamageWeaponName; // offset 0x1014, size 0x40, align 1
    bool m_bRagdollDamageHeadshot; // offset 0x1054, size 0x1, align 1
    char _pad_1055[0x3]; // offset 0x1055
    VectorWS m_vRagdollServerOrigin; // offset 0x1058, size 0xC, align 4
    char _pad_1064[0x4]; // offset 0x1064
    CEconItemView m_EconGloves; // offset 0x1068, size 0x3E8, align 255
    uint8 m_nEconGlovesChanged; // offset 0x1450, size 0x1, align 1
    char _pad_1451[0x3]; // offset 0x1451
    QAngle m_qDeathEyeAngles; // offset 0x1454, size 0xC, align 4
    bool m_bLeftHanded; // offset 0x1460, size 0x1, align 1
    char _pad_1461[0x3]; // offset 0x1461
    GameTime_t m_fSwitchedHandednessTime; // offset 0x1464, size 0x4, align 255
    float32 m_flViewmodelOffsetX; // offset 0x1468, size 0x4, align 4
    float32 m_flViewmodelOffsetY; // offset 0x146C, size 0x4, align 4
    float32 m_flViewmodelOffsetZ; // offset 0x1470, size 0x4, align 4
    float32 m_flViewmodelFOV; // offset 0x1474, size 0x4, align 4
    bool m_bIsWalking; // offset 0x1478, size 0x1, align 1
    char _pad_1479[0x3]; // offset 0x1479
    float32 m_fLastGivenDefuserTime; // offset 0x147C, size 0x4, align 4
    float32 m_fLastGivenBombTime; // offset 0x1480, size 0x4, align 4
    float32 m_flDealtDamageToEnemyMostRecentTimestamp; // offset 0x1484, size 0x4, align 4
    uint32 m_iDisplayHistoryBits; // offset 0x1488, size 0x4, align 4
    float32 m_flLastAttackedTeammate; // offset 0x148C, size 0x4, align 4
    GameTime_t m_allowAutoFollowTime; // offset 0x1490, size 0x4, align 255
    bool m_bResetArmorNextSpawn; // offset 0x1494, size 0x1, align 1
    char _pad_1495[0x3]; // offset 0x1495
    CEntityIndex m_nLastKillerIndex; // offset 0x1498, size 0x4, align 4
    char _pad_149C[0x4]; // offset 0x149C
    EntitySpottedState_t m_entitySpottedState; // offset 0x14A0, size 0x18, align 255
    int32 m_nSpotRules; // offset 0x14B8, size 0x4, align 4
    bool m_bIsScoped; // offset 0x14BC, size 0x1, align 1
    bool m_bResumeZoom; // offset 0x14BD, size 0x1, align 1
    bool m_bIsDefusing; // offset 0x14BE, size 0x1, align 1
    bool m_bIsGrabbingHostage; // offset 0x14BF, size 0x1, align 1
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // offset 0x14C0, size 0x4, align 4
    GameTime_t m_flEmitSoundTime; // offset 0x14C4, size 0x4, align 255
    bool m_bInNoDefuseArea; // offset 0x14C8, size 0x1, align 1
    char _pad_14C9[0x3]; // offset 0x14C9
    CEntityIndex m_iBombSiteIndex; // offset 0x14CC, size 0x4, align 4
    int32 m_nWhichBombZone; // offset 0x14D0, size 0x4, align 4
    bool m_bInBombZoneTrigger; // offset 0x14D4, size 0x1, align 1
    bool m_bWasInBombZoneTrigger; // offset 0x14D5, size 0x1, align 1
    char _pad_14D6[0x2]; // offset 0x14D6
    int32 m_iShotsFired; // offset 0x14D8, size 0x4, align 4
    float32 m_flFlinchStack; // offset 0x14DC, size 0x4, align 4
    float32 m_flVelocityModifier; // offset 0x14E0, size 0x4, align 4
    Vector m_vecTotalBulletForce; // offset 0x14E4, size 0xC, align 4
    bool m_bWaitForNoAttack; // offset 0x14F0, size 0x1, align 1
    char _pad_14F1[0x3]; // offset 0x14F1
    float32 m_ignoreLadderJumpTime; // offset 0x14F4, size 0x4, align 4
    bool m_bKilledByHeadshot; // offset 0x14F8, size 0x1, align 1
    char _pad_14F9[0x3]; // offset 0x14F9
    int32 m_LastHitBox; // offset 0x14FC, size 0x4, align 4
    CCSBot* m_pBot; // offset 0x1500, size 0x8, align 8
    bool m_bBotAllowActive; // offset 0x1508, size 0x1, align 1
    char _pad_1509[0x3]; // offset 0x1509
    int32 m_nLastPickupPriority; // offset 0x150C, size 0x4, align 4
    float32 m_flLastPickupPriorityTime; // offset 0x1510, size 0x4, align 4
    int32 m_ArmorValue; // offset 0x1514, size 0x4, align 4
    uint16 m_unCurrentEquipmentValue; // offset 0x1518, size 0x2, align 2
    uint16 m_unRoundStartEquipmentValue; // offset 0x151A, size 0x2, align 2
    uint16 m_unFreezetimeEndEquipmentValue; // offset 0x151C, size 0x2, align 2
    char _pad_151E[0x2]; // offset 0x151E
    int32 m_iLastWeaponFireUsercmd; // offset 0x1520, size 0x4, align 4
    bool m_bIsSpawning; // offset 0x1524, size 0x1, align 1
    char _pad_1525[0xB]; // offset 0x1525
    int32 m_iDeathFlags; // offset 0x1530, size 0x4, align 4
    bool m_bHasDeathInfo; // offset 0x1534, size 0x1, align 1
    char _pad_1535[0x3]; // offset 0x1535
    float32 m_flDeathInfoTime; // offset 0x1538, size 0x4, align 4
    VectorWS m_vecDeathInfoOrigin; // offset 0x153C, size 0xC, align 4
    uint32[5] m_vecPlayerPatchEconIndices; // offset 0x1548, size 0x14, align 4
    Color m_GunGameImmunityColor; // offset 0x155C, size 0x4, align 4
    GameTime_t m_grenadeParameterStashTime; // offset 0x1560, size 0x4, align 255
    bool m_bGrenadeParametersStashed; // offset 0x1564, size 0x1, align 1
    char _pad_1565[0x3]; // offset 0x1565
    QAngle m_angStashedShootAngles; // offset 0x1568, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPosition; // offset 0x1574, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPawnCenter; // offset 0x1580, size 0xC, align 4
    Vector m_vecStashedVelocity; // offset 0x158C, size 0xC, align 4
    char _pad_1598[0x8]; // offset 0x1598
    bool m_bCommittingSuicideOnTeamChange; // offset 0x15A0, size 0x1, align 1
    bool m_wasNotKilledNaturally; // offset 0x15A1, size 0x1, align 1
    char _pad_15A2[0x2]; // offset 0x15A2
    GameTime_t m_fImmuneToGunGameDamageTime; // offset 0x15A4, size 0x4, align 255
    bool m_bGunGameImmunity; // offset 0x15A8, size 0x1, align 1
    char _pad_15A9[0x3]; // offset 0x15A9
    float32 m_flBigHeadScale; // offset 0x15AC, size 0x4, align 4
    float32 m_fMolotovDamageTime; // offset 0x15B0, size 0x4, align 4
    QAngle m_angEyeAngles; // offset 0x15B4, size 0xC, align 4
    char _pad_15C0[0x10]; // offset 0x15C0
};
