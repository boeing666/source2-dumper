#pragma once

class CCSPlayerPawnBase : public CBasePlayerPawn /*0x0*/  // sizeof 0x10F0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    CTouchExpansionComponent m_CTouchExpansionComponent; // offset 0xFB0, size 0x50, align 8
    CCSPlayer_PingServices* m_pPingServices; // offset 0x1000, size 0x8, align 8
    GameTime_t m_blindUntilTime; // offset 0x1008, size 0x4, align 255
    GameTime_t m_blindStartTime; // offset 0x100C, size 0x4, align 255
    CSPlayerState m_iPlayerState; // offset 0x1010, size 0x4, align 4
    char _pad_1014[0xAC]; // offset 0x1014
    bool m_bRespawning; // offset 0x10C0, size 0x1, align 1
    bool m_bHasMovedSinceSpawn; // offset 0x10C1, size 0x1, align 1
    char _pad_10C2[0x2]; // offset 0x10C2
    int32 m_iNumSpawns; // offset 0x10C4, size 0x4, align 4
    char _pad_10C8[0x4]; // offset 0x10C8
    float32 m_flIdleTimeSinceLastAction; // offset 0x10CC, size 0x4, align 4
    float32 m_fNextRadarUpdateTime; // offset 0x10D0, size 0x4, align 4
    float32 m_flFlashDuration; // offset 0x10D4, size 0x4, align 4
    float32 m_flFlashMaxAlpha; // offset 0x10D8, size 0x4, align 4
    float32 m_flProgressBarStartTime; // offset 0x10DC, size 0x4, align 4
    int32 m_iProgressBarDuration; // offset 0x10E0, size 0x4, align 4
    CHandle< CCSPlayerController > m_hOriginalController; // offset 0x10E4, size 0x4, align 4
    char _pad_10E8[0x8]; // offset 0x10E8
};
