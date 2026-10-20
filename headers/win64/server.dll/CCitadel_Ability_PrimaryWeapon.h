#pragma once

class CCitadel_Ability_PrimaryWeapon : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1710, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    GameTime_t m_flLastReloadStartTime; // offset 0x14A8, size 0x4, align 255
    GameTime_t m_flNextPrimaryAttack; // offset 0x14AC, size 0x4, align 255
    GameTime_t m_flDelayedShotCreateTime; // offset 0x14B0, size 0x4, align 255
    char _pad_14B4[0x144]; // offset 0x14B4
    int32 m_iClip; // offset 0x15F8, size 0x4, align 4
    int32 m_iBonusClip; // offset 0x15FC, size 0x4, align 4
    int32 m_nNumContinuousShots; // offset 0x1600, size 0x4, align 4
    GameTime_t m_flContinuousShotStartTime; // offset 0x1604, size 0x4, align 255
    float32 m_flSpreadPenalty; // offset 0x1608, size 0x4, align 4
    GameTime_t m_flZoomTime; // offset 0x160C, size 0x4, align 255
    GameTime_t m_flZoomOutTime; // offset 0x1610, size 0x4, align 255
    int8 m_iSpreadIndex; // offset 0x1614, size 0x1, align 1
    char _pad_1615[0x1]; // offset 0x1615
    int16 m_nShotRecoilIndex; // offset 0x1616, size 0x2, align 2
    GameTime_t m_flNextShotRecoilRecoveryTime; // offset 0x1618, size 0x4, align 255
    bool m_bIsZoomed; // offset 0x161C, size 0x1, align 1
    uint8 m_nBurstShotsRemaining; // offset 0x161D, size 0x1, align 1
    char _pad_161E[0x2]; // offset 0x161E
    uint32 m_nShotNumber; // offset 0x1620, size 0x4, align 4
    bool m_bInReload; // offset 0x1624, size 0x1, align 1
    bool m_bSingleShotReloadFirstBullet; // offset 0x1625, size 0x1, align 1
    char _pad_1626[0x2]; // offset 0x1626
    GameTime_t m_reloadQueuedStartTime; // offset 0x1628, size 0x4, align 255
    GameTime_t m_flReloadAvailableTime; // offset 0x162C, size 0x4, align 255
    bool m_bCanActiveReload; // offset 0x1630, size 0x1, align 1
    char _pad_1631[0x3]; // offset 0x1631
    GameTime_t m_flLastAttackTime; // offset 0x1634, size 0x4, align 255
    GameTime_t m_flNextAttackDelayStartTime; // offset 0x1638, size 0x4, align 255
    GameTime_t m_flNextAttackDelayEndTime; // offset 0x163C, size 0x4, align 255
    float32 m_flAttackDelayPauseTotalTime; // offset 0x1640, size 0x4, align 4
    GameTime_t m_flAttackDelayPauseEndTime; // offset 0x1644, size 0x4, align 255
    ENextAttackDelayReason_t m_eNextAttackDelayReason; // offset 0x1648, size 0x4, align 4
    bool m_bInputPressedWhileSelected; // offset 0x164C, size 0x1, align 1
    char _pad_164D[0x3]; // offset 0x164D
    GameTime_t m_tFireOnReleaseHoldBeginTime; // offset 0x1650, size 0x4, align 255
    float32 m_flShotChargeFrac; // offset 0x1654, size 0x4, align 4
    EFireMode_t m_eActiveFireMode; // offset 0x1658, size 0x4, align 4
    bool m_bPassiveFXActive; // offset 0x165C, size 0x1, align 1
    char _pad_165D[0x3]; // offset 0x165D
    float32 m_flAmmoFrac; // offset 0x1660, size 0x4, align 4
    bool m_bFiredRecently; // offset 0x1664, size 0x1, align 1
    char _pad_1665[0x3]; // offset 0x1665
    QAngle m_angRecoilAngles; // offset 0x1668, size 0xC, align 4
    QAngle m_angRecoilToAdd; // offset 0x1674, size 0xC, align 4
    QAngle m_angRecoilRecovery; // offset 0x1680, size 0xC, align 4
    GameTime_t m_flRecoilStartTime; // offset 0x168C, size 0x4, align 255
    float32 m_flRecoilRecoverySpeed; // offset 0x1690, size 0x4, align 4
    float32 m_flAddApproachSpeed; // offset 0x1694, size 0x4, align 4
    float32 m_currentSpread; // offset 0x1698, size 0x4, align 4
    float32 m_currentMaxSpread; // offset 0x169C, size 0x4, align 4
    float32 m_currentFireSpread; // offset 0x16A0, size 0x4, align 4
    float32 m_flCurrentSpinRate; // offset 0x16A4, size 0x4, align 4
    bool m_bWasSpinningUp; // offset 0x16A8, size 0x1, align 1
    char _pad_16A9[0x3]; // offset 0x16A9
    float32 m_fFireDuration; // offset 0x16AC, size 0x4, align 4
    bool m_bPrimaryAttackHeld; // offset 0x16B0, size 0x1, align 1
    bool m_bFireOnEmpty; // offset 0x16B1, size 0x1, align 1
    bool m_bHasReleasedForFireOnRelease; // offset 0x16B2, size 0x1, align 1
    bool m_bInputReleasedForFireOnRelease; // offset 0x16B3, size 0x1, align 1
    bool m_bChargedShotNeedsInputRelease; // offset 0x16B4, size 0x1, align 1
    char _pad_16B5[0x3]; // offset 0x16B5
    EFireMode_t m_eFireOnReleaseMode; // offset 0x16B8, size 0x4, align 4
    bool m_bZoomMispredicted; // offset 0x16BC, size 0x1, align 1
    char _pad_16BD[0x3]; // offset 0x16BD
    GameTime_t m_flNextDisarmSound; // offset 0x16C0, size 0x4, align 255
    char _pad_16C4[0x2C]; // offset 0x16C4
    int32 m_nPrimaryMuzzleIndex; // offset 0x16F0, size 0x4, align 4
    GameTime_t m_flPrimaryMuzzleResetTime; // offset 0x16F4, size 0x4, align 255
    int32 m_nSecondaryMuzzleIndex; // offset 0x16F8, size 0x4, align 4
    GameTime_t m_flSecondaryMuzzleResetTime; // offset 0x16FC, size 0x4, align 255
    int32 m_nRandomStreak; // offset 0x1700, size 0x4, align 4
    int32 m_nLastUsedMuzzleIndex; // offset 0x1704, size 0x4, align 4
    int32 m_nClipSizeBeforeSwap; // offset 0x1708, size 0x4, align 4
    char _pad_170C[0x4]; // offset 0x170C
};
