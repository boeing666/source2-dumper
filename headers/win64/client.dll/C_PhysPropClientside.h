#pragma once

class C_PhysPropClientside : public C_BreakableProp /*0x0*/  // sizeof 0xF40, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xF10]; // offset 0x0
    GameTime_t m_flTouchDelta; // offset 0xF10, size 0x4, align 255 | MNotSaved
    GameTime_t m_fDeathTime; // offset 0xF14, size 0x4, align 255 | MNotSaved
    VectorWS m_vecDamagePosition; // offset 0xF18, size 0xC, align 4 | MNotSaved
    Vector m_vecDamageDirection; // offset 0xF24, size 0xC, align 4 | MNotSaved
    DamageTypes_t m_nDamageType; // offset 0xF30, size 0x4, align 4 | MNotSaved
    char _pad_0F34[0xC]; // offset 0xF34
};
