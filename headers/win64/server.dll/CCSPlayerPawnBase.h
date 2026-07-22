#pragma once

class CCSPlayerPawnBase : public CBasePlayerPawn /*0x0*/  // sizeof 0xD30, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xBF0]; // offset 0x0
    CTouchExpansionComponent m_CTouchExpansionComponent; // offset 0xBF0, size 0x50, align 8
    CCSPlayer_PingServices* m_pPingServices; // offset 0xC40, size 0x8, align 8
    GameTime_t m_blindUntilTime; // offset 0xC48, size 0x4, align 255
    GameTime_t m_blindStartTime; // offset 0xC4C, size 0x4, align 255
    CSPlayerState m_iPlayerState; // offset 0xC50, size 0x4, align 4
    char _pad_0C54[0xAC]; // offset 0xC54
    bool m_bRespawning; // offset 0xD00, size 0x1, align 1
    bool m_bHasMovedSinceSpawn; // offset 0xD01, size 0x1, align 1
    char _pad_0D02[0x2]; // offset 0xD02
    int32 m_iNumSpawns; // offset 0xD04, size 0x4, align 4
    char _pad_0D08[0x4]; // offset 0xD08
    float32 m_flIdleTimeSinceLastAction; // offset 0xD0C, size 0x4, align 4
    float32 m_fNextRadarUpdateTime; // offset 0xD10, size 0x4, align 4
    float32 m_flFlashDuration; // offset 0xD14, size 0x4, align 4
    float32 m_flFlashMaxAlpha; // offset 0xD18, size 0x4, align 4
    float32 m_flProgressBarStartTime; // offset 0xD1C, size 0x4, align 4
    int32 m_iProgressBarDuration; // offset 0xD20, size 0x4, align 4
    CHandle< CCSPlayerController > m_hOriginalController; // offset 0xD24, size 0x4, align 4
    char _pad_0D28[0x8]; // offset 0xD28
};
