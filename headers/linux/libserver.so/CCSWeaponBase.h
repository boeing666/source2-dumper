#pragma once

class CCSWeaponBase : public CBasePlayerWeapon /*0x0*/  // sizeof 0x1550, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x11D0]; // offset 0x0
    bool m_bRemoveable; // offset 0x11D0, size 0x1, align 1
    bool m_bPlayerAmmoStockOnPickup; // offset 0x11D1, size 0x1, align 1
    bool m_bRequireUseToTouch; // offset 0x11D2, size 0x1, align 1
    char _pad_11D3[0x1]; // offset 0x11D3
    WeaponGameplayAnimState m_iWeaponGameplayAnimState; // offset 0x11D4, size 0x2, align 2
    char _pad_11D6[0x2]; // offset 0x11D6
    GameTime_t m_flWeaponGameplayAnimStateTimestamp; // offset 0x11D8, size 0x4, align 255
    GameTime_t m_flInspectCancelCompleteTime; // offset 0x11DC, size 0x4, align 255
    bool m_bInspectPending; // offset 0x11E0, size 0x1, align 1
    bool m_bInspectShouldLoop; // offset 0x11E1, size 0x1, align 1
    char _pad_11E2[0x2A]; // offset 0x11E2
    int32 m_nLastEmptySoundCmdNum; // offset 0x120C, size 0x4, align 4
    char _pad_1210[0x18]; // offset 0x1210
    bool m_bFireOnEmpty; // offset 0x1228, size 0x1, align 1
    char _pad_1229[0x7]; // offset 0x1229
    CEntityIOOutput m_OnPlayerPickup; // offset 0x1230, size 0x18, align 255
    CSWeaponMode m_weaponMode; // offset 0x1248, size 0x4, align 4
    float32 m_flTurningInaccuracyDelta; // offset 0x124C, size 0x4, align 4
    Vector m_vecTurningInaccuracyEyeDirLast; // offset 0x1250, size 0xC, align 4
    float32 m_flTurningInaccuracy; // offset 0x125C, size 0x4, align 4
    float32 m_fAccuracyPenalty; // offset 0x1260, size 0x4, align 4
    GameTime_t m_flLastAccuracyUpdateTime; // offset 0x1264, size 0x4, align 255
    float32 m_fAccuracySmoothedForZoom; // offset 0x1268, size 0x4, align 4
    int32 m_iRecoilIndex; // offset 0x126C, size 0x4, align 4
    float32 m_flRecoilIndex; // offset 0x1270, size 0x4, align 4
    bool m_bBurstMode; // offset 0x1274, size 0x1, align 1
    char _pad_1275[0x3]; // offset 0x1275
    GameTick_t m_nPostponeFireReadyTicks; // offset 0x1278, size 0x4, align 255
    float32 m_flPostponeFireReadyFrac; // offset 0x127C, size 0x4, align 4
    bool m_bInReload; // offset 0x1280, size 0x1, align 1
    char _pad_1281[0x3]; // offset 0x1281
    GameTick_t m_nDeployTick; // offset 0x1284, size 0x4, align 255
    GameTime_t m_flDroppedAtTime; // offset 0x1288, size 0x4, align 255
    char _pad_128C[0x4]; // offset 0x128C
    bool m_bIsHauledBack; // offset 0x1290, size 0x1, align 1
    bool m_bSilencerOn; // offset 0x1291, size 0x1, align 1
    char _pad_1292[0x2]; // offset 0x1292
    GameTime_t m_flTimeSilencerSwitchComplete; // offset 0x1294, size 0x4, align 255
    bool m_bStealthy; // offset 0x1298, size 0x1, align 1
    bool m_bInSilentReloadSection; // offset 0x1299, size 0x1, align 1
    bool m_bSilentReloadStatCounted; // offset 0x129A, size 0x1, align 1
    char _pad_129B[0x1]; // offset 0x129B
    GameTime_t m_flStealthHoldStartTime; // offset 0x129C, size 0x4, align 255
    bool m_bReloadHeldSinceStart; // offset 0x12A0, size 0x1, align 1
    char _pad_12A1[0x3]; // offset 0x12A1
    float32 m_flWeaponActionPlaybackRate; // offset 0x12A4, size 0x4, align 4
    int32 m_iOriginalTeamNumber; // offset 0x12A8, size 0x4, align 4
    int32 m_iMostRecentTeamNumber; // offset 0x12AC, size 0x4, align 4
    bool m_bDroppedNearBuyZone; // offset 0x12B0, size 0x1, align 1
    char _pad_12B1[0x3]; // offset 0x12B1
    float32 m_flNextAttackRenderTimeOffset; // offset 0x12B4, size 0x4, align 4
    char _pad_12B8[0x10]; // offset 0x12B8
    bool m_bCanBePickedUp; // offset 0x12C8, size 0x1, align 1
    bool m_bUseCanOverrideNextOwnerTouchTime; // offset 0x12C9, size 0x1, align 1
    char _pad_12CA[0x2]; // offset 0x12CA
    GameTime_t m_nextOwnerTouchTime; // offset 0x12CC, size 0x4, align 255
    GameTime_t m_nextPrevOwnerTouchTime; // offset 0x12D0, size 0x4, align 255
    char _pad_12D4[0x4]; // offset 0x12D4
    GameTime_t m_nextPrevOwnerUseTime; // offset 0x12D8, size 0x4, align 255
    CHandle< CCSPlayerPawn > m_hPrevOwner; // offset 0x12DC, size 0x4, align 4
    GameTick_t m_nDropTick; // offset 0x12E0, size 0x4, align 255
    bool m_bWasActiveWeaponWhenDropped; // offset 0x12E4, size 0x1, align 1
    char _pad_12E5[0x1F]; // offset 0x12E5
    bool m_donated; // offset 0x1304, size 0x1, align 1
    char _pad_1305[0x3]; // offset 0x1305
    GameTime_t m_fLastShotTime; // offset 0x1308, size 0x4, align 255
    bool m_bWasOwnedByCT; // offset 0x130C, size 0x1, align 1
    bool m_bWasOwnedByTerrorist; // offset 0x130D, size 0x1, align 1
    char _pad_130E[0x2]; // offset 0x130E
    int32 m_numRemoveUnownedWeaponThink; // offset 0x1310, size 0x4, align 4
    char _pad_1314[0x5C]; // offset 0x1314
    CIronSightController m_IronSightController; // offset 0x1370, size 0x18, align 255
    int32 m_iIronSightMode; // offset 0x1388, size 0x4, align 4
    GameTime_t m_flLastLOSTraceFailureTime; // offset 0x138C, size 0x4, align 255
    float32 m_flWatTickOffset; // offset 0x1390, size 0x4, align 4
    char _pad_1394[0xC]; // offset 0x1394
    GameTime_t m_flLastShakeTime; // offset 0x13A0, size 0x4, align 255
    char _pad_13A4[0x1AC]; // offset 0x13A4
};
