#pragma once

class C_CSPlayerPawnBase : public C_BasePlayerPawn /*0x0*/  // sizeof 0x1568, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x14D8]; // offset 0x0
    CCSPlayer_PingServices* m_pPingServices; // offset 0x14D8, size 0x8, align 8
    CSPlayerState m_previousPlayerState; // offset 0x14E0, size 0x4, align 4
    CSPlayerState m_iPlayerState; // offset 0x14E4, size 0x4, align 4
    bool m_bHasMovedSinceSpawn; // offset 0x14E8, size 0x1, align 1
    char _pad_14E9[0x3]; // offset 0x14E9
    GameTime_t m_flLastSpawnTimeIndex; // offset 0x14EC, size 0x4, align 255
    int32 m_iProgressBarDuration; // offset 0x14F0, size 0x4, align 4
    float32 m_flProgressBarStartTime; // offset 0x14F4, size 0x4, align 4
    GameTime_t m_flClientDeathTime; // offset 0x14F8, size 0x4, align 255
    float32 m_flFlashBangTime; // offset 0x14FC, size 0x4, align 4
    float32 m_flFlashScreenshotAlpha; // offset 0x1500, size 0x4, align 4
    float32 m_flFlashOverlayAlpha; // offset 0x1504, size 0x4, align 4
    bool m_bFlashBuildUp; // offset 0x1508, size 0x1, align 1
    bool m_bFlashDspHasBeenCleared; // offset 0x1509, size 0x1, align 1
    bool m_bFlashScreenshotHasBeenGrabbed; // offset 0x150A, size 0x1, align 1
    char _pad_150B[0x1]; // offset 0x150B
    float32 m_flFlashMaxAlpha; // offset 0x150C, size 0x4, align 4
    float32 m_flFlashDuration; // offset 0x1510, size 0x4, align 4
    GameTime_t m_flClientHealthFadeChangeTimestamp; // offset 0x1514, size 0x4, align 255
    int32 m_nClientHealthFadeParityValue; // offset 0x1518, size 0x4, align 4
    float32 m_fNextThinkPushAway; // offset 0x151C, size 0x4, align 4
    char _pad_1520[0x4]; // offset 0x1520
    float32 m_flCurrentMusicStartTime; // offset 0x1524, size 0x4, align 4
    float32 m_flMusicRoundStartTime; // offset 0x1528, size 0x4, align 4
    bool m_bDeferStartMusicOnWarmup; // offset 0x152C, size 0x1, align 1
    char _pad_152D[0x3]; // offset 0x152D
    float32 m_flLastSmokeOverlayAlpha; // offset 0x1530, size 0x4, align 4
    float32 m_flLastSmokeAge; // offset 0x1534, size 0x4, align 4
    Vector m_vLastSmokeOverlayColor; // offset 0x1538, size 0xC, align 4
    char _pad_1544[0x1C]; // offset 0x1544
    CHandle< CCSPlayerController > m_hOriginalController; // offset 0x1560, size 0x4, align 4
    char _pad_1564[0x4]; // offset 0x1564
};
