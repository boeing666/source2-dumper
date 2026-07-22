#pragma once

class CFilterEnemy : public CBaseFilter /*0x0*/  // sizeof 0x4F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4D8]; // offset 0x0
    CUtlSymbolLarge m_iszEnemyName; // offset 0x4D8, size 0x8, align 8
    float32 m_flRadius; // offset 0x4E0, size 0x4, align 4
    float32 m_flOuterRadius; // offset 0x4E4, size 0x4, align 4
    int32 m_nMaxSquadmatesPerEnemy; // offset 0x4E8, size 0x4, align 4
    char _pad_04EC[0x4]; // offset 0x4EC
    CUtlSymbolLarge m_iszPlayerName; // offset 0x4F0, size 0x8, align 8
};
