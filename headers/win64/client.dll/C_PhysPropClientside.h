#pragma once

class C_PhysPropClientside : public C_BreakableProp /*0x0*/  // sizeof 0x1410, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x13E0]; // offset 0x0
    GameTime_t m_flTouchDelta; // offset 0x13E0, size 0x4, align 255 | MNotSaved
    GameTime_t m_fDeathTime; // offset 0x13E4, size 0x4, align 255 | MNotSaved
    VectorWS m_vecDamagePosition; // offset 0x13E8, size 0xC, align 4 | MNotSaved
    Vector m_vecDamageDirection; // offset 0x13F4, size 0xC, align 4 | MNotSaved
    DamageTypes_t m_nDamageType; // offset 0x1400, size 0x4, align 4 | MNotSaved
    char _pad_1404[0xC]; // offset 0x1404
};
