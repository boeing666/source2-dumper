#pragma once

class CCSPlayerPawnBase : public CBasePlayerPawn /*0x0*/  // sizeof 0xE20, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xCE0]; // offset 0x0
    CTouchExpansionComponent m_CTouchExpansionComponent; // offset 0xCE0, size 0x50, align 8
    CCSPlayer_PingServices* m_pPingServices; // offset 0xD30, size 0x8, align 8
    GameTime_t m_blindUntilTime; // offset 0xD38, size 0x4, align 255
    GameTime_t m_blindStartTime; // offset 0xD3C, size 0x4, align 255
    CSPlayerState m_iPlayerState; // offset 0xD40, size 0x4, align 4
    char _pad_0D44[0xAC]; // offset 0xD44
    bool m_bRespawning; // offset 0xDF0, size 0x1, align 1
    bool m_bHasMovedSinceSpawn; // offset 0xDF1, size 0x1, align 1
    char _pad_0DF2[0x2]; // offset 0xDF2
    int32 m_iNumSpawns; // offset 0xDF4, size 0x4, align 4
    char _pad_0DF8[0x4]; // offset 0xDF8
    float32 m_flIdleTimeSinceLastAction; // offset 0xDFC, size 0x4, align 4
    float32 m_fNextRadarUpdateTime; // offset 0xE00, size 0x4, align 4
    float32 m_flFlashDuration; // offset 0xE04, size 0x4, align 4
    float32 m_flFlashMaxAlpha; // offset 0xE08, size 0x4, align 4
    float32 m_flProgressBarStartTime; // offset 0xE0C, size 0x4, align 4
    int32 m_iProgressBarDuration; // offset 0xE10, size 0x4, align 4
    CHandle< CCSPlayerController > m_hOriginalController; // offset 0xE14, size 0x4, align 4
    char _pad_0E18[0x8]; // offset 0xE18
};
