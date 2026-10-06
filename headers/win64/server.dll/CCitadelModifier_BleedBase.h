#pragma once

class CCitadelModifier_BleedBase : public CCitadelModifier /*0x0*/  // sizeof 0x2B0, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    GameTime_t m_flLastTickTime; // offset 0x148, size 0x4, align 255
    float32 m_flBleedPercent; // offset 0x14C, size 0x4, align 4
    char _pad_0150[0x160]; // offset 0x150
};
