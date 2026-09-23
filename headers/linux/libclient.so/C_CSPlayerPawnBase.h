#pragma once

class C_CSPlayerPawnBase : public C_BasePlayerPawn /*0x0*/  // sizeof 0x14F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1460]; // offset 0x0
    CCSPlayer_PingServices* m_pPingServices; // offset 0x1460, size 0x8, align 8
    CSPlayerState m_previousPlayerState; // offset 0x1468, size 0x4, align 4
    CSPlayerState m_iPlayerState; // offset 0x146C, size 0x4, align 4
    bool m_bHasMovedSinceSpawn; // offset 0x1470, size 0x1, align 1
    char _pad_1471[0x3]; // offset 0x1471
    GameTime_t m_flLastSpawnTimeIndex; // offset 0x1474, size 0x4, align 255
    int32 m_iProgressBarDuration; // offset 0x1478, size 0x4, align 4
    float32 m_flProgressBarStartTime; // offset 0x147C, size 0x4, align 4
    GameTime_t m_flClientDeathTime; // offset 0x1480, size 0x4, align 255
    float32 m_flFlashBangTime; // offset 0x1484, size 0x4, align 4
    float32 m_flFlashScreenshotAlpha; // offset 0x1488, size 0x4, align 4
    float32 m_flFlashOverlayAlpha; // offset 0x148C, size 0x4, align 4
    bool m_bFlashBuildUp; // offset 0x1490, size 0x1, align 1
    bool m_bFlashDspHasBeenCleared; // offset 0x1491, size 0x1, align 1
    bool m_bFlashScreenshotHasBeenGrabbed; // offset 0x1492, size 0x1, align 1
    char _pad_1493[0x1]; // offset 0x1493
    float32 m_flFlashMaxAlpha; // offset 0x1494, size 0x4, align 4
    float32 m_flFlashDuration; // offset 0x1498, size 0x4, align 4
    GameTime_t m_flClientHealthFadeChangeTimestamp; // offset 0x149C, size 0x4, align 255
    int32 m_nClientHealthFadeParityValue; // offset 0x14A0, size 0x4, align 4
    float32 m_fNextThinkPushAway; // offset 0x14A4, size 0x4, align 4
    char _pad_14A8[0x4]; // offset 0x14A8
    float32 m_flCurrentMusicStartTime; // offset 0x14AC, size 0x4, align 4
    float32 m_flMusicRoundStartTime; // offset 0x14B0, size 0x4, align 4
    bool m_bDeferStartMusicOnWarmup; // offset 0x14B4, size 0x1, align 1
    char _pad_14B5[0x3]; // offset 0x14B5
    float32 m_flLastSmokeOverlayAlpha; // offset 0x14B8, size 0x4, align 4
    float32 m_flLastSmokeAge; // offset 0x14BC, size 0x4, align 4
    Vector m_vLastSmokeOverlayColor; // offset 0x14C0, size 0xC, align 4
    char _pad_14CC[0x1C]; // offset 0x14CC
    CHandle< CCSPlayerController > m_hOriginalController; // offset 0x14E8, size 0x4, align 4
    char _pad_14EC[0x4]; // offset 0x14EC
};
