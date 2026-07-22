#pragma once

class C_PhysPropClientside : public C_BreakableProp /*0x0*/  // sizeof 0xDD0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xDA8]; // offset 0x0
    GameTime_t m_flTouchDelta; // offset 0xDA8, size 0x4, align 255 | MNotSaved
    GameTime_t m_fDeathTime; // offset 0xDAC, size 0x4, align 255 | MNotSaved
    VectorWS m_vecDamagePosition; // offset 0xDB0, size 0xC, align 4 | MNotSaved
    Vector m_vecDamageDirection; // offset 0xDBC, size 0xC, align 4 | MNotSaved
    DamageTypes_t m_nDamageType; // offset 0xDC8, size 0x4, align 4 | MNotSaved
    char _pad_0DCC[0x4]; // offset 0xDCC
};
