#pragma once

class CCSPlayerPawnBase : public CBasePlayerPawn /*0x0*/  // sizeof 0x1000, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xEC8]; // offset 0x0
    CTouchExpansionComponent m_CTouchExpansionComponent; // offset 0xEC8, size 0x50, align 8
    CCSPlayer_PingServices* m_pPingServices; // offset 0xF18, size 0x8, align 8
    GameTime_t m_blindUntilTime; // offset 0xF20, size 0x4, align 255
    GameTime_t m_blindStartTime; // offset 0xF24, size 0x4, align 255
    CSPlayerState m_iPlayerState; // offset 0xF28, size 0x4, align 4
    char _pad_0F2C[0xAC]; // offset 0xF2C
    bool m_bRespawning; // offset 0xFD8, size 0x1, align 1
    bool m_bHasMovedSinceSpawn; // offset 0xFD9, size 0x1, align 1
    char _pad_0FDA[0x2]; // offset 0xFDA
    int32 m_iNumSpawns; // offset 0xFDC, size 0x4, align 4
    char _pad_0FE0[0x4]; // offset 0xFE0
    float32 m_flIdleTimeSinceLastAction; // offset 0xFE4, size 0x4, align 4
    float32 m_fNextRadarUpdateTime; // offset 0xFE8, size 0x4, align 4
    float32 m_flFlashDuration; // offset 0xFEC, size 0x4, align 4
    float32 m_flFlashMaxAlpha; // offset 0xFF0, size 0x4, align 4
    float32 m_flProgressBarStartTime; // offset 0xFF4, size 0x4, align 4
    int32 m_iProgressBarDuration; // offset 0xFF8, size 0x4, align 4
    CHandle< CCSPlayerController > m_hOriginalController; // offset 0xFFC, size 0x4, align 4
};
