#pragma once

class CFuncTrain : public CBasePlatTrain /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x818]; // offset 0x0
    CHandle< CBaseEntity > m_hCurrentTarget; // offset 0x818, size 0x4, align 4
    bool m_activated; // offset 0x81C, size 0x1, align 1
    char _pad_081D[0x3]; // offset 0x81D
    CHandle< CBaseEntity > m_hEnemy; // offset 0x820, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0x824, size 0x4, align 4
    GameTime_t m_flNextBlockTime; // offset 0x828, size 0x4, align 255
    char _pad_082C[0x4]; // offset 0x82C
    CUtlSymbolLarge m_iszLastTarget; // offset 0x830, size 0x8, align 8
    float32 m_flSpeed; // offset 0x838, size 0x4, align 4
    char _pad_083C[0x4]; // offset 0x83C
};
