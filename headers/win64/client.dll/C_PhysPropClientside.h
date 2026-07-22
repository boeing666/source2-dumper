#pragma once

class C_PhysPropClientside : public C_BreakableProp /*0x0*/  // sizeof 0xE50, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xE20]; // offset 0x0
    GameTime_t m_flTouchDelta; // offset 0xE20, size 0x4, align 255 | MNotSaved
    GameTime_t m_fDeathTime; // offset 0xE24, size 0x4, align 255 | MNotSaved
    Vector m_vecDamagePosition; // offset 0xE28, size 0xC, align 4 | MNotSaved
    Vector m_vecDamageDirection; // offset 0xE34, size 0xC, align 4 | MNotSaved
    DamageTypes_t m_nDamageType; // offset 0xE40, size 0x4, align 4 | MNotSaved
    char _pad_0E44[0xC]; // offset 0xE44
};
