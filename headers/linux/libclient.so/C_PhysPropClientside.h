#pragma once

class C_PhysPropClientside : public C_BreakableProp /*0x0*/  // sizeof 0xED0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xEA8]; // offset 0x0
    GameTime_t m_flTouchDelta; // offset 0xEA8, size 0x4, align 255 | MNotSaved
    GameTime_t m_fDeathTime; // offset 0xEAC, size 0x4, align 255 | MNotSaved
    VectorWS m_vecDamagePosition; // offset 0xEB0, size 0xC, align 4 | MNotSaved
    Vector m_vecDamageDirection; // offset 0xEBC, size 0xC, align 4 | MNotSaved
    DamageTypes_t m_nDamageType; // offset 0xEC8, size 0x4, align 4 | MNotSaved
    char _pad_0ECC[0x4]; // offset 0xECC
};
