#pragma once

class CCSPlayerPawn : public CCSPlayerPawnBase /*0x0*/  // sizeof 0x1380, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD38]; // offset 0x0
    CCSPlayer_BulletServices* m_pBulletServices; // offset 0xD38, size 0x8, align 8
    CCSPlayer_HostageServices* m_pHostageServices; // offset 0xD40, size 0x8, align 8
    CCSPlayer_BuyServices* m_pBuyServices; // offset 0xD48, size 0x8, align 8
    CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // offset 0xD50, size 0x8, align 8
    CCSPlayer_AimPunchServices* m_pAimPunchServices; // offset 0xD58, size 0x8, align 8
    CCSPlayer_RadioServices* m_pRadioServices; // offset 0xD60, size 0x8, align 8
    CCSPlayer_DamageReactServices* m_pDamageReactServices; // offset 0xD68, size 0x8, align 8
    uint16 m_nCharacterDefIndex; // offset 0xD70, size 0x2, align 2
    bool m_bHasFemaleVoice; // offset 0xD72, size 0x1, align 1
    char _pad_0D73[0x5]; // offset 0xD73
    CUtlString m_strVOPrefix; // offset 0xD78, size 0x8, align 8
    char[18] m_szLastPlaceName; // offset 0xD80, size 0x12, align 1
    char _pad_0D92[0xDE]; // offset 0xD92
    bool m_bInHostageResetZone; // offset 0xE70, size 0x1, align 1
    bool m_bInBuyZone; // offset 0xE71, size 0x1, align 1
    char _pad_0E72[0x6]; // offset 0xE72
    CUtlVector< CHandle< CBaseEntity > > m_TouchingBuyZones; // offset 0xE78, size 0x18, align 8
    bool m_bWasInBuyZone; // offset 0xE90, size 0x1, align 1
    bool m_bInHostageRescueZone; // offset 0xE91, size 0x1, align 1
    bool m_bInBombZone; // offset 0xE92, size 0x1, align 1
    bool m_bWasInHostageRescueZone; // offset 0xE93, size 0x1, align 1
    int32 m_iRetakesOffering; // offset 0xE94, size 0x4, align 4
    int32 m_iRetakesOfferingCard; // offset 0xE98, size 0x4, align 4
    bool m_bRetakesHasDefuseKit; // offset 0xE9C, size 0x1, align 1
    bool m_bRetakesMVPLastRound; // offset 0xE9D, size 0x1, align 1
    char _pad_0E9E[0x2]; // offset 0xE9E
    int32 m_iRetakesMVPBoostItem; // offset 0xEA0, size 0x4, align 4
    loadout_slot_t m_RetakesMVPBoostExtraUtility; // offset 0xEA4, size 0x4, align 4
    GameTime_t m_flHealthShotBoostExpirationTime; // offset 0xEA8, size 0x4, align 255
    float32 m_flLandingTimeSeconds; // offset 0xEAC, size 0x4, align 4
    bool m_bIsBuyMenuOpen; // offset 0xEB0, size 0x1, align 1
    char _pad_0EB1[0x37]; // offset 0xEB1
    GameTime_t m_lastLandTime; // offset 0xEE8, size 0x4, align 255
    bool m_bOnGroundLastTick; // offset 0xEEC, size 0x1, align 1
    char _pad_0EED[0x3]; // offset 0xEED
    int32 m_iPlayerLocked; // offset 0xEF0, size 0x4, align 4
    char _pad_0EF4[0x4]; // offset 0xEF4
    GameTime_t m_flTimeOfLastInjury; // offset 0xEF8, size 0x4, align 255
    GameTime_t m_flNextSprayDecalTime; // offset 0xEFC, size 0x4, align 255
    bool m_bNextSprayDecalTimeExpedited; // offset 0xF00, size 0x1, align 1
    char _pad_0F01[0x3]; // offset 0xF01
    int32 m_nRagdollDamageBone; // offset 0xF04, size 0x4, align 4
    Vector m_vRagdollDamageForce; // offset 0xF08, size 0xC, align 4
    char[64] m_szRagdollDamageWeaponName; // offset 0xF14, size 0x40, align 1
    bool m_bRagdollDamageHeadshot; // offset 0xF54, size 0x1, align 1
    char _pad_0F55[0x3]; // offset 0xF55
    VectorWS m_vRagdollServerOrigin; // offset 0xF58, size 0xC, align 4
    char _pad_0F64[0x4]; // offset 0xF64
    CEconItemView m_EconGloves; // offset 0xF68, size 0x2A8, align 255
    uint8 m_nEconGlovesChanged; // offset 0x1210, size 0x1, align 1
    char _pad_1211[0x3]; // offset 0x1211
    QAngle m_qDeathEyeAngles; // offset 0x1214, size 0xC, align 4
    bool m_bLeftHanded; // offset 0x1220, size 0x1, align 1
    char _pad_1221[0x3]; // offset 0x1221
    GameTime_t m_fSwitchedHandednessTime; // offset 0x1224, size 0x4, align 255
    float32 m_flViewmodelOffsetX; // offset 0x1228, size 0x4, align 4
    float32 m_flViewmodelOffsetY; // offset 0x122C, size 0x4, align 4
    float32 m_flViewmodelOffsetZ; // offset 0x1230, size 0x4, align 4
    float32 m_flViewmodelFOV; // offset 0x1234, size 0x4, align 4
    bool m_bIsWalking; // offset 0x1238, size 0x1, align 1
    char _pad_1239[0x3]; // offset 0x1239
    float32 m_fLastGivenDefuserTime; // offset 0x123C, size 0x4, align 4
    float32 m_fLastGivenBombTime; // offset 0x1240, size 0x4, align 4
    float32 m_flDealtDamageToEnemyMostRecentTimestamp; // offset 0x1244, size 0x4, align 4
    uint32 m_iDisplayHistoryBits; // offset 0x1248, size 0x4, align 4
    float32 m_flLastAttackedTeammate; // offset 0x124C, size 0x4, align 4
    GameTime_t m_allowAutoFollowTime; // offset 0x1250, size 0x4, align 255
    bool m_bResetArmorNextSpawn; // offset 0x1254, size 0x1, align 1
    char _pad_1255[0x3]; // offset 0x1255
    CEntityIndex m_nLastKillerIndex; // offset 0x1258, size 0x4, align 4
    char _pad_125C[0x4]; // offset 0x125C
    EntitySpottedState_t m_entitySpottedState; // offset 0x1260, size 0x18, align 255
    int32 m_nSpotRules; // offset 0x1278, size 0x4, align 4
    bool m_bIsScoped; // offset 0x127C, size 0x1, align 1
    bool m_bResumeZoom; // offset 0x127D, size 0x1, align 1
    bool m_bIsDefusing; // offset 0x127E, size 0x1, align 1
    bool m_bIsGrabbingHostage; // offset 0x127F, size 0x1, align 1
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // offset 0x1280, size 0x4, align 4
    GameTime_t m_flEmitSoundTime; // offset 0x1284, size 0x4, align 255
    bool m_bInNoDefuseArea; // offset 0x1288, size 0x1, align 1
    char _pad_1289[0x3]; // offset 0x1289
    CEntityIndex m_iBombSiteIndex; // offset 0x128C, size 0x4, align 4
    int32 m_nWhichBombZone; // offset 0x1290, size 0x4, align 4
    bool m_bInBombZoneTrigger; // offset 0x1294, size 0x1, align 1
    bool m_bWasInBombZoneTrigger; // offset 0x1295, size 0x1, align 1
    char _pad_1296[0x2]; // offset 0x1296
    int32 m_iShotsFired; // offset 0x1298, size 0x4, align 4
    float32 m_flFlinchStack; // offset 0x129C, size 0x4, align 4
    float32 m_flVelocityModifier; // offset 0x12A0, size 0x4, align 4
    Vector m_vecTotalBulletForce; // offset 0x12A4, size 0xC, align 4
    bool m_bWaitForNoAttack; // offset 0x12B0, size 0x1, align 1
    char _pad_12B1[0x3]; // offset 0x12B1
    float32 m_ignoreLadderJumpTime; // offset 0x12B4, size 0x4, align 4
    bool m_bKilledByHeadshot; // offset 0x12B8, size 0x1, align 1
    char _pad_12B9[0x3]; // offset 0x12B9
    int32 m_LastHitBox; // offset 0x12BC, size 0x4, align 4
    CCSBot* m_pBot; // offset 0x12C0, size 0x8, align 8
    bool m_bBotAllowActive; // offset 0x12C8, size 0x1, align 1
    char _pad_12C9[0x3]; // offset 0x12C9
    int32 m_nLastPickupPriority; // offset 0x12CC, size 0x4, align 4
    float32 m_flLastPickupPriorityTime; // offset 0x12D0, size 0x4, align 4
    int32 m_ArmorValue; // offset 0x12D4, size 0x4, align 4
    uint16 m_unCurrentEquipmentValue; // offset 0x12D8, size 0x2, align 2
    uint16 m_unRoundStartEquipmentValue; // offset 0x12DA, size 0x2, align 2
    uint16 m_unFreezetimeEndEquipmentValue; // offset 0x12DC, size 0x2, align 2
    char _pad_12DE[0x2]; // offset 0x12DE
    int32 m_iLastWeaponFireUsercmd; // offset 0x12E0, size 0x4, align 4
    bool m_bIsSpawning; // offset 0x12E4, size 0x1, align 1
    char _pad_12E5[0xB]; // offset 0x12E5
    int32 m_iDeathFlags; // offset 0x12F0, size 0x4, align 4
    bool m_bHasDeathInfo; // offset 0x12F4, size 0x1, align 1
    char _pad_12F5[0x3]; // offset 0x12F5
    float32 m_flDeathInfoTime; // offset 0x12F8, size 0x4, align 4
    VectorWS m_vecDeathInfoOrigin; // offset 0x12FC, size 0xC, align 4
    uint32[5] m_vecPlayerPatchEconIndices; // offset 0x1308, size 0x14, align 4
    Color m_GunGameImmunityColor; // offset 0x131C, size 0x4, align 1
    GameTime_t m_grenadeParameterStashTime; // offset 0x1320, size 0x4, align 255
    bool m_bGrenadeParametersStashed; // offset 0x1324, size 0x1, align 1
    char _pad_1325[0x3]; // offset 0x1325
    QAngle m_angStashedShootAngles; // offset 0x1328, size 0xC, align 4
    VectorWS m_vecStashedGrenadeThrowPosition; // offset 0x1334, size 0xC, align 4
    Vector m_vecStashedVelocity; // offset 0x1340, size 0xC, align 4
    char _pad_134C[0xC]; // offset 0x134C
    bool m_bCommittingSuicideOnTeamChange; // offset 0x1358, size 0x1, align 1
    bool m_wasNotKilledNaturally; // offset 0x1359, size 0x1, align 1
    char _pad_135A[0x2]; // offset 0x135A
    GameTime_t m_fImmuneToGunGameDamageTime; // offset 0x135C, size 0x4, align 255
    bool m_bGunGameImmunity; // offset 0x1360, size 0x1, align 1
    char _pad_1361[0x3]; // offset 0x1361
    float32 m_fMolotovDamageTime; // offset 0x1364, size 0x4, align 4
    QAngle m_angEyeAngles; // offset 0x1368, size 0xC, align 4
    char _pad_1374[0xC]; // offset 0x1374
};
