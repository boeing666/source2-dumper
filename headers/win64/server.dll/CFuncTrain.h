#pragma once

class CFuncTrain : public CBasePlatTrain /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x920]; // offset 0x0
    CHandle< CBaseEntity > m_hCurrentTarget; // offset 0x920, size 0x4, align 4
    bool m_activated; // offset 0x924, size 0x1, align 1
    char _pad_0925[0x3]; // offset 0x925
    CHandle< CBaseEntity > m_hEnemy; // offset 0x928, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0x92C, size 0x4, align 4
    GameTime_t m_flNextBlockTime; // offset 0x930, size 0x4, align 255
    char _pad_0934[0x4]; // offset 0x934
    CUtlSymbolLarge m_iszLastTarget; // offset 0x938, size 0x8, align 8
    float32 m_flSpeed; // offset 0x940, size 0x4, align 4
    char _pad_0944[0x4]; // offset 0x944
};
