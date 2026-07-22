#pragma once

class CFilterEnemy : public CBaseFilter /*0x0*/  // sizeof 0x7D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7B0]; // offset 0x0
    CUtlSymbolLarge m_iszEnemyName; // offset 0x7B0, size 0x8, align 8
    float32 m_flRadius; // offset 0x7B8, size 0x4, align 4
    float32 m_flOuterRadius; // offset 0x7BC, size 0x4, align 4
    int32 m_nMaxSquadmatesPerEnemy; // offset 0x7C0, size 0x4, align 4
    char _pad_07C4[0x4]; // offset 0x7C4
    CUtlSymbolLarge m_iszPlayerName; // offset 0x7C8, size 0x8, align 8
};
