#pragma once

class CSurvivorsPowerUp_CounterHelix : public CSurvivorsPowerUp_AreaAttack_Circle /*0x0*/  // sizeof 0x818, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x808]; // offset 0x0
    float32 m_flChanceToCounter; // offset 0x808, size 0x4, align 4
    float32 m_flDelayBetweenCounters; // offset 0x80C, size 0x4, align 4
    char _pad_0810[0x8]; // offset 0x810
};
