#pragma once

class CFuncTrain : public CBasePlatTrain /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F8]; // offset 0x0
    CHandle< CBaseEntity > m_hCurrentTarget; // offset 0x8F8, size 0x4, align 4
    bool m_activated; // offset 0x8FC, size 0x1, align 1
    char _pad_08FD[0x3]; // offset 0x8FD
    CHandle< CBaseEntity > m_hEnemy; // offset 0x900, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0x904, size 0x4, align 4
    GameTime_t m_flNextBlockTime; // offset 0x908, size 0x4, align 255
    char _pad_090C[0x4]; // offset 0x90C
    CUtlSymbolLarge m_iszLastTarget; // offset 0x910, size 0x8, align 8
    float32 m_flSpeed; // offset 0x918, size 0x4, align 4
    char _pad_091C[0x4]; // offset 0x91C
};
