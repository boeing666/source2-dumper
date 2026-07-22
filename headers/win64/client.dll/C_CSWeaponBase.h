#pragma once

class C_CSWeaponBase : public C_BasePlayerWeapon /*0x0*/  // sizeof 0x1CE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1778]; // offset 0x0
    WeaponGameplayAnimState m_iWeaponGameplayAnimState; // offset 0x1778, size 0x2, align 2
    char _pad_177A[0x2]; // offset 0x177A
    GameTime_t m_flWeaponGameplayAnimStateTimestamp; // offset 0x177C, size 0x4, align 255
    GameTime_t m_flInspectCancelCompleteTime; // offset 0x1780, size 0x4, align 255
    bool m_bInspectPending; // offset 0x1784, size 0x1, align 1
    bool m_bInspectShouldLoop; // offset 0x1785, size 0x1, align 1
    char _pad_1786[0x2A]; // offset 0x1786
    float32 m_flCrosshairDistance; // offset 0x17B0, size 0x4, align 4
    int32 m_iAmmoLastCheck; // offset 0x17B4, size 0x4, align 4
    int32 m_nLastEmptySoundCmdNum; // offset 0x17B8, size 0x4, align 4
    bool m_bFireOnEmpty; // offset 0x17BC, size 0x1, align 1
    char _pad_17BD[0x3]; // offset 0x17BD
    CEntityIOOutput m_OnPlayerPickup; // offset 0x17C0, size 0x18, align 255
    CSWeaponMode m_weaponMode; // offset 0x17D8, size 0x4, align 4
    float32 m_flTurningInaccuracyDelta; // offset 0x17DC, size 0x4, align 4
    Vector m_vecTurningInaccuracyEyeDirLast; // offset 0x17E0, size 0xC, align 4
    float32 m_flTurningInaccuracy; // offset 0x17EC, size 0x4, align 4
    float32 m_fAccuracyPenalty; // offset 0x17F0, size 0x4, align 4
    GameTime_t m_flLastAccuracyUpdateTime; // offset 0x17F4, size 0x4, align 255
    float32 m_fAccuracySmoothedForZoom; // offset 0x17F8, size 0x4, align 4
    int32 m_iRecoilIndex; // offset 0x17FC, size 0x4, align 4
    float32 m_flRecoilIndex; // offset 0x1800, size 0x4, align 4
    bool m_bBurstMode; // offset 0x1804, size 0x1, align 1
    char _pad_1805[0x3]; // offset 0x1805
    GameTime_t m_flLastBurstModeChangeTime; // offset 0x1808, size 0x4, align 255
    GameTick_t m_nPostponeFireReadyTicks; // offset 0x180C, size 0x4, align 255
    float32 m_flPostponeFireReadyFrac; // offset 0x1810, size 0x4, align 4
    bool m_bInReload; // offset 0x1814, size 0x1, align 1
    char _pad_1815[0x3]; // offset 0x1815
    GameTick_t m_nDeployTick; // offset 0x1818, size 0x4, align 255
    GameTime_t m_flDroppedAtTime; // offset 0x181C, size 0x4, align 255
    char _pad_1820[0x4]; // offset 0x1820
    bool m_bIsHauledBack; // offset 0x1824, size 0x1, align 1
    bool m_bSilencerOn; // offset 0x1825, size 0x1, align 1
    char _pad_1826[0x2]; // offset 0x1826
    GameTime_t m_flTimeSilencerSwitchComplete; // offset 0x1828, size 0x4, align 255
    float32 m_flWeaponActionPlaybackRate; // offset 0x182C, size 0x4, align 4
    int32 m_iOriginalTeamNumber; // offset 0x1830, size 0x4, align 4
    int32 m_iMostRecentTeamNumber; // offset 0x1834, size 0x4, align 4
    bool m_bDroppedNearBuyZone; // offset 0x1838, size 0x1, align 1
    char _pad_1839[0x3]; // offset 0x1839
    float32 m_flNextAttackRenderTimeOffset; // offset 0x183C, size 0x4, align 4
    char _pad_1840[0xA0]; // offset 0x1840
    bool m_bClearWeaponIdentifyingUGC; // offset 0x18E0, size 0x1, align 1
    bool m_bVisualsDataSet; // offset 0x18E1, size 0x1, align 1
    bool m_bUIWeapon; // offset 0x18E2, size 0x1, align 1
    char _pad_18E3[0x1]; // offset 0x18E3
    int32 m_nCustomEconReloadEventId; // offset 0x18E4, size 0x4, align 4
    char _pad_18E8[0x8]; // offset 0x18E8
    bool m_bCanBePickedUp; // offset 0x18F0, size 0x1, align 1
    char _pad_18F1[0x3]; // offset 0x18F1
    GameTime_t m_nextPrevOwnerUseTime; // offset 0x18F4, size 0x4, align 255
    CHandle< C_CSPlayerPawn > m_hPrevOwner; // offset 0x18F8, size 0x4, align 4
    GameTick_t m_nDropTick; // offset 0x18FC, size 0x4, align 255
    bool m_bWasActiveWeaponWhenDropped; // offset 0x1900, size 0x1, align 1
    char _pad_1901[0x23]; // offset 0x1901
    bool m_donated; // offset 0x1924, size 0x1, align 1
    char _pad_1925[0x3]; // offset 0x1925
    GameTime_t m_fLastShotTime; // offset 0x1928, size 0x4, align 255
    bool m_bWasOwnedByCT; // offset 0x192C, size 0x1, align 1
    bool m_bWasOwnedByTerrorist; // offset 0x192D, size 0x1, align 1
    char _pad_192E[0x2]; // offset 0x192E
    float32 m_flNextClientFireBulletTime; // offset 0x1930, size 0x4, align 4
    float32 m_flNextClientFireBulletTime_Repredict; // offset 0x1934, size 0x4, align 4
    char _pad_1938[0x58]; // offset 0x1938
    C_IronSightController m_IronSightController; // offset 0x1990, size 0xB0, align 255
    int32 m_iIronSightMode; // offset 0x1A40, size 0x4, align 4
    char _pad_1A44[0x74]; // offset 0x1A44
    GameTime_t m_flLastLOSTraceFailureTime; // offset 0x1AB8, size 0x4, align 255
    char _pad_1ABC[0x5C]; // offset 0x1ABC
    float32 m_flWatTickOffset; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x10]; // offset 0x1B1C
    GameTime_t m_flLastShakeTime; // offset 0x1B2C, size 0x4, align 255
    char _pad_1B30[0x1B0]; // offset 0x1B30
};
