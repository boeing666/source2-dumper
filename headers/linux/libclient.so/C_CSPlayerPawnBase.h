#pragma once

class C_CSPlayerPawnBase : public C_BasePlayerPawn /*0x0*/  // sizeof 0x1408, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1378]; // offset 0x0
    CCSPlayer_PingServices* m_pPingServices; // offset 0x1378, size 0x8, align 8
    CSPlayerState m_previousPlayerState; // offset 0x1380, size 0x4, align 4
    CSPlayerState m_iPlayerState; // offset 0x1384, size 0x4, align 4
    bool m_bHasMovedSinceSpawn; // offset 0x1388, size 0x1, align 1
    char _pad_1389[0x3]; // offset 0x1389
    GameTime_t m_flLastSpawnTimeIndex; // offset 0x138C, size 0x4, align 255
    int32 m_iProgressBarDuration; // offset 0x1390, size 0x4, align 4
    float32 m_flProgressBarStartTime; // offset 0x1394, size 0x4, align 4
    GameTime_t m_flClientDeathTime; // offset 0x1398, size 0x4, align 255
    float32 m_flFlashBangTime; // offset 0x139C, size 0x4, align 4
    float32 m_flFlashScreenshotAlpha; // offset 0x13A0, size 0x4, align 4
    float32 m_flFlashOverlayAlpha; // offset 0x13A4, size 0x4, align 4
    bool m_bFlashBuildUp; // offset 0x13A8, size 0x1, align 1
    bool m_bFlashDspHasBeenCleared; // offset 0x13A9, size 0x1, align 1
    bool m_bFlashScreenshotHasBeenGrabbed; // offset 0x13AA, size 0x1, align 1
    char _pad_13AB[0x1]; // offset 0x13AB
    float32 m_flFlashMaxAlpha; // offset 0x13AC, size 0x4, align 4
    float32 m_flFlashDuration; // offset 0x13B0, size 0x4, align 4
    GameTime_t m_flClientHealthFadeChangeTimestamp; // offset 0x13B4, size 0x4, align 255
    int32 m_nClientHealthFadeParityValue; // offset 0x13B8, size 0x4, align 4
    float32 m_fNextThinkPushAway; // offset 0x13BC, size 0x4, align 4
    char _pad_13C0[0x4]; // offset 0x13C0
    float32 m_flCurrentMusicStartTime; // offset 0x13C4, size 0x4, align 4
    float32 m_flMusicRoundStartTime; // offset 0x13C8, size 0x4, align 4
    bool m_bDeferStartMusicOnWarmup; // offset 0x13CC, size 0x1, align 1
    char _pad_13CD[0x3]; // offset 0x13CD
    float32 m_flLastSmokeOverlayAlpha; // offset 0x13D0, size 0x4, align 4
    float32 m_flLastSmokeAge; // offset 0x13D4, size 0x4, align 4
    Vector m_vLastSmokeOverlayColor; // offset 0x13D8, size 0xC, align 4
    char _pad_13E4[0x1C]; // offset 0x13E4
    CHandle< CCSPlayerController > m_hOriginalController; // offset 0x1400, size 0x4, align 4
    char _pad_1404[0x4]; // offset 0x1404
};
