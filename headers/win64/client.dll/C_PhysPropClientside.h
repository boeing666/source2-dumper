#pragma once

class C_PhysPropClientside : public C_BreakableProp /*0x0*/  // sizeof 0xFA0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    GameTime_t m_flTouchDelta; // offset 0xF70, size 0x4, align 255 | MNotSaved
    GameTime_t m_fDeathTime; // offset 0xF74, size 0x4, align 255 | MNotSaved
    VectorWS m_vecDamagePosition; // offset 0xF78, size 0xC, align 4 | MNotSaved
    Vector m_vecDamageDirection; // offset 0xF84, size 0xC, align 4 | MNotSaved
    DamageTypes_t m_nDamageType; // offset 0xF90, size 0x4, align 4 | MNotSaved
    char _pad_0F94[0xC]; // offset 0xF94
};
