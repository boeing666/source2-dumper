#pragma once

class CFuncTrain : public CBasePlatTrain /*0x0*/  // sizeof 0xB10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAEC]; // offset 0x0
    CHandle< CBaseEntity > m_hCurrentTarget; // offset 0xAEC, size 0x4, align 4
    bool m_activated; // offset 0xAF0, size 0x1, align 1
    char _pad_0AF1[0x3]; // offset 0xAF1
    CHandle< CBaseEntity > m_hEnemy; // offset 0xAF4, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0xAF8, size 0x4, align 4
    GameTime_t m_flNextBlockTime; // offset 0xAFC, size 0x4, align 255
    CUtlSymbolLarge m_iszLastTarget; // offset 0xB00, size 0x8, align 8
    float32 m_flSpeed; // offset 0xB08, size 0x4, align 4
    char _pad_0B0C[0x4]; // offset 0xB0C
};
