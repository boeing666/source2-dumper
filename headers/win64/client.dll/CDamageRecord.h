#pragma once

class CDamageRecord  // sizeof 0x78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CHandle< C_CSPlayerPawn > m_PlayerDamager; // offset 0x30, size 0x4, align 4
    CHandle< C_CSPlayerPawn > m_PlayerRecipient; // offset 0x34, size 0x4, align 4
    CHandle< CCSPlayerController > m_hPlayerControllerDamager; // offset 0x38, size 0x4, align 4
    CHandle< CCSPlayerController > m_hPlayerControllerRecipient; // offset 0x3C, size 0x4, align 4
    CUtlString m_szPlayerDamagerName; // offset 0x40, size 0x8, align 8
    CUtlString m_szPlayerRecipientName; // offset 0x48, size 0x8, align 8
    uint64 m_DamagerXuid; // offset 0x50, size 0x8, align 8
    uint64 m_RecipientXuid; // offset 0x58, size 0x8, align 8
    float32 m_flBulletsDamage; // offset 0x60, size 0x4, align 4
    float32 m_flDamage; // offset 0x64, size 0x4, align 4
    float32 m_flActualHealthRemoved; // offset 0x68, size 0x4, align 4
    int32 m_iNumHits; // offset 0x6C, size 0x4, align 4
    int32 m_iLastBulletUpdate; // offset 0x70, size 0x4, align 4
    bool m_bIsOtherEnemy; // offset 0x74, size 0x1, align 1
    EKillTypes_t m_killType; // offset 0x75, size 0x1, align 1
    char _pad_0076[0x2]; // offset 0x76
};
