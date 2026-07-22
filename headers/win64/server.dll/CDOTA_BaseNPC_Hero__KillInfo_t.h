#pragma once

struct CDOTA_BaseNPC_Hero::KillInfo_t  // sizeof 0x20, align 0xFF [trivial_dtor] (server)
{
    CUtlSymbolLarge m_victimname; // offset 0x0, size 0x8, align 8
    CUtlSymbolLarge m_inflictorname; // offset 0x8, size 0x8, align 8
    bool m_bEnemyInFOW; // offset 0x10, size 0x1, align 1
    bool m_bWasFirstBlood; // offset 0x11, size 0x1, align 1
    char _pad_0012[0x2]; // offset 0x12
    int32 m_iKillCount; // offset 0x14, size 0x4, align 4
    float32 m_flBlinkTime; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
