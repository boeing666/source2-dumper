#pragma once

class C_CSWeaponBase : public C_BasePlayerWeapon /*0x0*/  // sizeof 0x1F20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x19A8]; // offset 0x0
    WeaponGameplayAnimState m_iWeaponGameplayAnimState; // offset 0x19A8, size 0x2, align 2
    char _pad_19AA[0x2]; // offset 0x19AA
    GameTime_t m_flWeaponGameplayAnimStateTimestamp; // offset 0x19AC, size 0x4, align 255
    GameTime_t m_flInspectCancelCompleteTime; // offset 0x19B0, size 0x4, align 255
    bool m_bInspectPending; // offset 0x19B4, size 0x1, align 1
    bool m_bInspectShouldLoop; // offset 0x19B5, size 0x1, align 1
    char _pad_19B6[0x2A]; // offset 0x19B6
    int32 m_nLastEmptySoundCmdNum; // offset 0x19E0, size 0x4, align 4
    bool m_bFireOnEmpty; // offset 0x19E4, size 0x1, align 1
    char _pad_19E5[0x3]; // offset 0x19E5
    CEntityIOOutput m_OnPlayerPickup; // offset 0x19E8, size 0x18, align 255
    CSWeaponMode m_weaponMode; // offset 0x1A00, size 0x4, align 4
    float32 m_flTurningInaccuracyDelta; // offset 0x1A04, size 0x4, align 4
    Vector m_vecTurningInaccuracyEyeDirLast; // offset 0x1A08, size 0xC, align 4
    float32 m_flTurningInaccuracy; // offset 0x1A14, size 0x4, align 4
    float32 m_fAccuracyPenalty; // offset 0x1A18, size 0x4, align 4
    GameTime_t m_flLastAccuracyUpdateTime; // offset 0x1A1C, size 0x4, align 255
    float32 m_fAccuracySmoothedForZoom; // offset 0x1A20, size 0x4, align 4
    int32 m_iRecoilIndex; // offset 0x1A24, size 0x4, align 4
    float32 m_flRecoilIndex; // offset 0x1A28, size 0x4, align 4
    bool m_bBurstMode; // offset 0x1A2C, size 0x1, align 1
    char _pad_1A2D[0x3]; // offset 0x1A2D
    GameTime_t m_flLastBurstModeChangeTime; // offset 0x1A30, size 0x4, align 255
    GameTick_t m_nPostponeFireReadyTicks; // offset 0x1A34, size 0x4, align 255
    float32 m_flPostponeFireReadyFrac; // offset 0x1A38, size 0x4, align 4
    bool m_bInReload; // offset 0x1A3C, size 0x1, align 1
    char _pad_1A3D[0x3]; // offset 0x1A3D
    GameTick_t m_nDeployTick; // offset 0x1A40, size 0x4, align 255
    GameTime_t m_flDroppedAtTime; // offset 0x1A44, size 0x4, align 255
    char _pad_1A48[0x4]; // offset 0x1A48
    bool m_bIsHauledBack; // offset 0x1A4C, size 0x1, align 1
    bool m_bSilencerOn; // offset 0x1A4D, size 0x1, align 1
    char _pad_1A4E[0x2]; // offset 0x1A4E
    GameTime_t m_flTimeSilencerSwitchComplete; // offset 0x1A50, size 0x4, align 255
    bool m_bStealthy; // offset 0x1A54, size 0x1, align 1
    bool m_bInSilentReloadSection; // offset 0x1A55, size 0x1, align 1
    char _pad_1A56[0x2]; // offset 0x1A56
    GameTime_t m_flStealthHoldStartTime; // offset 0x1A58, size 0x4, align 255
    bool m_bReloadHeldSinceStart; // offset 0x1A5C, size 0x1, align 1
    char _pad_1A5D[0x3]; // offset 0x1A5D
    float32 m_flWeaponActionPlaybackRate; // offset 0x1A60, size 0x4, align 4
    int32 m_iOriginalTeamNumber; // offset 0x1A64, size 0x4, align 4
    int32 m_iMostRecentTeamNumber; // offset 0x1A68, size 0x4, align 4
    bool m_bDroppedNearBuyZone; // offset 0x1A6C, size 0x1, align 1
    char _pad_1A6D[0x3]; // offset 0x1A6D
    float32 m_flNextAttackRenderTimeOffset; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0xAC]; // offset 0x1A74
    bool m_bClearWeaponIdentifyingUGC; // offset 0x1B20, size 0x1, align 1
    bool m_bVisualsDataSet; // offset 0x1B21, size 0x1, align 1
    bool m_bUIWeapon; // offset 0x1B22, size 0x1, align 1
    char _pad_1B23[0x1]; // offset 0x1B23
    int32 m_nCustomEconReloadEventId; // offset 0x1B24, size 0x4, align 4
    char _pad_1B28[0x8]; // offset 0x1B28
    bool m_bCanBePickedUp; // offset 0x1B30, size 0x1, align 1
    char _pad_1B31[0x3]; // offset 0x1B31
    GameTime_t m_nextPrevOwnerUseTime; // offset 0x1B34, size 0x4, align 255
    CHandle< C_CSPlayerPawn > m_hPrevOwner; // offset 0x1B38, size 0x4, align 4
    GameTick_t m_nDropTick; // offset 0x1B3C, size 0x4, align 255
    bool m_bWasActiveWeaponWhenDropped; // offset 0x1B40, size 0x1, align 1
    char _pad_1B41[0x23]; // offset 0x1B41
    bool m_donated; // offset 0x1B64, size 0x1, align 1
    char _pad_1B65[0x3]; // offset 0x1B65
    GameTime_t m_fLastShotTime; // offset 0x1B68, size 0x4, align 255
    bool m_bWasOwnedByCT; // offset 0x1B6C, size 0x1, align 1
    bool m_bWasOwnedByTerrorist; // offset 0x1B6D, size 0x1, align 1
    char _pad_1B6E[0x2]; // offset 0x1B6E
    float32 m_flNextClientFireBulletTime; // offset 0x1B70, size 0x4, align 4
    float32 m_flNextClientFireBulletTime_Repredict; // offset 0x1B74, size 0x4, align 4
    char _pad_1B78[0x58]; // offset 0x1B78
    C_IronSightController m_IronSightController; // offset 0x1BD0, size 0xB0, align 255
    int32 m_iIronSightMode; // offset 0x1C80, size 0x4, align 4
    char _pad_1C84[0x74]; // offset 0x1C84
    GameTime_t m_flLastLOSTraceFailureTime; // offset 0x1CF8, size 0x4, align 255
    char _pad_1CFC[0x5C]; // offset 0x1CFC
    float32 m_flWatTickOffset; // offset 0x1D58, size 0x4, align 4
    char _pad_1D5C[0x10]; // offset 0x1D5C
    GameTime_t m_flLastShakeTime; // offset 0x1D6C, size 0x4, align 255
    char _pad_1D70[0x1B0]; // offset 0x1D70
};
