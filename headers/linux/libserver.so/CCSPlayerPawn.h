#pragma once

class CCSPlayerPawn : public CCSPlayerPawnBase /*0x0*/  // sizeof 0x1650, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1008]; // offset 0x0
    CCSPlayer_BulletServices* m_pBulletServices; // offset 0x1008, size 0x8, align 8
    CCSPlayer_HostageServices* m_pHostageServices; // offset 0x1010, size 0x8, align 8
    CCSPlayer_BuyServices* m_pBuyServices; // offset 0x1018, size 0x8, align 8
    CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // offset 0x1020, size 0x8, align 8
    CCSPlayer_AimPunchServices* m_pAimPunchServices; // offset 0x1028, size 0x8, align 8
    CCSPlayer_RadioServices* m_pRadioServices; // offset 0x1030, size 0x8, align 8
    CCSPlayer_DamageReactServices* m_pDamageReactServices; // offset 0x1038, size 0x8, align 8
    uint16 m_nCharacterDefIndex; // offset 0x1040, size 0x2, align 2
    bool m_bHasFemaleVoice; // offset 0x1042, size 0x1, align 1
    char _pad_1043[0x5]; // offset 0x1043
    CUtlString m_strVOPrefix; // offset 0x1048, size 0x8, align 8
    char[18] m_szLastPlaceName; // offset 0x1050, size 0x12, align 1
    char _pad_1062[0xDE]; // offset 0x1062
    bool m_bInHostageResetZone; // offset 0x1140, size 0x1, align 1
    bool m_bInBuyZone; // offset 0x1141, size 0x1, align 1
    char _pad_1142[0x6]; // offset 0x1142
    CUtlVector< CHandle< CBaseEntity > > m_TouchingBuyZones; // offset 0x1148, size 0x18, align 8
    bool m_bWasInBuyZone; // offset 0x1160, size 0x1, align 1
    bool m_bInHostageRescueZone; // offset 0x1161, size 0x1, align 1
    bool m_bInBombZone; // offset 0x1162, size 0x1, align 1
    bool m_bWasInHostageRescueZone; // offset 0x1163, size 0x1, align 1
    int32 m_iRetakesOffering; // offset 0x1164, size 0x4, align 4
    int32 m_iRetakesOfferingCard; // offset 0x1168, size 0x4, align 4
    bool m_bRetakesHasDefuseKit; // offset 0x116C, size 0x1, align 1
    bool m_bRetakesMVPLastRound; // offset 0x116D, size 0x1, align 1
    char _pad_116E[0x2]; // offset 0x116E
    int32 m_iRetakesMVPBoostItem; // offset 0x1170, size 0x4, align 4
    loadout_slot_t m_RetakesMVPBoostExtraUtility; // offset 0x1174, size 0x4, align 4
    GameTime_t m_flHealthShotBoostExpirationTime; // offset 0x1178, size 0x4, align 255
    float32 m_flLandingTimeSeconds; // offset 0x117C, size 0x4, align 4
    bool m_bIsBuyMenuOpen; // offset 0x1180, size 0x1, align 1
    char _pad_1181[0x37]; // offset 0x1181
    GameTime_t m_lastLandTime; // offset 0x11B8, size 0x4, align 255
    bool m_bOnGroundLastTick; // offset 0x11BC, size 0x1, align 1
    char _pad_11BD[0x3]; // offset 0x11BD
    int32 m_iPlayerLocked; // offset 0x11C0, size 0x4, align 4
    char _pad_11C4[0x4]; // offset 0x11C4
    GameTime_t m_flTimeOfLastInjury; // offset 0x11C8, size 0x4, align 255
    GameTime_t m_flNextSprayDecalTime; // offset 0x11CC, size 0x4, align 255
    bool m_bNextSprayDecalTimeExpedited; // offset 0x11D0, size 0x1, align 1
    char _pad_11D1[0x3]; // offset 0x11D1
    int32 m_nRagdollDamageBone; // offset 0x11D4, size 0x4, align 4
    Vector m_vRagdollDamageForce; // offset 0x11D8, size 0xC, align 4
    char[64] m_szRagdollDamageWeaponName; // offset 0x11E4, size 0x40, align 1
    bool m_bRagdollDamageHeadshot; // offset 0x1224, size 0x1, align 1
    char _pad_1225[0x3]; // offset 0x1225
    VectorWS m_vRagdollServerOrigin; // offset 0x1228, size 0xC, align 4
    char _pad_1234[0x4]; // offset 0x1234
    CEconItemView m_EconGloves; // offset 0x1238, size 0x2A8, align 255
    uint8 m_nEconGlovesChanged; // offset 0x14E0, size 0x1, align 1
    char _pad_14E1[0x3]; // offset 0x14E1
    QAngle m_qDeathEyeAngles; // offset 0x14E4, size 0xC, align 4
    bool m_bLeftHanded; // offset 0x14F0, size 0x1, align 1
    char _pad_14F1[0x3]; // offset 0x14F1
    GameTime_t m_fSwitchedHandednessTime; // offset 0x14F4, size 0x4, align 255
    float32 m_flViewmodelOffsetX; // offset 0x14F8, size 0x4, align 4
    float32 m_flViewmodelOffsetY; // offset 0x14FC, size 0x4, align 4
    float32 m_flViewmodelOffsetZ; // offset 0x1500, size 0x4, align 4
    float32 m_flViewmodelFOV; // offset 0x1504, size 0x4, align 4
    bool m_bIsWalking; // offset 0x1508, size 0x1, align 1
    char _pad_1509[0x3]; // offset 0x1509
    float32 m_fLastGivenDefuserTime; // offset 0x150C, size 0x4, align 4
    float32 m_fLastGivenBombTime; // offset 0x1510, size 0x4, align 4
    float32 m_flDealtDamageToEnemyMostRecentTimestamp; // offset 0x1514, size 0x4, align 4
    uint32 m_iDisplayHistoryBits; // offset 0x1518, size 0x4, align 4
    float32 m_flLastAttackedTeammate; // offset 0x151C, size 0x4, align 4
    GameTime_t m_allowAutoFollowTime; // offset 0x1520, size 0x4, align 255
    bool m_bResetArmorNextSpawn; // offset 0x1524, size 0x1, align 1
    char _pad_1525[0x3]; // offset 0x1525
    CEntityIndex m_nLastKillerIndex; // offset 0x1528, size 0x4, align 4
    char _pad_152C[0x4]; // offset 0x152C
    EntitySpottedState_t m_entitySpottedState; // offset 0x1530, size 0x18, align 255
    int32 m_nSpotRules; // offset 0x1548, size 0x4, align 4
    bool m_bIsScoped; // offset 0x154C, size 0x1, align 1
    bool m_bResumeZoom; // offset 0x154D, size 0x1, align 1
    bool m_bIsDefusing; // offset 0x154E, size 0x1, align 1
    bool m_bIsGrabbingHostage; // offset 0x154F, size 0x1, align 1
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // offset 0x1550, size 0x4, align 4
    GameTime_t m_flEmitSoundTime; // offset 0x1554, size 0x4, align 255
    bool m_bInNoDefuseArea; // offset 0x1558, size 0x1, align 1
    char _pad_1559[0x3]; // offset 0x1559
    CEntityIndex m_iBombSiteIndex; // offset 0x155C, size 0x4, align 4
    int32 m_nWhichBombZone; // offset 0x1560, size 0x4, align 4
    bool m_bInBombZoneTrigger; // offset 0x1564, size 0x1, align 1
    bool m_bWasInBombZoneTrigger; // offset 0x1565, size 0x1, align 1
    char _pad_1566[0x2]; // offset 0x1566
    int32 m_iShotsFired; // offset 0x1568, size 0x4, align 4
    float32 m_flFlinchStack; // offset 0x156C, size 0x4, align 4
    float32 m_flVelocityModifier; // offset 0x1570, size 0x4, align 4
    Vector m_vecTotalBulletForce; // offset 0x1574, size 0xC, align 4
    bool m_bWaitForNoAttack; // offset 0x1580, size 0x1, align 1
    char _pad_1581[0x3]; // offset 0x1581
    float32 m_ignoreLadderJumpTime; // offset 0x1584, size 0x4, align 4
    bool m_bKilledByHeadshot; // offset 0x1588, size 0x1, align 1
    char _pad_1589[0x3]; // offset 0x1589
    int32 m_LastHitBox; // offset 0x158C, size 0x4, align 4
    CCSBot* m_pBot; // offset 0x1590, size 0x8, align 8
    bool m_bBotAllowActive; // offset 0x1598, size 0x1, align 1
    char _pad_1599[0x3]; // offset 0x1599
    int32 m_nLastPickupPriority; // offset 0x159C, size 0x4, align 4
    float32 m_flLastPickupPriorityTime; // offset 0x15A0, size 0x4, align 4
    int32 m_ArmorValue; // offset 0x15A4, size 0x4, align 4
    uint16 m_unCurrentEquipmentValue; // offset 0x15A8, size 0x2, align 2
    uint16 m_unRoundStartEquipmentValue; // offset 0x15AA, size 0x2, align 2
    uint16 m_unFreezetimeEndEquipmentValue; // offset 0x15AC, size 0x2, align 2
    char _pad_15AE[0x2]; // offset 0x15AE
    int32 m_iLastWeaponFireUsercmd; // offset 0x15B0, size 0x4, align 4
    bool m_bIsSpawning; // offset 0x15B4, size 0x1, align 1
    char _pad_15B5[0xB]; // offset 0x15B5
    int32 m_iDeathFlags; // offset 0x15C0, size 0x4, align 4
    bool m_bHasDeathInfo; // offset 0x15C4, size 0x1, align 1
    char _pad_15C5[0x3]; // offset 0x15C5
    float32 m_flDeathInfoTime; // offset 0x15C8, size 0x4, align 4
    VectorWS m_vecDeathInfoOrigin; // offset 0x15CC, size 0xC, align 4
    uint32[5] m_vecPlayerPatchEconIndices; // offset 0x15D8, size 0x14, align 4
    Color m_GunGameImmunityColor; // offset 0x15EC, size 0x4, align 1
    GameTime_t m_grenadeParameterStashTime; // offset 0x15F0, size 0x4, align 255
    bool m_bGrenadeParametersStashed; // offset 0x15F4, size 0x1, align 1
    char _pad_15F5[0x3]; // offset 0x15F5
    QAngle m_angStashedShootAngles; // offset 0x15F8, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPosition; // offset 0x1604, size 0xC, align 4
    Vector m_vecStashedVelocity; // offset 0x1610, size 0xC, align 4
    char _pad_161C[0xC]; // offset 0x161C
    bool m_bCommittingSuicideOnTeamChange; // offset 0x1628, size 0x1, align 1
    bool m_wasNotKilledNaturally; // offset 0x1629, size 0x1, align 1
    char _pad_162A[0x2]; // offset 0x162A
    GameTime_t m_fImmuneToGunGameDamageTime; // offset 0x162C, size 0x4, align 255
    bool m_bGunGameImmunity; // offset 0x1630, size 0x1, align 1
    char _pad_1631[0x3]; // offset 0x1631
    float32 m_fMolotovDamageTime; // offset 0x1634, size 0x4, align 4
    QAngle m_angEyeAngles; // offset 0x1638, size 0xC, align 4
    char _pad_1644[0xC]; // offset 0x1644
};
