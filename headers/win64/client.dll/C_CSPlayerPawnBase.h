#pragma once

class C_CSPlayerPawnBase : public C_BasePlayerPawn /*0x0*/  // sizeof 0x1480, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x13F0]; // offset 0x0
    CCSPlayer_PingServices* m_pPingServices; // offset 0x13F0, size 0x8, align 8
    CSPlayerState m_previousPlayerState; // offset 0x13F8, size 0x4, align 4
    CSPlayerState m_iPlayerState; // offset 0x13FC, size 0x4, align 4
    bool m_bHasMovedSinceSpawn; // offset 0x1400, size 0x1, align 1
    char _pad_1401[0x3]; // offset 0x1401
    GameTime_t m_flLastSpawnTimeIndex; // offset 0x1404, size 0x4, align 255
    int32 m_iProgressBarDuration; // offset 0x1408, size 0x4, align 4
    float32 m_flProgressBarStartTime; // offset 0x140C, size 0x4, align 4
    GameTime_t m_flClientDeathTime; // offset 0x1410, size 0x4, align 255
    float32 m_flFlashBangTime; // offset 0x1414, size 0x4, align 4
    float32 m_flFlashScreenshotAlpha; // offset 0x1418, size 0x4, align 4
    float32 m_flFlashOverlayAlpha; // offset 0x141C, size 0x4, align 4
    bool m_bFlashBuildUp; // offset 0x1420, size 0x1, align 1
    bool m_bFlashDspHasBeenCleared; // offset 0x1421, size 0x1, align 1
    bool m_bFlashScreenshotHasBeenGrabbed; // offset 0x1422, size 0x1, align 1
    char _pad_1423[0x1]; // offset 0x1423
    float32 m_flFlashMaxAlpha; // offset 0x1424, size 0x4, align 4
    float32 m_flFlashDuration; // offset 0x1428, size 0x4, align 4
    GameTime_t m_flClientHealthFadeChangeTimestamp; // offset 0x142C, size 0x4, align 255
    int32 m_nClientHealthFadeParityValue; // offset 0x1430, size 0x4, align 4
    float32 m_fNextThinkPushAway; // offset 0x1434, size 0x4, align 4
    char _pad_1438[0x4]; // offset 0x1438
    float32 m_flCurrentMusicStartTime; // offset 0x143C, size 0x4, align 4
    float32 m_flMusicRoundStartTime; // offset 0x1440, size 0x4, align 4
    bool m_bDeferStartMusicOnWarmup; // offset 0x1444, size 0x1, align 1
    char _pad_1445[0x3]; // offset 0x1445
    float32 m_flLastSmokeOverlayAlpha; // offset 0x1448, size 0x4, align 4
    float32 m_flLastSmokeAge; // offset 0x144C, size 0x4, align 4
    Vector m_vLastSmokeOverlayColor; // offset 0x1450, size 0xC, align 4
    char _pad_145C[0x1C]; // offset 0x145C
    CHandle< CCSPlayerController > m_hOriginalController; // offset 0x1478, size 0x4, align 4
    char _pad_147C[0x4]; // offset 0x147C
};
