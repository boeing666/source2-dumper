#pragma once

class C_CSWeaponBase : public C_BasePlayerWeapon /*0x0*/  // sizeof 0x2DA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x2838]; // offset 0x0
    WeaponGameplayAnimState m_iWeaponGameplayAnimState; // offset 0x2838, size 0x2, align 2
    char _pad_283A[0x2]; // offset 0x283A
    GameTime_t m_flWeaponGameplayAnimStateTimestamp; // offset 0x283C, size 0x4, align 255
    GameTime_t m_flInspectCancelCompleteTime; // offset 0x2840, size 0x4, align 255
    bool m_bInspectPending; // offset 0x2844, size 0x1, align 1
    bool m_bInspectShouldLoop; // offset 0x2845, size 0x1, align 1
    char _pad_2846[0x2A]; // offset 0x2846
    int32 m_nLastEmptySoundCmdNum; // offset 0x2870, size 0x4, align 4
    bool m_bFireOnEmpty; // offset 0x2874, size 0x1, align 1
    char _pad_2875[0x3]; // offset 0x2875
    CEntityIOOutput m_OnPlayerPickup; // offset 0x2878, size 0x18, align 255
    CSWeaponMode m_weaponMode; // offset 0x2890, size 0x4, align 4
    float32 m_flTurningInaccuracyDelta; // offset 0x2894, size 0x4, align 4
    Vector m_vecTurningInaccuracyEyeDirLast; // offset 0x2898, size 0xC, align 4
    float32 m_flTurningInaccuracy; // offset 0x28A4, size 0x4, align 4
    float32 m_fAccuracyPenalty; // offset 0x28A8, size 0x4, align 4
    GameTime_t m_flLastAccuracyUpdateTime; // offset 0x28AC, size 0x4, align 255
    float32 m_fAccuracySmoothedForZoom; // offset 0x28B0, size 0x4, align 4
    int32 m_iRecoilIndex; // offset 0x28B4, size 0x4, align 4
    float32 m_flRecoilIndex; // offset 0x28B8, size 0x4, align 4
    bool m_bBurstMode; // offset 0x28BC, size 0x1, align 1
    char _pad_28BD[0x3]; // offset 0x28BD
    GameTime_t m_flLastBurstModeChangeTime; // offset 0x28C0, size 0x4, align 255
    GameTick_t m_nPostponeFireReadyTicks; // offset 0x28C4, size 0x4, align 255
    float32 m_flPostponeFireReadyFrac; // offset 0x28C8, size 0x4, align 4
    bool m_bInReload; // offset 0x28CC, size 0x1, align 1
    char _pad_28CD[0x3]; // offset 0x28CD
    GameTick_t m_nDeployTick; // offset 0x28D0, size 0x4, align 255
    GameTime_t m_flDroppedAtTime; // offset 0x28D4, size 0x4, align 255
    char _pad_28D8[0x4]; // offset 0x28D8
    bool m_bIsHauledBack; // offset 0x28DC, size 0x1, align 1
    bool m_bSilencerOn; // offset 0x28DD, size 0x1, align 1
    char _pad_28DE[0x2]; // offset 0x28DE
    GameTime_t m_flTimeSilencerSwitchComplete; // offset 0x28E0, size 0x4, align 255
    bool m_bStealthy; // offset 0x28E4, size 0x1, align 1
    bool m_bInSilentReloadSection; // offset 0x28E5, size 0x1, align 1
    char _pad_28E6[0x2]; // offset 0x28E6
    GameTime_t m_flStealthHoldStartTime; // offset 0x28E8, size 0x4, align 255
    float32 m_flWeaponActionPlaybackRate; // offset 0x28EC, size 0x4, align 4
    int32 m_iOriginalTeamNumber; // offset 0x28F0, size 0x4, align 4
    int32 m_iMostRecentTeamNumber; // offset 0x28F4, size 0x4, align 4
    bool m_bDroppedNearBuyZone; // offset 0x28F8, size 0x1, align 1
    char _pad_28F9[0x3]; // offset 0x28F9
    float32 m_flNextAttackRenderTimeOffset; // offset 0x28FC, size 0x4, align 4
    char _pad_2900[0xA8]; // offset 0x2900
    bool m_bClearWeaponIdentifyingUGC; // offset 0x29A8, size 0x1, align 1
    bool m_bVisualsDataSet; // offset 0x29A9, size 0x1, align 1
    bool m_bUIWeapon; // offset 0x29AA, size 0x1, align 1
    char _pad_29AB[0x1]; // offset 0x29AB
    int32 m_nCustomEconReloadEventId; // offset 0x29AC, size 0x4, align 4
    char _pad_29B0[0x8]; // offset 0x29B0
    bool m_bCanBePickedUp; // offset 0x29B8, size 0x1, align 1
    char _pad_29B9[0x3]; // offset 0x29B9
    GameTime_t m_nextPrevOwnerUseTime; // offset 0x29BC, size 0x4, align 255
    CHandle< C_CSPlayerPawn > m_hPrevOwner; // offset 0x29C0, size 0x4, align 4
    GameTick_t m_nDropTick; // offset 0x29C4, size 0x4, align 255
    bool m_bWasActiveWeaponWhenDropped; // offset 0x29C8, size 0x1, align 1
    char _pad_29C9[0x23]; // offset 0x29C9
    bool m_donated; // offset 0x29EC, size 0x1, align 1
    char _pad_29ED[0x3]; // offset 0x29ED
    GameTime_t m_fLastShotTime; // offset 0x29F0, size 0x4, align 255
    bool m_bWasOwnedByCT; // offset 0x29F4, size 0x1, align 1
    bool m_bWasOwnedByTerrorist; // offset 0x29F5, size 0x1, align 1
    char _pad_29F6[0x2]; // offset 0x29F6
    float32 m_flNextClientFireBulletTime; // offset 0x29F8, size 0x4, align 4
    float32 m_flNextClientFireBulletTime_Repredict; // offset 0x29FC, size 0x4, align 4
    char _pad_2A00[0x50]; // offset 0x2A00
    C_IronSightController m_IronSightController; // offset 0x2A50, size 0xB0, align 255
    int32 m_iIronSightMode; // offset 0x2B00, size 0x4, align 4
    char _pad_2B04[0x74]; // offset 0x2B04
    GameTime_t m_flLastLOSTraceFailureTime; // offset 0x2B78, size 0x4, align 255
    char _pad_2B7C[0x5C]; // offset 0x2B7C
    float32 m_flWatTickOffset; // offset 0x2BD8, size 0x4, align 4
    char _pad_2BDC[0x10]; // offset 0x2BDC
    GameTime_t m_flLastShakeTime; // offset 0x2BEC, size 0x4, align 255
    char _pad_2BF0[0x1B0]; // offset 0x2BF0
};
