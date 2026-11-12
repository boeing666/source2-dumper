#pragma once

class C_CSWeaponBase : public C_BasePlayerWeapon /*0x0*/  // sizeof 0x1F60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x19E8]; // offset 0x0
    WeaponGameplayAnimState m_iWeaponGameplayAnimState; // offset 0x19E8, size 0x2, align 2
    char _pad_19EA[0x2]; // offset 0x19EA
    GameTime_t m_flWeaponGameplayAnimStateTimestamp; // offset 0x19EC, size 0x4, align 255
    GameTime_t m_flInspectCancelCompleteTime; // offset 0x19F0, size 0x4, align 255
    bool m_bInspectPending; // offset 0x19F4, size 0x1, align 1
    bool m_bInspectShouldLoop; // offset 0x19F5, size 0x1, align 1
    char _pad_19F6[0x2A]; // offset 0x19F6
    int32 m_nLastEmptySoundCmdNum; // offset 0x1A20, size 0x4, align 4
    bool m_bFireOnEmpty; // offset 0x1A24, size 0x1, align 1
    char _pad_1A25[0x3]; // offset 0x1A25
    CEntityIOOutput m_OnPlayerPickup; // offset 0x1A28, size 0x18, align 255
    CSWeaponMode m_weaponMode; // offset 0x1A40, size 0x4, align 4
    float32 m_flTurningInaccuracyDelta; // offset 0x1A44, size 0x4, align 4
    Vector m_vecTurningInaccuracyEyeDirLast; // offset 0x1A48, size 0xC, align 4
    float32 m_flTurningInaccuracy; // offset 0x1A54, size 0x4, align 4
    float32 m_fAccuracyPenalty; // offset 0x1A58, size 0x4, align 4
    GameTime_t m_flLastAccuracyUpdateTime; // offset 0x1A5C, size 0x4, align 255
    float32 m_fAccuracySmoothedForZoom; // offset 0x1A60, size 0x4, align 4
    int32 m_iRecoilIndex; // offset 0x1A64, size 0x4, align 4
    float32 m_flRecoilIndex; // offset 0x1A68, size 0x4, align 4
    bool m_bBurstMode; // offset 0x1A6C, size 0x1, align 1
    char _pad_1A6D[0x3]; // offset 0x1A6D
    GameTime_t m_flLastBurstModeChangeTime; // offset 0x1A70, size 0x4, align 255
    GameTick_t m_nPostponeFireReadyTicks; // offset 0x1A74, size 0x4, align 255
    float32 m_flPostponeFireReadyFrac; // offset 0x1A78, size 0x4, align 4
    bool m_bInReload; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
    GameTick_t m_nDeployTick; // offset 0x1A80, size 0x4, align 255
    GameTime_t m_flAttackHoldStartTime; // offset 0x1A84, size 0x4, align 255
    GameTime_t m_flDroppedAtTime; // offset 0x1A88, size 0x4, align 255
    char _pad_1A8C[0x4]; // offset 0x1A8C
    bool m_bIsHauledBack; // offset 0x1A90, size 0x1, align 1
    bool m_bSilencerOn; // offset 0x1A91, size 0x1, align 1
    char _pad_1A92[0x2]; // offset 0x1A92
    GameTime_t m_flTimeSilencerSwitchComplete; // offset 0x1A94, size 0x4, align 255
    bool m_bIsInStealthReload; // offset 0x1A98, size 0x1, align 1
    bool m_bInSilentReloadSection; // offset 0x1A99, size 0x1, align 1
    char _pad_1A9A[0x2]; // offset 0x1A9A
    GameTime_t m_flStealthReloadHoldStartTime; // offset 0x1A9C, size 0x4, align 255
    bool m_bReloadHeldSinceStart; // offset 0x1AA0, size 0x1, align 1
    char _pad_1AA1[0x3]; // offset 0x1AA1
    float32 m_flWeaponActionPlaybackRate; // offset 0x1AA4, size 0x4, align 4
    int32 m_iOriginalTeamNumber; // offset 0x1AA8, size 0x4, align 4
    int32 m_iMostRecentTeamNumber; // offset 0x1AAC, size 0x4, align 4
    bool m_bDroppedNearBuyZone; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x3]; // offset 0x1AB1
    float32 m_flNextAttackRenderTimeOffset; // offset 0x1AB4, size 0x4, align 4
    char _pad_1AB8[0xA8]; // offset 0x1AB8
    bool m_bClearWeaponIdentifyingUGC; // offset 0x1B60, size 0x1, align 1
    bool m_bVisualsDataSet; // offset 0x1B61, size 0x1, align 1
    bool m_bUIWeapon; // offset 0x1B62, size 0x1, align 1
    char _pad_1B63[0x1]; // offset 0x1B63
    int32 m_nCustomEconReloadEventId; // offset 0x1B64, size 0x4, align 4
    char _pad_1B68[0x8]; // offset 0x1B68
    bool m_bCanBePickedUp; // offset 0x1B70, size 0x1, align 1
    char _pad_1B71[0x3]; // offset 0x1B71
    GameTime_t m_nextPrevOwnerUseTime; // offset 0x1B74, size 0x4, align 255
    CHandle< C_CSPlayerPawn > m_hPrevOwner; // offset 0x1B78, size 0x4, align 4
    GameTick_t m_nDropTick; // offset 0x1B7C, size 0x4, align 255
    bool m_bWasActiveWeaponWhenDropped; // offset 0x1B80, size 0x1, align 1
    char _pad_1B81[0x23]; // offset 0x1B81
    bool m_donated; // offset 0x1BA4, size 0x1, align 1
    char _pad_1BA5[0x3]; // offset 0x1BA5
    GameTime_t m_fLastShotTime; // offset 0x1BA8, size 0x4, align 255
    bool m_bWasOwnedByCT; // offset 0x1BAC, size 0x1, align 1
    bool m_bWasOwnedByTerrorist; // offset 0x1BAD, size 0x1, align 1
    char _pad_1BAE[0x2]; // offset 0x1BAE
    float32 m_flNextClientFireBulletTime; // offset 0x1BB0, size 0x4, align 4
    float32 m_flNextClientFireBulletTime_Repredict; // offset 0x1BB4, size 0x4, align 4
    char _pad_1BB8[0x58]; // offset 0x1BB8
    C_IronSightController m_IronSightController; // offset 0x1C10, size 0xB0, align 255
    int32 m_iIronSightMode; // offset 0x1CC0, size 0x4, align 4
    char _pad_1CC4[0x74]; // offset 0x1CC4
    GameTime_t m_flLastLOSTraceFailureTime; // offset 0x1D38, size 0x4, align 255
    char _pad_1D3C[0x5C]; // offset 0x1D3C
    float32 m_flWatTickOffset; // offset 0x1D98, size 0x4, align 4
    char _pad_1D9C[0x10]; // offset 0x1D9C
    GameTime_t m_flLastShakeTime; // offset 0x1DAC, size 0x4, align 255
    char _pad_1DB0[0x1B0]; // offset 0x1DB0
};
