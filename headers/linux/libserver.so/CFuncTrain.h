#pragma once

class CFuncTrain : public CBasePlatTrain /*0x0*/  // sizeof 0xBF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBD4]; // offset 0x0
    CHandle< CBaseEntity > m_hCurrentTarget; // offset 0xBD4, size 0x4, align 4
    bool m_activated; // offset 0xBD8, size 0x1, align 1
    char _pad_0BD9[0x3]; // offset 0xBD9
    CHandle< CBaseEntity > m_hEnemy; // offset 0xBDC, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0xBE0, size 0x4, align 4
    GameTime_t m_flNextBlockTime; // offset 0xBE4, size 0x4, align 255
    CUtlSymbolLarge m_iszLastTarget; // offset 0xBE8, size 0x8, align 8
    float32 m_flSpeed; // offset 0xBF0, size 0x4, align 4
    char _pad_0BF4[0x4]; // offset 0xBF4
};
