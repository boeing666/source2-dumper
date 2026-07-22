#pragma once

class CCSWeaponBase : public CBasePlayerWeapon /*0x0*/  // sizeof 0x1320, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    bool m_bRemoveable; // offset 0xFB0, size 0x1, align 1
    bool m_bPlayerAmmoStockOnPickup; // offset 0xFB1, size 0x1, align 1
    bool m_bRequireUseToTouch; // offset 0xFB2, size 0x1, align 1
    char _pad_0FB3[0x1]; // offset 0xFB3
    WeaponGameplayAnimState m_iWeaponGameplayAnimState; // offset 0xFB4, size 0x2, align 2
    char _pad_0FB6[0x2]; // offset 0xFB6
    GameTime_t m_flWeaponGameplayAnimStateTimestamp; // offset 0xFB8, size 0x4, align 255
    GameTime_t m_flInspectCancelCompleteTime; // offset 0xFBC, size 0x4, align 255
    bool m_bInspectPending; // offset 0xFC0, size 0x1, align 1
    bool m_bInspectShouldLoop; // offset 0xFC1, size 0x1, align 1
    char _pad_0FC2[0x2A]; // offset 0xFC2
    int32 m_nLastEmptySoundCmdNum; // offset 0xFEC, size 0x4, align 4
    char _pad_0FF0[0x18]; // offset 0xFF0
    bool m_bFireOnEmpty; // offset 0x1008, size 0x1, align 1
    char _pad_1009[0x7]; // offset 0x1009
    CEntityIOOutput m_OnPlayerPickup; // offset 0x1010, size 0x18, align 255
    CSWeaponMode m_weaponMode; // offset 0x1028, size 0x4, align 4
    float32 m_flTurningInaccuracyDelta; // offset 0x102C, size 0x4, align 4
    Vector m_vecTurningInaccuracyEyeDirLast; // offset 0x1030, size 0xC, align 4
    float32 m_flTurningInaccuracy; // offset 0x103C, size 0x4, align 4
    float32 m_fAccuracyPenalty; // offset 0x1040, size 0x4, align 4
    GameTime_t m_flLastAccuracyUpdateTime; // offset 0x1044, size 0x4, align 255
    float32 m_fAccuracySmoothedForZoom; // offset 0x1048, size 0x4, align 4
    int32 m_iRecoilIndex; // offset 0x104C, size 0x4, align 4
    float32 m_flRecoilIndex; // offset 0x1050, size 0x4, align 4
    bool m_bBurstMode; // offset 0x1054, size 0x1, align 1
    char _pad_1055[0x3]; // offset 0x1055
    GameTick_t m_nPostponeFireReadyTicks; // offset 0x1058, size 0x4, align 255
    float32 m_flPostponeFireReadyFrac; // offset 0x105C, size 0x4, align 4
    bool m_bInReload; // offset 0x1060, size 0x1, align 1
    char _pad_1061[0x3]; // offset 0x1061
    GameTick_t m_nDeployTick; // offset 0x1064, size 0x4, align 255
    GameTime_t m_flDroppedAtTime; // offset 0x1068, size 0x4, align 255
    char _pad_106C[0x4]; // offset 0x106C
    bool m_bIsHauledBack; // offset 0x1070, size 0x1, align 1
    bool m_bSilencerOn; // offset 0x1071, size 0x1, align 1
    char _pad_1072[0x2]; // offset 0x1072
    GameTime_t m_flTimeSilencerSwitchComplete; // offset 0x1074, size 0x4, align 255
    float32 m_flWeaponActionPlaybackRate; // offset 0x1078, size 0x4, align 4
    int32 m_iOriginalTeamNumber; // offset 0x107C, size 0x4, align 4
    int32 m_iMostRecentTeamNumber; // offset 0x1080, size 0x4, align 4
    bool m_bDroppedNearBuyZone; // offset 0x1084, size 0x1, align 1
    char _pad_1085[0x3]; // offset 0x1085
    float32 m_flNextAttackRenderTimeOffset; // offset 0x1088, size 0x4, align 4
    char _pad_108C[0x14]; // offset 0x108C
    bool m_bCanBePickedUp; // offset 0x10A0, size 0x1, align 1
    bool m_bUseCanOverrideNextOwnerTouchTime; // offset 0x10A1, size 0x1, align 1
    char _pad_10A2[0x2]; // offset 0x10A2
    GameTime_t m_nextOwnerTouchTime; // offset 0x10A4, size 0x4, align 255
    GameTime_t m_nextPrevOwnerTouchTime; // offset 0x10A8, size 0x4, align 255
    char _pad_10AC[0x4]; // offset 0x10AC
    GameTime_t m_nextPrevOwnerUseTime; // offset 0x10B0, size 0x4, align 255
    CHandle< CCSPlayerPawn > m_hPrevOwner; // offset 0x10B4, size 0x4, align 4
    GameTick_t m_nDropTick; // offset 0x10B8, size 0x4, align 255
    bool m_bWasActiveWeaponWhenDropped; // offset 0x10BC, size 0x1, align 1
    char _pad_10BD[0x1F]; // offset 0x10BD
    bool m_donated; // offset 0x10DC, size 0x1, align 1
    char _pad_10DD[0x3]; // offset 0x10DD
    GameTime_t m_fLastShotTime; // offset 0x10E0, size 0x4, align 255
    bool m_bWasOwnedByCT; // offset 0x10E4, size 0x1, align 1
    bool m_bWasOwnedByTerrorist; // offset 0x10E5, size 0x1, align 1
    char _pad_10E6[0x2]; // offset 0x10E6
    int32 m_numRemoveUnownedWeaponThink; // offset 0x10E8, size 0x4, align 4
    char _pad_10EC[0x54]; // offset 0x10EC
    CIronSightController m_IronSightController; // offset 0x1140, size 0x18, align 255
    int32 m_iIronSightMode; // offset 0x1158, size 0x4, align 4
    GameTime_t m_flLastLOSTraceFailureTime; // offset 0x115C, size 0x4, align 255
    float32 m_flWatTickOffset; // offset 0x1160, size 0x4, align 4
    char _pad_1164[0xC]; // offset 0x1164
    GameTime_t m_flLastShakeTime; // offset 0x1170, size 0x4, align 255
    char _pad_1174[0x1AC]; // offset 0x1174
};
