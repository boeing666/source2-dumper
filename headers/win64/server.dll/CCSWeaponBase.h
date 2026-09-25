#pragma once

class CCSWeaponBase : public CBasePlayerWeapon /*0x0*/  // sizeof 0x1270, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xEF8]; // offset 0x0
    bool m_bRemoveable; // offset 0xEF8, size 0x1, align 1
    bool m_bPlayerAmmoStockOnPickup; // offset 0xEF9, size 0x1, align 1
    bool m_bRequireUseToTouch; // offset 0xEFA, size 0x1, align 1
    char _pad_0EFB[0x1]; // offset 0xEFB
    WeaponGameplayAnimState m_iWeaponGameplayAnimState; // offset 0xEFC, size 0x2, align 2
    char _pad_0EFE[0x2]; // offset 0xEFE
    GameTime_t m_flWeaponGameplayAnimStateTimestamp; // offset 0xF00, size 0x4, align 255
    GameTime_t m_flInspectCancelCompleteTime; // offset 0xF04, size 0x4, align 255
    bool m_bInspectPending; // offset 0xF08, size 0x1, align 1
    bool m_bInspectShouldLoop; // offset 0xF09, size 0x1, align 1
    char _pad_0F0A[0x2A]; // offset 0xF0A
    int32 m_nLastEmptySoundCmdNum; // offset 0xF34, size 0x4, align 4
    char _pad_0F38[0x18]; // offset 0xF38
    bool m_bFireOnEmpty; // offset 0xF50, size 0x1, align 1
    char _pad_0F51[0x7]; // offset 0xF51
    CEntityIOOutput m_OnPlayerPickup; // offset 0xF58, size 0x18, align 255
    CSWeaponMode m_weaponMode; // offset 0xF70, size 0x4, align 4
    float32 m_flTurningInaccuracyDelta; // offset 0xF74, size 0x4, align 4
    Vector m_vecTurningInaccuracyEyeDirLast; // offset 0xF78, size 0xC, align 4
    float32 m_flTurningInaccuracy; // offset 0xF84, size 0x4, align 4
    float32 m_fAccuracyPenalty; // offset 0xF88, size 0x4, align 4
    GameTime_t m_flLastAccuracyUpdateTime; // offset 0xF8C, size 0x4, align 255
    float32 m_fAccuracySmoothedForZoom; // offset 0xF90, size 0x4, align 4
    int32 m_iRecoilIndex; // offset 0xF94, size 0x4, align 4
    float32 m_flRecoilIndex; // offset 0xF98, size 0x4, align 4
    bool m_bBurstMode; // offset 0xF9C, size 0x1, align 1
    char _pad_0F9D[0x3]; // offset 0xF9D
    GameTick_t m_nPostponeFireReadyTicks; // offset 0xFA0, size 0x4, align 255
    float32 m_flPostponeFireReadyFrac; // offset 0xFA4, size 0x4, align 4
    bool m_bInReload; // offset 0xFA8, size 0x1, align 1
    char _pad_0FA9[0x3]; // offset 0xFA9
    GameTick_t m_nDeployTick; // offset 0xFAC, size 0x4, align 255
    GameTime_t m_flDroppedAtTime; // offset 0xFB0, size 0x4, align 255
    char _pad_0FB4[0x4]; // offset 0xFB4
    bool m_bIsHauledBack; // offset 0xFB8, size 0x1, align 1
    bool m_bSilencerOn; // offset 0xFB9, size 0x1, align 1
    char _pad_0FBA[0x2]; // offset 0xFBA
    GameTime_t m_flTimeSilencerSwitchComplete; // offset 0xFBC, size 0x4, align 255
    bool m_bStealthy; // offset 0xFC0, size 0x1, align 1
    bool m_bInSilentReloadSection; // offset 0xFC1, size 0x1, align 1
    bool m_bSilentReloadStatCounted; // offset 0xFC2, size 0x1, align 1
    bool m_bSilentReloadStatPending; // offset 0xFC3, size 0x1, align 1
    GameTime_t m_flStealthHoldStartTime; // offset 0xFC4, size 0x4, align 255
    bool m_bReloadHeldSinceStart; // offset 0xFC8, size 0x1, align 1
    char _pad_0FC9[0x3]; // offset 0xFC9
    float32 m_flWeaponActionPlaybackRate; // offset 0xFCC, size 0x4, align 4
    int32 m_iOriginalTeamNumber; // offset 0xFD0, size 0x4, align 4
    int32 m_iMostRecentTeamNumber; // offset 0xFD4, size 0x4, align 4
    bool m_bDroppedNearBuyZone; // offset 0xFD8, size 0x1, align 1
    char _pad_0FD9[0x3]; // offset 0xFD9
    float32 m_flNextAttackRenderTimeOffset; // offset 0xFDC, size 0x4, align 4
    char _pad_0FE0[0x10]; // offset 0xFE0
    bool m_bCanBePickedUp; // offset 0xFF0, size 0x1, align 1
    bool m_bUseCanOverrideNextOwnerTouchTime; // offset 0xFF1, size 0x1, align 1
    char _pad_0FF2[0x2]; // offset 0xFF2
    GameTime_t m_nextOwnerTouchTime; // offset 0xFF4, size 0x4, align 255
    GameTime_t m_nextPrevOwnerTouchTime; // offset 0xFF8, size 0x4, align 255
    char _pad_0FFC[0x4]; // offset 0xFFC
    GameTime_t m_nextPrevOwnerUseTime; // offset 0x1000, size 0x4, align 255
    CHandle< CCSPlayerPawn > m_hPrevOwner; // offset 0x1004, size 0x4, align 4
    GameTick_t m_nDropTick; // offset 0x1008, size 0x4, align 255
    bool m_bWasActiveWeaponWhenDropped; // offset 0x100C, size 0x1, align 1
    char _pad_100D[0x1F]; // offset 0x100D
    bool m_donated; // offset 0x102C, size 0x1, align 1
    char _pad_102D[0x3]; // offset 0x102D
    GameTime_t m_fLastShotTime; // offset 0x1030, size 0x4, align 255
    bool m_bWasOwnedByCT; // offset 0x1034, size 0x1, align 1
    bool m_bWasOwnedByTerrorist; // offset 0x1035, size 0x1, align 1
    char _pad_1036[0x2]; // offset 0x1036
    int32 m_numRemoveUnownedWeaponThink; // offset 0x1038, size 0x4, align 4
    char _pad_103C[0x54]; // offset 0x103C
    CIronSightController m_IronSightController; // offset 0x1090, size 0x18, align 255
    int32 m_iIronSightMode; // offset 0x10A8, size 0x4, align 4
    GameTime_t m_flLastLOSTraceFailureTime; // offset 0x10AC, size 0x4, align 255
    float32 m_flWatTickOffset; // offset 0x10B0, size 0x4, align 4
    char _pad_10B4[0xC]; // offset 0x10B4
    GameTime_t m_flLastShakeTime; // offset 0x10C0, size 0x4, align 255
    char _pad_10C4[0x1AC]; // offset 0x10C4
};
