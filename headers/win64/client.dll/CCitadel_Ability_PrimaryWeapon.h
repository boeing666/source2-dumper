#pragma once

class CCitadel_Ability_PrimaryWeapon : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1430, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    GameTime_t m_flLastReloadStartTime; // offset 0x11D8, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flNextPrimaryAttack; // offset 0x11DC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flDelayedShotCreateTime; // offset 0x11E0, size 0x4, align 255
    char _pad_11E4[0x11C]; // offset 0x11E4
    int32 m_iClip; // offset 0x1300, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup MNetworkSerializer MNetworkPriority
    int32 m_iBonusClip; // offset 0x1304, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup MNetworkSerializer MNetworkPriority
    int32 m_nNumContinuousShots; // offset 0x1308, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup MNetworkPriority
    GameTime_t m_flContinuousShotStartTime; // offset 0x130C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    float32 m_flSpreadPenalty; // offset 0x1310, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flZoomTime; // offset 0x1314, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flZoomOutTime; // offset 0x1318, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int8 m_iSpreadIndex; // offset 0x131C, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_131D[0x1]; // offset 0x131D
    int16 m_nShotRecoilIndex; // offset 0x131E, size 0x2, align 2 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flNextShotRecoilRecoveryTime; // offset 0x1320, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bIsZoomed; // offset 0x1324, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    uint8 m_nBurstShotsRemaining; // offset 0x1325, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_1326[0x2]; // offset 0x1326
    uint32 m_nShotNumber; // offset 0x1328, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bInReload; // offset 0x132C, size 0x1, align 1 | MNetworkEnable
    bool m_bSingleShotReloadFirstBullet; // offset 0x132D, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_132E[0x2]; // offset 0x132E
    GameTime_t m_reloadQueuedStartTime; // offset 0x1330, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flReloadAvailableTime; // offset 0x1334, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bCanActiveReload; // offset 0x1338, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_1339[0x3]; // offset 0x1339
    GameTime_t m_flLastAttackTime; // offset 0x133C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flNextAttackDelayStartTime; // offset 0x1340, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flNextAttackDelayEndTime; // offset 0x1344, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    float32 m_flAttackDelayPauseTotalTime; // offset 0x1348, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flAttackDelayPauseEndTime; // offset 0x134C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    ENextAttackDelayReason_t m_eNextAttackDelayReason; // offset 0x1350, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bInputPressedWhileSelected; // offset 0x1354, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_1355[0x3]; // offset 0x1355
    EFireMode_t m_eActiveFireMode; // offset 0x1358, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bPassiveFXActive; // offset 0x135C, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_135D[0x3]; // offset 0x135D
    float32 m_flAmmoFrac; // offset 0x1360, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback
    bool m_bFiredRecently; // offset 0x1364, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback
    char _pad_1365[0x3]; // offset 0x1365
    QAngle m_angRecoilAngles; // offset 0x1368, size 0xC, align 4
    QAngle m_angRecoilToAdd; // offset 0x1374, size 0xC, align 4
    QAngle m_angRecoilRecovery; // offset 0x1380, size 0xC, align 4
    GameTime_t m_flRecoilStartTime; // offset 0x138C, size 0x4, align 255
    float32 m_flRecoilRecoverySpeed; // offset 0x1390, size 0x4, align 4
    float32 m_flAddApproachSpeed; // offset 0x1394, size 0x4, align 4
    float32 m_currentSpread; // offset 0x1398, size 0x4, align 4
    float32 m_currentMaxSpread; // offset 0x139C, size 0x4, align 4
    float32 m_currentFireSpread; // offset 0x13A0, size 0x4, align 4
    float32 m_flCurrentSpinRate; // offset 0x13A4, size 0x4, align 4
    bool m_bWasSpinningUp; // offset 0x13A8, size 0x1, align 1
    char _pad_13A9[0x3]; // offset 0x13A9
    float32 m_fFireDuration; // offset 0x13AC, size 0x4, align 4
    bool m_bPrimaryAttackHeld; // offset 0x13B0, size 0x1, align 1
    bool m_bFireOnEmpty; // offset 0x13B1, size 0x1, align 1
    bool m_bHasReleasedForSemiAuto; // offset 0x13B2, size 0x1, align 1
    char _pad_13B3[0x1]; // offset 0x13B3
    GameTime_t m_flNextDisarmSound; // offset 0x13B4, size 0x4, align 255
    char _pad_13B8[0x28]; // offset 0x13B8
    int32 m_nPrimaryMuzzleIndex; // offset 0x13E0, size 0x4, align 4
    GameTime_t m_flPrimaryMuzzleResetTime; // offset 0x13E4, size 0x4, align 255
    int32 m_nSecondaryMuzzleIndex; // offset 0x13E8, size 0x4, align 4
    GameTime_t m_flSecondaryMuzzleResetTime; // offset 0x13EC, size 0x4, align 255
    int32 m_nRandomStreak; // offset 0x13F0, size 0x4, align 4
    int32 m_nLastUsedMuzzleIndex; // offset 0x13F4, size 0x4, align 4
    char _pad_13F8[0x38]; // offset 0x13F8
};
