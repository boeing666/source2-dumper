#pragma once

class CCitadelModifier_BleedBase : public CCitadelModifier /*0x0*/  // sizeof 0x298, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    GameTime_t m_flLastTickTime; // offset 0x130, size 0x4, align 255
    float32 m_flBleedPercent; // offset 0x134, size 0x4, align 4
    char _pad_0138[0x160]; // offset 0x138
};
