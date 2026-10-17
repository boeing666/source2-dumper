#pragma once

class CFuncTrain : public CBasePlatTrain /*0x0*/  // sizeof 0x928, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x900]; // offset 0x0
    CHandle< CBaseEntity > m_hCurrentTarget; // offset 0x900, size 0x4, align 4
    bool m_activated; // offset 0x904, size 0x1, align 1
    char _pad_0905[0x3]; // offset 0x905
    CHandle< CBaseEntity > m_hEnemy; // offset 0x908, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0x90C, size 0x4, align 4
    GameTime_t m_flNextBlockTime; // offset 0x910, size 0x4, align 255
    char _pad_0914[0x4]; // offset 0x914
    CUtlSymbolLarge m_iszLastTarget; // offset 0x918, size 0x8, align 8
    float32 m_flSpeed; // offset 0x920, size 0x4, align 4
    char _pad_0924[0x4]; // offset 0x924
};
