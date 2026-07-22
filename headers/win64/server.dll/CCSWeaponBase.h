#pragma once

class CCSWeaponBase : public CBasePlayerWeapon /*0x0*/  // sizeof 0x1050, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xCD8]; // offset 0x0
    bool m_bRemoveable; // offset 0xCD8, size 0x1, align 1
    bool m_bPlayerAmmoStockOnPickup; // offset 0xCD9, size 0x1, align 1
    bool m_bRequireUseToTouch; // offset 0xCDA, size 0x1, align 1
    char _pad_0CDB[0x1]; // offset 0xCDB
    WeaponGameplayAnimState m_iWeaponGameplayAnimState; // offset 0xCDC, size 0x2, align 2
    char _pad_0CDE[0x2]; // offset 0xCDE
    GameTime_t m_flWeaponGameplayAnimStateTimestamp; // offset 0xCE0, size 0x4, align 255
    GameTime_t m_flInspectCancelCompleteTime; // offset 0xCE4, size 0x4, align 255
    bool m_bInspectPending; // offset 0xCE8, size 0x1, align 1
    bool m_bInspectShouldLoop; // offset 0xCE9, size 0x1, align 1
    char _pad_0CEA[0x2A]; // offset 0xCEA
    int32 m_nLastEmptySoundCmdNum; // offset 0xD14, size 0x4, align 4
    char _pad_0D18[0x18]; // offset 0xD18
    bool m_bFireOnEmpty; // offset 0xD30, size 0x1, align 1
    char _pad_0D31[0x7]; // offset 0xD31
    CEntityIOOutput m_OnPlayerPickup; // offset 0xD38, size 0x18, align 255
    CSWeaponMode m_weaponMode; // offset 0xD50, size 0x4, align 4
    float32 m_flTurningInaccuracyDelta; // offset 0xD54, size 0x4, align 4
    Vector m_vecTurningInaccuracyEyeDirLast; // offset 0xD58, size 0xC, align 4
    float32 m_flTurningInaccuracy; // offset 0xD64, size 0x4, align 4
    float32 m_fAccuracyPenalty; // offset 0xD68, size 0x4, align 4
    GameTime_t m_flLastAccuracyUpdateTime; // offset 0xD6C, size 0x4, align 255
    float32 m_fAccuracySmoothedForZoom; // offset 0xD70, size 0x4, align 4
    int32 m_iRecoilIndex; // offset 0xD74, size 0x4, align 4
    float32 m_flRecoilIndex; // offset 0xD78, size 0x4, align 4
    bool m_bBurstMode; // offset 0xD7C, size 0x1, align 1
    char _pad_0D7D[0x3]; // offset 0xD7D
    GameTick_t m_nPostponeFireReadyTicks; // offset 0xD80, size 0x4, align 255
    float32 m_flPostponeFireReadyFrac; // offset 0xD84, size 0x4, align 4
    bool m_bInReload; // offset 0xD88, size 0x1, align 1
    char _pad_0D89[0x3]; // offset 0xD89
    GameTick_t m_nDeployTick; // offset 0xD8C, size 0x4, align 255
    GameTime_t m_flDroppedAtTime; // offset 0xD90, size 0x4, align 255
    char _pad_0D94[0x4]; // offset 0xD94
    bool m_bIsHauledBack; // offset 0xD98, size 0x1, align 1
    bool m_bSilencerOn; // offset 0xD99, size 0x1, align 1
    char _pad_0D9A[0x2]; // offset 0xD9A
    GameTime_t m_flTimeSilencerSwitchComplete; // offset 0xD9C, size 0x4, align 255
    float32 m_flWeaponActionPlaybackRate; // offset 0xDA0, size 0x4, align 4
    int32 m_iOriginalTeamNumber; // offset 0xDA4, size 0x4, align 4
    int32 m_iMostRecentTeamNumber; // offset 0xDA8, size 0x4, align 4
    bool m_bDroppedNearBuyZone; // offset 0xDAC, size 0x1, align 1
    char _pad_0DAD[0x3]; // offset 0xDAD
    float32 m_flNextAttackRenderTimeOffset; // offset 0xDB0, size 0x4, align 4
    char _pad_0DB4[0x14]; // offset 0xDB4
    bool m_bCanBePickedUp; // offset 0xDC8, size 0x1, align 1
    bool m_bUseCanOverrideNextOwnerTouchTime; // offset 0xDC9, size 0x1, align 1
    char _pad_0DCA[0x2]; // offset 0xDCA
    GameTime_t m_nextOwnerTouchTime; // offset 0xDCC, size 0x4, align 255
    GameTime_t m_nextPrevOwnerTouchTime; // offset 0xDD0, size 0x4, align 255
    char _pad_0DD4[0x4]; // offset 0xDD4
    GameTime_t m_nextPrevOwnerUseTime; // offset 0xDD8, size 0x4, align 255
    CHandle< CCSPlayerPawn > m_hPrevOwner; // offset 0xDDC, size 0x4, align 4
    GameTick_t m_nDropTick; // offset 0xDE0, size 0x4, align 255
    bool m_bWasActiveWeaponWhenDropped; // offset 0xDE4, size 0x1, align 1
    char _pad_0DE5[0x1F]; // offset 0xDE5
    bool m_donated; // offset 0xE04, size 0x1, align 1
    char _pad_0E05[0x3]; // offset 0xE05
    GameTime_t m_fLastShotTime; // offset 0xE08, size 0x4, align 255
    bool m_bWasOwnedByCT; // offset 0xE0C, size 0x1, align 1
    bool m_bWasOwnedByTerrorist; // offset 0xE0D, size 0x1, align 1
    char _pad_0E0E[0x2]; // offset 0xE0E
    int32 m_numRemoveUnownedWeaponThink; // offset 0xE10, size 0x4, align 4
    char _pad_0E14[0x5C]; // offset 0xE14
    CIronSightController m_IronSightController; // offset 0xE70, size 0x18, align 255
    int32 m_iIronSightMode; // offset 0xE88, size 0x4, align 4
    GameTime_t m_flLastLOSTraceFailureTime; // offset 0xE8C, size 0x4, align 255
    float32 m_flWatTickOffset; // offset 0xE90, size 0x4, align 4
    char _pad_0E94[0xC]; // offset 0xE94
    GameTime_t m_flLastShakeTime; // offset 0xEA0, size 0x4, align 255
    char _pad_0EA4[0x1AC]; // offset 0xEA4
};
