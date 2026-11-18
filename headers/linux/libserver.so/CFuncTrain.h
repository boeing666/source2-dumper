#pragma once

class CFuncTrain : public CBasePlatTrain /*0x0*/  // sizeof 0xC60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC3C]; // offset 0x0
    CHandle< CBaseEntity > m_hCurrentTarget; // offset 0xC3C, size 0x4, align 4
    bool m_activated; // offset 0xC40, size 0x1, align 1
    char _pad_0C41[0x3]; // offset 0xC41
    CHandle< CBaseEntity > m_hEnemy; // offset 0xC44, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0xC48, size 0x4, align 4
    GameTime_t m_flNextBlockTime; // offset 0xC4C, size 0x4, align 255
    CUtlSymbolLarge m_iszLastTarget; // offset 0xC50, size 0x8, align 8
    float32 m_flSpeed; // offset 0xC58, size 0x4, align 4
    char _pad_0C5C[0x4]; // offset 0xC5C
};
