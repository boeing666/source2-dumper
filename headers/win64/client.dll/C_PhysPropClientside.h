#pragma once

class C_PhysPropClientside : public C_BreakableProp /*0x0*/  // sizeof 0xDC0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xD90]; // offset 0x0
    GameTime_t m_flTouchDelta; // offset 0xD90, size 0x4, align 255 | MNotSaved
    GameTime_t m_fDeathTime; // offset 0xD94, size 0x4, align 255 | MNotSaved
    VectorWS m_vecDamagePosition; // offset 0xD98, size 0xC, align 4 | MNotSaved
    Vector m_vecDamageDirection; // offset 0xDA4, size 0xC, align 4 | MNotSaved
    DamageTypes_t m_nDamageType; // offset 0xDB0, size 0x4, align 4 | MNotSaved
    char _pad_0DB4[0xC]; // offset 0xDB4
};
