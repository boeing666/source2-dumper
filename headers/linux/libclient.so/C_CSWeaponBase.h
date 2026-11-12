#pragma once

class C_CSWeaponBase : public C_BasePlayerWeapon /*0x0*/  // sizeof 0x2DF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x2878]; // offset 0x0
    WeaponGameplayAnimState m_iWeaponGameplayAnimState; // offset 0x2878, size 0x2, align 2
    char _pad_287A[0x2]; // offset 0x287A
    GameTime_t m_flWeaponGameplayAnimStateTimestamp; // offset 0x287C, size 0x4, align 255
    GameTime_t m_flInspectCancelCompleteTime; // offset 0x2880, size 0x4, align 255
    bool m_bInspectPending; // offset 0x2884, size 0x1, align 1
    bool m_bInspectShouldLoop; // offset 0x2885, size 0x1, align 1
    char _pad_2886[0x2A]; // offset 0x2886
    int32 m_nLastEmptySoundCmdNum; // offset 0x28B0, size 0x4, align 4
    bool m_bFireOnEmpty; // offset 0x28B4, size 0x1, align 1
    char _pad_28B5[0x3]; // offset 0x28B5
    CEntityIOOutput m_OnPlayerPickup; // offset 0x28B8, size 0x18, align 255
    CSWeaponMode m_weaponMode; // offset 0x28D0, size 0x4, align 4
    float32 m_flTurningInaccuracyDelta; // offset 0x28D4, size 0x4, align 4
    Vector m_vecTurningInaccuracyEyeDirLast; // offset 0x28D8, size 0xC, align 4
    float32 m_flTurningInaccuracy; // offset 0x28E4, size 0x4, align 4
    float32 m_fAccuracyPenalty; // offset 0x28E8, size 0x4, align 4
    GameTime_t m_flLastAccuracyUpdateTime; // offset 0x28EC, size 0x4, align 255
    float32 m_fAccuracySmoothedForZoom; // offset 0x28F0, size 0x4, align 4
    int32 m_iRecoilIndex; // offset 0x28F4, size 0x4, align 4
    float32 m_flRecoilIndex; // offset 0x28F8, size 0x4, align 4
    bool m_bBurstMode; // offset 0x28FC, size 0x1, align 1
    char _pad_28FD[0x3]; // offset 0x28FD
    GameTime_t m_flLastBurstModeChangeTime; // offset 0x2900, size 0x4, align 255
    GameTick_t m_nPostponeFireReadyTicks; // offset 0x2904, size 0x4, align 255
    float32 m_flPostponeFireReadyFrac; // offset 0x2908, size 0x4, align 4
    bool m_bInReload; // offset 0x290C, size 0x1, align 1
    char _pad_290D[0x3]; // offset 0x290D
    GameTick_t m_nDeployTick; // offset 0x2910, size 0x4, align 255
    GameTime_t m_flAttackHoldStartTime; // offset 0x2914, size 0x4, align 255
    GameTime_t m_flDroppedAtTime; // offset 0x2918, size 0x4, align 255
    char _pad_291C[0x4]; // offset 0x291C
    bool m_bIsHauledBack; // offset 0x2920, size 0x1, align 1
    bool m_bSilencerOn; // offset 0x2921, size 0x1, align 1
    char _pad_2922[0x2]; // offset 0x2922
    GameTime_t m_flTimeSilencerSwitchComplete; // offset 0x2924, size 0x4, align 255
    bool m_bIsInStealthReload; // offset 0x2928, size 0x1, align 1
    bool m_bInSilentReloadSection; // offset 0x2929, size 0x1, align 1
    char _pad_292A[0x2]; // offset 0x292A
    GameTime_t m_flStealthReloadHoldStartTime; // offset 0x292C, size 0x4, align 255
    bool m_bReloadHeldSinceStart; // offset 0x2930, size 0x1, align 1
    char _pad_2931[0x3]; // offset 0x2931
    float32 m_flWeaponActionPlaybackRate; // offset 0x2934, size 0x4, align 4
    int32 m_iOriginalTeamNumber; // offset 0x2938, size 0x4, align 4
    int32 m_iMostRecentTeamNumber; // offset 0x293C, size 0x4, align 4
    bool m_bDroppedNearBuyZone; // offset 0x2940, size 0x1, align 1
    char _pad_2941[0x3]; // offset 0x2941
    float32 m_flNextAttackRenderTimeOffset; // offset 0x2944, size 0x4, align 4
    char _pad_2948[0xA8]; // offset 0x2948
    bool m_bClearWeaponIdentifyingUGC; // offset 0x29F0, size 0x1, align 1
    bool m_bVisualsDataSet; // offset 0x29F1, size 0x1, align 1
    bool m_bUIWeapon; // offset 0x29F2, size 0x1, align 1
    char _pad_29F3[0x1]; // offset 0x29F3
    int32 m_nCustomEconReloadEventId; // offset 0x29F4, size 0x4, align 4
    char _pad_29F8[0x8]; // offset 0x29F8
    bool m_bCanBePickedUp; // offset 0x2A00, size 0x1, align 1
    char _pad_2A01[0x3]; // offset 0x2A01
    GameTime_t m_nextPrevOwnerUseTime; // offset 0x2A04, size 0x4, align 255
    CHandle< C_CSPlayerPawn > m_hPrevOwner; // offset 0x2A08, size 0x4, align 4
    GameTick_t m_nDropTick; // offset 0x2A0C, size 0x4, align 255
    bool m_bWasActiveWeaponWhenDropped; // offset 0x2A10, size 0x1, align 1
    char _pad_2A11[0x23]; // offset 0x2A11
    bool m_donated; // offset 0x2A34, size 0x1, align 1
    char _pad_2A35[0x3]; // offset 0x2A35
    GameTime_t m_fLastShotTime; // offset 0x2A38, size 0x4, align 255
    bool m_bWasOwnedByCT; // offset 0x2A3C, size 0x1, align 1
    bool m_bWasOwnedByTerrorist; // offset 0x2A3D, size 0x1, align 1
    char _pad_2A3E[0x2]; // offset 0x2A3E
    float32 m_flNextClientFireBulletTime; // offset 0x2A40, size 0x4, align 4
    float32 m_flNextClientFireBulletTime_Repredict; // offset 0x2A44, size 0x4, align 4
    char _pad_2A48[0x58]; // offset 0x2A48
    C_IronSightController m_IronSightController; // offset 0x2AA0, size 0xB0, align 255
    int32 m_iIronSightMode; // offset 0x2B50, size 0x4, align 4
    char _pad_2B54[0x74]; // offset 0x2B54
    GameTime_t m_flLastLOSTraceFailureTime; // offset 0x2BC8, size 0x4, align 255
    char _pad_2BCC[0x5C]; // offset 0x2BCC
    float32 m_flWatTickOffset; // offset 0x2C28, size 0x4, align 4
    char _pad_2C2C[0x10]; // offset 0x2C2C
    GameTime_t m_flLastShakeTime; // offset 0x2C3C, size 0x4, align 255
    char _pad_2C40[0x1B0]; // offset 0x2C40
};
