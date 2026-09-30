#pragma once

class CCitadel_Ability_PrimaryWeapon : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1970, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    GameTime_t m_flLastReloadStartTime; // offset 0x16D8, size 0x4, align 255
    GameTime_t m_flNextPrimaryAttack; // offset 0x16DC, size 0x4, align 255
    GameTime_t m_flDelayedShotCreateTime; // offset 0x16E0, size 0x4, align 255
    char _pad_16E4[0x144]; // offset 0x16E4
    int32 m_iClip; // offset 0x1828, size 0x4, align 4
    int32 m_iBonusClip; // offset 0x182C, size 0x4, align 4
    int32 m_nNumContinuousShots; // offset 0x1830, size 0x4, align 4
    GameTime_t m_flContinuousShotStartTime; // offset 0x1834, size 0x4, align 255
    float32 m_flSpreadPenalty; // offset 0x1838, size 0x4, align 4
    GameTime_t m_flZoomTime; // offset 0x183C, size 0x4, align 255
    GameTime_t m_flZoomOutTime; // offset 0x1840, size 0x4, align 255
    int8 m_iSpreadIndex; // offset 0x1844, size 0x1, align 1
    char _pad_1845[0x1]; // offset 0x1845
    int16 m_nShotRecoilIndex; // offset 0x1846, size 0x2, align 2
    GameTime_t m_flNextShotRecoilRecoveryTime; // offset 0x1848, size 0x4, align 255
    bool m_bIsZoomed; // offset 0x184C, size 0x1, align 1
    uint8 m_nBurstShotsRemaining; // offset 0x184D, size 0x1, align 1
    char _pad_184E[0x2]; // offset 0x184E
    uint32 m_nShotNumber; // offset 0x1850, size 0x4, align 4
    bool m_bInReload; // offset 0x1854, size 0x1, align 1
    bool m_bSingleShotReloadFirstBullet; // offset 0x1855, size 0x1, align 1
    char _pad_1856[0x2]; // offset 0x1856
    GameTime_t m_reloadQueuedStartTime; // offset 0x1858, size 0x4, align 255
    GameTime_t m_flReloadAvailableTime; // offset 0x185C, size 0x4, align 255
    bool m_bCanActiveReload; // offset 0x1860, size 0x1, align 1
    char _pad_1861[0x3]; // offset 0x1861
    GameTime_t m_flLastAttackTime; // offset 0x1864, size 0x4, align 255
    GameTime_t m_flNextAttackDelayStartTime; // offset 0x1868, size 0x4, align 255
    GameTime_t m_flNextAttackDelayEndTime; // offset 0x186C, size 0x4, align 255
    float32 m_flAttackDelayPauseTotalTime; // offset 0x1870, size 0x4, align 4
    GameTime_t m_flAttackDelayPauseEndTime; // offset 0x1874, size 0x4, align 255
    ENextAttackDelayReason_t m_eNextAttackDelayReason; // offset 0x1878, size 0x4, align 4
    bool m_bInputPressedWhileSelected; // offset 0x187C, size 0x1, align 1
    char _pad_187D[0x3]; // offset 0x187D
    GameTime_t m_tFireOnReleaseHoldBeginTime; // offset 0x1880, size 0x4, align 255
    float32 m_flShotChargeFrac; // offset 0x1884, size 0x4, align 4
    EFireMode_t m_eActiveFireMode; // offset 0x1888, size 0x4, align 4
    bool m_bPassiveFXActive; // offset 0x188C, size 0x1, align 1
    char _pad_188D[0x3]; // offset 0x188D
    float32 m_flAmmoFrac; // offset 0x1890, size 0x4, align 4
    bool m_bFiredRecently; // offset 0x1894, size 0x1, align 1
    char _pad_1895[0x3]; // offset 0x1895
    QAngle m_angRecoilAngles; // offset 0x1898, size 0xC, align 4
    QAngle m_angRecoilToAdd; // offset 0x18A4, size 0xC, align 4
    QAngle m_angRecoilRecovery; // offset 0x18B0, size 0xC, align 4
    GameTime_t m_flRecoilStartTime; // offset 0x18BC, size 0x4, align 255
    float32 m_flRecoilRecoverySpeed; // offset 0x18C0, size 0x4, align 4
    float32 m_flAddApproachSpeed; // offset 0x18C4, size 0x4, align 4
    float32 m_currentSpread; // offset 0x18C8, size 0x4, align 4
    float32 m_currentMaxSpread; // offset 0x18CC, size 0x4, align 4
    float32 m_currentFireSpread; // offset 0x18D0, size 0x4, align 4
    float32 m_flCurrentSpinRate; // offset 0x18D4, size 0x4, align 4
    bool m_bWasSpinningUp; // offset 0x18D8, size 0x1, align 1
    char _pad_18D9[0x3]; // offset 0x18D9
    float32 m_fFireDuration; // offset 0x18DC, size 0x4, align 4
    bool m_bPrimaryAttackHeld; // offset 0x18E0, size 0x1, align 1
    bool m_bFireOnEmpty; // offset 0x18E1, size 0x1, align 1
    bool m_bHasReleasedForFireOnRelease; // offset 0x18E2, size 0x1, align 1
    bool m_bInputReleasedForFireOnRelease; // offset 0x18E3, size 0x1, align 1
    bool m_bChargedShotNeedsInputRelease; // offset 0x18E4, size 0x1, align 1
    char _pad_18E5[0x3]; // offset 0x18E5
    EFireMode_t m_eFireOnReleaseMode; // offset 0x18E8, size 0x4, align 4
    bool m_bZoomMispredicted; // offset 0x18EC, size 0x1, align 1
    char _pad_18ED[0x3]; // offset 0x18ED
    GameTime_t m_flNextDisarmSound; // offset 0x18F0, size 0x4, align 255
    char _pad_18F4[0x2C]; // offset 0x18F4
    int32 m_nPrimaryMuzzleIndex; // offset 0x1920, size 0x4, align 4
    GameTime_t m_flPrimaryMuzzleResetTime; // offset 0x1924, size 0x4, align 255
    int32 m_nSecondaryMuzzleIndex; // offset 0x1928, size 0x4, align 4
    GameTime_t m_flSecondaryMuzzleResetTime; // offset 0x192C, size 0x4, align 255
    int32 m_nRandomStreak; // offset 0x1930, size 0x4, align 4
    int32 m_nLastUsedMuzzleIndex; // offset 0x1934, size 0x4, align 4
    char _pad_1938[0x38]; // offset 0x1938
};
