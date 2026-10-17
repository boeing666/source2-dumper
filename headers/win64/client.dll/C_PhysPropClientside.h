#pragma once

class C_PhysPropClientside : public C_BreakableProp /*0x0*/  // sizeof 0xD60, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xD30]; // offset 0x0
    GameTime_t m_flTouchDelta; // offset 0xD30, size 0x4, align 255 | MNotSaved
    GameTime_t m_fDeathTime; // offset 0xD34, size 0x4, align 255 | MNotSaved
    VectorWS m_vecDamagePosition; // offset 0xD38, size 0xC, align 4 | MNotSaved
    Vector m_vecDamageDirection; // offset 0xD44, size 0xC, align 4 | MNotSaved
    DamageTypes_t m_nDamageType; // offset 0xD50, size 0x4, align 4 | MNotSaved
    char _pad_0D54[0xC]; // offset 0xD54
};
