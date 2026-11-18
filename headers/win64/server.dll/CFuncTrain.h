#pragma once

class CFuncTrain : public CBasePlatTrain /*0x0*/  // sizeof 0x988, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x960]; // offset 0x0
    CHandle< CBaseEntity > m_hCurrentTarget; // offset 0x960, size 0x4, align 4
    bool m_activated; // offset 0x964, size 0x1, align 1
    char _pad_0965[0x3]; // offset 0x965
    CHandle< CBaseEntity > m_hEnemy; // offset 0x968, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0x96C, size 0x4, align 4
    GameTime_t m_flNextBlockTime; // offset 0x970, size 0x4, align 255
    char _pad_0974[0x4]; // offset 0x974
    CUtlSymbolLarge m_iszLastTarget; // offset 0x978, size 0x8, align 8
    float32 m_flSpeed; // offset 0x980, size 0x4, align 4
    char _pad_0984[0x4]; // offset 0x984
};
