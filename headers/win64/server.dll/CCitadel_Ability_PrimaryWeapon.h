#pragma once

class CCitadel_Ability_PrimaryWeapon : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1198, align 0xFF [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    GameTime_t m_flLastReloadStartTime; // offset 0xF70, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flNextPrimaryAttack; // offset 0xF74, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flDelayedShotCreateTime; // offset 0xF78, size 0x4, align 255
    char _pad_0F7C[0x11C]; // offset 0xF7C
    int32 m_iClip; // offset 0x1098, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup MNetworkSerializer MNetworkPriority
    int32 m_iBonusClip; // offset 0x109C, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup MNetworkSerializer MNetworkPriority
    int32 m_nNumContinuousShots; // offset 0x10A0, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup MNetworkPriority
    GameTime_t m_flContinuousShotStartTime; // offset 0x10A4, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    float32 m_flSpreadPenalty; // offset 0x10A8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flZoomTime; // offset 0x10AC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flZoomOutTime; // offset 0x10B0, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int8 m_iSpreadIndex; // offset 0x10B4, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_10B5[0x1]; // offset 0x10B5
    int16 m_nShotRecoilIndex; // offset 0x10B6, size 0x2, align 2 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flNextShotRecoilRecoveryTime; // offset 0x10B8, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bIsZoomed; // offset 0x10BC, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    uint8 m_nBurstShotsRemaining; // offset 0x10BD, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_10BE[0x2]; // offset 0x10BE
    uint32 m_nShotNumber; // offset 0x10C0, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bInReload; // offset 0x10C4, size 0x1, align 1 | MNetworkEnable
    bool m_bSingleShotReloadFirstBullet; // offset 0x10C5, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_10C6[0x2]; // offset 0x10C6
    GameTime_t m_reloadQueuedStartTime; // offset 0x10C8, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flReloadAvailableTime; // offset 0x10CC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bCanActiveReload; // offset 0x10D0, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_10D1[0x3]; // offset 0x10D1
    GameTime_t m_flLastAttackTime; // offset 0x10D4, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flNextAttackDelayStartTime; // offset 0x10D8, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flNextAttackDelayEndTime; // offset 0x10DC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    float32 m_flAttackDelayPauseTotalTime; // offset 0x10E0, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flAttackDelayPauseEndTime; // offset 0x10E4, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    ENextAttackDelayReason_t m_eNextAttackDelayReason; // offset 0x10E8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bInputPressedWhileSelected; // offset 0x10EC, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_10ED[0x3]; // offset 0x10ED
    EFireMode_t m_eActiveFireMode; // offset 0x10F0, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bPassiveFXActive; // offset 0x10F4, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_10F5[0x3]; // offset 0x10F5
    float32 m_flAmmoFrac; // offset 0x10F8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback
    bool m_bFiredRecently; // offset 0x10FC, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback
    char _pad_10FD[0x3]; // offset 0x10FD
    QAngle m_angRecoilAngles; // offset 0x1100, size 0xC, align 4
    QAngle m_angRecoilToAdd; // offset 0x110C, size 0xC, align 4
    QAngle m_angRecoilRecovery; // offset 0x1118, size 0xC, align 4
    GameTime_t m_flRecoilStartTime; // offset 0x1124, size 0x4, align 255
    float32 m_flRecoilRecoverySpeed; // offset 0x1128, size 0x4, align 4
    float32 m_flAddApproachSpeed; // offset 0x112C, size 0x4, align 4
    float32 m_currentSpread; // offset 0x1130, size 0x4, align 4
    float32 m_currentMaxSpread; // offset 0x1134, size 0x4, align 4
    float32 m_currentFireSpread; // offset 0x1138, size 0x4, align 4
    float32 m_flCurrentSpinRate; // offset 0x113C, size 0x4, align 4
    bool m_bWasSpinningUp; // offset 0x1140, size 0x1, align 1
    char _pad_1141[0x3]; // offset 0x1141
    float32 m_fFireDuration; // offset 0x1144, size 0x4, align 4
    bool m_bPrimaryAttackHeld; // offset 0x1148, size 0x1, align 1
    bool m_bFireOnEmpty; // offset 0x1149, size 0x1, align 1
    bool m_bHasReleasedForSemiAuto; // offset 0x114A, size 0x1, align 1
    char _pad_114B[0x1]; // offset 0x114B
    GameTime_t m_flNextDisarmSound; // offset 0x114C, size 0x4, align 255
    char _pad_1150[0x28]; // offset 0x1150
    int32 m_nPrimaryMuzzleIndex; // offset 0x1178, size 0x4, align 4
    GameTime_t m_flPrimaryMuzzleResetTime; // offset 0x117C, size 0x4, align 255
    int32 m_nSecondaryMuzzleIndex; // offset 0x1180, size 0x4, align 4
    GameTime_t m_flSecondaryMuzzleResetTime; // offset 0x1184, size 0x4, align 255
    int32 m_nRandomStreak; // offset 0x1188, size 0x4, align 4
    int32 m_nLastUsedMuzzleIndex; // offset 0x118C, size 0x4, align 4
    int32 m_nClipSizeBeforeSwap; // offset 0x1190, size 0x4, align 4
    char _pad_1194[0x4]; // offset 0x1194
};
