#pragma once

class C_PhysPropClientside : public C_BreakableProp /*0x0*/  // sizeof 0xC60, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xC30]; // offset 0x0
    GameTime_t m_flTouchDelta; // offset 0xC30, size 0x4, align 255 | MNotSaved
    GameTime_t m_fDeathTime; // offset 0xC34, size 0x4, align 255 | MNotSaved
    VectorWS m_vecDamagePosition; // offset 0xC38, size 0xC, align 4 | MNotSaved
    Vector m_vecDamageDirection; // offset 0xC44, size 0xC, align 4 | MNotSaved
    DamageTypes_t m_nDamageType; // offset 0xC50, size 0x4, align 4 | MNotSaved
    char _pad_0C54[0xC]; // offset 0xC54
};
