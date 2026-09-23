#pragma once

class CCSPlayerPawn : public CCSPlayerPawnBase /*0x0*/  // sizeof 0x18A0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x10F0]; // offset 0x0
    CCSPlayer_BulletServices* m_pBulletServices; // offset 0x10F0, size 0x8, align 8
    CCSPlayer_HostageServices* m_pHostageServices; // offset 0x10F8, size 0x8, align 8
    CCSPlayer_BuyServices* m_pBuyServices; // offset 0x1100, size 0x8, align 8
    CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // offset 0x1108, size 0x8, align 8
    CCSPlayer_AimPunchServices* m_pAimPunchServices; // offset 0x1110, size 0x8, align 8
    CCSPlayer_RadioServices* m_pRadioServices; // offset 0x1118, size 0x8, align 8
    CCSPlayer_DamageReactServices* m_pDamageReactServices; // offset 0x1120, size 0x8, align 8
    uint16 m_nCharacterDefIndex; // offset 0x1128, size 0x2, align 2
    bool m_bHasFemaleVoice; // offset 0x112A, size 0x1, align 1
    char _pad_112B[0x5]; // offset 0x112B
    CUtlString m_strVOPrefix; // offset 0x1130, size 0x8, align 8
    char[18] m_szLastPlaceName; // offset 0x1138, size 0x12, align 1
    char _pad_114A[0xDE]; // offset 0x114A
    bool m_bInHostageResetZone; // offset 0x1228, size 0x1, align 1
    bool m_bInBuyZone; // offset 0x1229, size 0x1, align 1
    char _pad_122A[0x6]; // offset 0x122A
    CUtlVector< CHandle< CBaseEntity > > m_TouchingBuyZones; // offset 0x1230, size 0x18, align 8
    bool m_bWasInBuyZone; // offset 0x1248, size 0x1, align 1
    bool m_bInHostageRescueZone; // offset 0x1249, size 0x1, align 1
    bool m_bInBombZone; // offset 0x124A, size 0x1, align 1
    bool m_bWasInHostageRescueZone; // offset 0x124B, size 0x1, align 1
    int32 m_iRetakesOffering; // offset 0x124C, size 0x4, align 4
    int32 m_iRetakesOfferingCard; // offset 0x1250, size 0x4, align 4
    bool m_bRetakesHasDefuseKit; // offset 0x1254, size 0x1, align 1
    bool m_bRetakesMVPLastRound; // offset 0x1255, size 0x1, align 1
    char _pad_1256[0x2]; // offset 0x1256
    int32 m_iRetakesMVPBoostItem; // offset 0x1258, size 0x4, align 4
    loadout_slot_t m_RetakesMVPBoostExtraUtility; // offset 0x125C, size 0x4, align 4
    GameTime_t m_flHealthShotBoostExpirationTime; // offset 0x1260, size 0x4, align 255
    float32 m_flLandingTimeSeconds; // offset 0x1264, size 0x4, align 4
    bool m_bIsBuyMenuOpen; // offset 0x1268, size 0x1, align 1
    char _pad_1269[0x37]; // offset 0x1269
    GameTime_t m_lastLandTime; // offset 0x12A0, size 0x4, align 255
    bool m_bOnGroundLastTick; // offset 0x12A4, size 0x1, align 1
    char _pad_12A5[0x3]; // offset 0x12A5
    int32 m_iPlayerLocked; // offset 0x12A8, size 0x4, align 4
    char _pad_12AC[0x4]; // offset 0x12AC
    GameTime_t m_flTimeOfLastInjury; // offset 0x12B0, size 0x4, align 255
    GameTime_t m_flNextSprayDecalTime; // offset 0x12B4, size 0x4, align 255
    bool m_bNextSprayDecalTimeExpedited; // offset 0x12B8, size 0x1, align 1
    char _pad_12B9[0x3]; // offset 0x12B9
    int32 m_nRagdollDamageBone; // offset 0x12BC, size 0x4, align 4
    Vector m_vRagdollDamageForce; // offset 0x12C0, size 0xC, align 4
    char[64] m_szRagdollDamageWeaponName; // offset 0x12CC, size 0x40, align 1
    bool m_bRagdollDamageHeadshot; // offset 0x130C, size 0x1, align 1
    char _pad_130D[0x3]; // offset 0x130D
    VectorWS m_vRagdollServerOrigin; // offset 0x1310, size 0xC, align 4
    char _pad_131C[0x4]; // offset 0x131C
    CEconItemView m_EconGloves; // offset 0x1320, size 0x3E8, align 255
    uint8 m_nEconGlovesChanged; // offset 0x1708, size 0x1, align 1
    char _pad_1709[0x7]; // offset 0x1709
    CUtlVector< CHandle< CCSMinimapVolume > > m_vecCurrentMinimapVolumes; // offset 0x1710, size 0x18, align 8
    CHandle< CCSMinimapVolume > m_hActiveMinimapVolume; // offset 0x1728, size 0x4, align 4
    QAngle m_qDeathEyeAngles; // offset 0x172C, size 0xC, align 4
    bool m_bLeftHanded; // offset 0x1738, size 0x1, align 1
    char _pad_1739[0x3]; // offset 0x1739
    GameTime_t m_fSwitchedHandednessTime; // offset 0x173C, size 0x4, align 255
    float32 m_flViewmodelOffsetX; // offset 0x1740, size 0x4, align 4
    float32 m_flViewmodelOffsetY; // offset 0x1744, size 0x4, align 4
    float32 m_flViewmodelOffsetZ; // offset 0x1748, size 0x4, align 4
    float32 m_flViewmodelFOV; // offset 0x174C, size 0x4, align 4
    bool m_bIsWalking; // offset 0x1750, size 0x1, align 1
    char _pad_1751[0x3]; // offset 0x1751
    float32 m_fLastGivenDefuserTime; // offset 0x1754, size 0x4, align 4
    float32 m_fLastGivenBombTime; // offset 0x1758, size 0x4, align 4
    float32 m_flDealtDamageToEnemyMostRecentTimestamp; // offset 0x175C, size 0x4, align 4
    uint32 m_iDisplayHistoryBits; // offset 0x1760, size 0x4, align 4
    float32 m_flLastAttackedTeammate; // offset 0x1764, size 0x4, align 4
    GameTime_t m_allowAutoFollowTime; // offset 0x1768, size 0x4, align 255
    bool m_bResetArmorNextSpawn; // offset 0x176C, size 0x1, align 1
    char _pad_176D[0x3]; // offset 0x176D
    CEntityIndex m_nLastKillerIndex; // offset 0x1770, size 0x4, align 4
    char _pad_1774[0x4]; // offset 0x1774
    EntitySpottedState_t m_entitySpottedState; // offset 0x1778, size 0x18, align 255
    int32 m_nSpotRules; // offset 0x1790, size 0x4, align 4
    bool m_bIsScoped; // offset 0x1794, size 0x1, align 1
    bool m_bResumeZoom; // offset 0x1795, size 0x1, align 1
    bool m_bIsDefusing; // offset 0x1796, size 0x1, align 1
    bool m_bIsGrabbingHostage; // offset 0x1797, size 0x1, align 1
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // offset 0x1798, size 0x4, align 4
    GameTime_t m_flEmitSoundTime; // offset 0x179C, size 0x4, align 255
    bool m_bInNoDefuseArea; // offset 0x17A0, size 0x1, align 1
    char _pad_17A1[0x3]; // offset 0x17A1
    CEntityIndex m_iBombSiteIndex; // offset 0x17A4, size 0x4, align 4
    int32 m_nWhichBombZone; // offset 0x17A8, size 0x4, align 4
    bool m_bInBombZoneTrigger; // offset 0x17AC, size 0x1, align 1
    bool m_bWasInBombZoneTrigger; // offset 0x17AD, size 0x1, align 1
    char _pad_17AE[0x2]; // offset 0x17AE
    int32 m_iShotsFired; // offset 0x17B0, size 0x4, align 4
    float32 m_flFlinchStack; // offset 0x17B4, size 0x4, align 4
    float32 m_flVelocityModifier; // offset 0x17B8, size 0x4, align 4
    Vector m_vecTotalBulletForce; // offset 0x17BC, size 0xC, align 4
    bool m_bWaitForNoAttack; // offset 0x17C8, size 0x1, align 1
    char _pad_17C9[0x3]; // offset 0x17C9
    float32 m_ignoreLadderJumpTime; // offset 0x17CC, size 0x4, align 4
    bool m_bKilledByHeadshot; // offset 0x17D0, size 0x1, align 1
    char _pad_17D1[0x3]; // offset 0x17D1
    int32 m_LastHitBox; // offset 0x17D4, size 0x4, align 4
    CCSBot* m_pBot; // offset 0x17D8, size 0x8, align 8
    bool m_bBotAllowActive; // offset 0x17E0, size 0x1, align 1
    char _pad_17E1[0x3]; // offset 0x17E1
    int32 m_nLastPickupPriority; // offset 0x17E4, size 0x4, align 4
    float32 m_flLastPickupPriorityTime; // offset 0x17E8, size 0x4, align 4
    int32 m_ArmorValue; // offset 0x17EC, size 0x4, align 4
    uint16 m_unCurrentEquipmentValue; // offset 0x17F0, size 0x2, align 2
    uint16 m_unRoundStartEquipmentValue; // offset 0x17F2, size 0x2, align 2
    uint16 m_unFreezetimeEndEquipmentValue; // offset 0x17F4, size 0x2, align 2
    char _pad_17F6[0x2]; // offset 0x17F6
    int32 m_iLastWeaponFireUsercmd; // offset 0x17F8, size 0x4, align 4
    bool m_bIsSpawning; // offset 0x17FC, size 0x1, align 1
    char _pad_17FD[0xB]; // offset 0x17FD
    int32 m_iDeathFlags; // offset 0x1808, size 0x4, align 4
    bool m_bHasDeathInfo; // offset 0x180C, size 0x1, align 1
    char _pad_180D[0x3]; // offset 0x180D
    float32 m_flDeathInfoTime; // offset 0x1810, size 0x4, align 4
    VectorWS m_vecDeathInfoOrigin; // offset 0x1814, size 0xC, align 4
    uint32[5] m_vecPlayerPatchEconIndices; // offset 0x1820, size 0x14, align 4
    Color m_GunGameImmunityColor; // offset 0x1834, size 0x4, align 4
    GameTime_t m_grenadeParameterStashTime; // offset 0x1838, size 0x4, align 255
    bool m_bGrenadeParametersStashed; // offset 0x183C, size 0x1, align 1
    char _pad_183D[0x3]; // offset 0x183D
    QAngle m_angStashedShootAngles; // offset 0x1840, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPosition; // offset 0x184C, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPawnCenter; // offset 0x1858, size 0xC, align 4
    Vector m_vecStashedVelocity; // offset 0x1864, size 0xC, align 4
    char _pad_1870[0x8]; // offset 0x1870
    bool m_bCommittingSuicideOnTeamChange; // offset 0x1878, size 0x1, align 1
    bool m_wasNotKilledNaturally; // offset 0x1879, size 0x1, align 1
    char _pad_187A[0x2]; // offset 0x187A
    GameTime_t m_fImmuneToGunGameDamageTime; // offset 0x187C, size 0x4, align 255
    bool m_bGunGameImmunity; // offset 0x1880, size 0x1, align 1
    char _pad_1881[0x3]; // offset 0x1881
    float32 m_fMolotovDamageTime; // offset 0x1884, size 0x4, align 4
    QAngle m_angEyeAngles; // offset 0x1888, size 0xC, align 4
    char _pad_1894[0xC]; // offset 0x1894
};
