#pragma once

class C_CSWeaponBase : public C_BasePlayerWeapon /*0x0*/  // sizeof 0x2B70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x2608]; // offset 0x0
    WeaponGameplayAnimState m_iWeaponGameplayAnimState; // offset 0x2608, size 0x2, align 2
    char _pad_260A[0x2]; // offset 0x260A
    GameTime_t m_flWeaponGameplayAnimStateTimestamp; // offset 0x260C, size 0x4, align 255
    GameTime_t m_flInspectCancelCompleteTime; // offset 0x2610, size 0x4, align 255
    bool m_bInspectPending; // offset 0x2614, size 0x1, align 1
    bool m_bInspectShouldLoop; // offset 0x2615, size 0x1, align 1
    char _pad_2616[0x2A]; // offset 0x2616
    float32 m_flCrosshairDistance; // offset 0x2640, size 0x4, align 4
    int32 m_iAmmoLastCheck; // offset 0x2644, size 0x4, align 4
    int32 m_nLastEmptySoundCmdNum; // offset 0x2648, size 0x4, align 4
    bool m_bFireOnEmpty; // offset 0x264C, size 0x1, align 1
    char _pad_264D[0x3]; // offset 0x264D
    CEntityIOOutput m_OnPlayerPickup; // offset 0x2650, size 0x18, align 255
    CSWeaponMode m_weaponMode; // offset 0x2668, size 0x4, align 4
    float32 m_flTurningInaccuracyDelta; // offset 0x266C, size 0x4, align 4
    Vector m_vecTurningInaccuracyEyeDirLast; // offset 0x2670, size 0xC, align 4
    float32 m_flTurningInaccuracy; // offset 0x267C, size 0x4, align 4
    float32 m_fAccuracyPenalty; // offset 0x2680, size 0x4, align 4
    GameTime_t m_flLastAccuracyUpdateTime; // offset 0x2684, size 0x4, align 255
    float32 m_fAccuracySmoothedForZoom; // offset 0x2688, size 0x4, align 4
    int32 m_iRecoilIndex; // offset 0x268C, size 0x4, align 4
    float32 m_flRecoilIndex; // offset 0x2690, size 0x4, align 4
    bool m_bBurstMode; // offset 0x2694, size 0x1, align 1
    char _pad_2695[0x3]; // offset 0x2695
    GameTime_t m_flLastBurstModeChangeTime; // offset 0x2698, size 0x4, align 255
    GameTick_t m_nPostponeFireReadyTicks; // offset 0x269C, size 0x4, align 255
    float32 m_flPostponeFireReadyFrac; // offset 0x26A0, size 0x4, align 4
    bool m_bInReload; // offset 0x26A4, size 0x1, align 1
    char _pad_26A5[0x3]; // offset 0x26A5
    GameTick_t m_nDeployTick; // offset 0x26A8, size 0x4, align 255
    GameTime_t m_flDroppedAtTime; // offset 0x26AC, size 0x4, align 255
    char _pad_26B0[0x4]; // offset 0x26B0
    bool m_bIsHauledBack; // offset 0x26B4, size 0x1, align 1
    bool m_bSilencerOn; // offset 0x26B5, size 0x1, align 1
    char _pad_26B6[0x2]; // offset 0x26B6
    GameTime_t m_flTimeSilencerSwitchComplete; // offset 0x26B8, size 0x4, align 255
    float32 m_flWeaponActionPlaybackRate; // offset 0x26BC, size 0x4, align 4
    int32 m_iOriginalTeamNumber; // offset 0x26C0, size 0x4, align 4
    int32 m_iMostRecentTeamNumber; // offset 0x26C4, size 0x4, align 4
    bool m_bDroppedNearBuyZone; // offset 0x26C8, size 0x1, align 1
    char _pad_26C9[0x3]; // offset 0x26C9
    float32 m_flNextAttackRenderTimeOffset; // offset 0x26CC, size 0x4, align 4
    char _pad_26D0[0xA0]; // offset 0x26D0
    bool m_bClearWeaponIdentifyingUGC; // offset 0x2770, size 0x1, align 1
    bool m_bVisualsDataSet; // offset 0x2771, size 0x1, align 1
    bool m_bUIWeapon; // offset 0x2772, size 0x1, align 1
    char _pad_2773[0x1]; // offset 0x2773
    int32 m_nCustomEconReloadEventId; // offset 0x2774, size 0x4, align 4
    char _pad_2778[0x8]; // offset 0x2778
    bool m_bCanBePickedUp; // offset 0x2780, size 0x1, align 1
    char _pad_2781[0x3]; // offset 0x2781
    GameTime_t m_nextPrevOwnerUseTime; // offset 0x2784, size 0x4, align 255
    CHandle< C_CSPlayerPawn > m_hPrevOwner; // offset 0x2788, size 0x4, align 4
    GameTick_t m_nDropTick; // offset 0x278C, size 0x4, align 255
    bool m_bWasActiveWeaponWhenDropped; // offset 0x2790, size 0x1, align 1
    char _pad_2791[0x23]; // offset 0x2791
    bool m_donated; // offset 0x27B4, size 0x1, align 1
    char _pad_27B5[0x3]; // offset 0x27B5
    GameTime_t m_fLastShotTime; // offset 0x27B8, size 0x4, align 255
    bool m_bWasOwnedByCT; // offset 0x27BC, size 0x1, align 1
    bool m_bWasOwnedByTerrorist; // offset 0x27BD, size 0x1, align 1
    char _pad_27BE[0x2]; // offset 0x27BE
    float32 m_flNextClientFireBulletTime; // offset 0x27C0, size 0x4, align 4
    float32 m_flNextClientFireBulletTime_Repredict; // offset 0x27C4, size 0x4, align 4
    char _pad_27C8[0x58]; // offset 0x27C8
    C_IronSightController m_IronSightController; // offset 0x2820, size 0xB0, align 255
    int32 m_iIronSightMode; // offset 0x28D0, size 0x4, align 4
    char _pad_28D4[0x74]; // offset 0x28D4
    GameTime_t m_flLastLOSTraceFailureTime; // offset 0x2948, size 0x4, align 255
    char _pad_294C[0x5C]; // offset 0x294C
    float32 m_flWatTickOffset; // offset 0x29A8, size 0x4, align 4
    char _pad_29AC[0x10]; // offset 0x29AC
    GameTime_t m_flLastShakeTime; // offset 0x29BC, size 0x4, align 255
    char _pad_29C0[0x1B0]; // offset 0x29C0
};
