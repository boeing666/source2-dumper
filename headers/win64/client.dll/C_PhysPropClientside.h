#pragma once

class C_PhysPropClientside : public C_BreakableProp /*0x0*/  // sizeof 0x1320, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x12F0]; // offset 0x0
    GameTime_t m_flTouchDelta; // offset 0x12F0, size 0x4, align 255 | MNotSaved
    GameTime_t m_fDeathTime; // offset 0x12F4, size 0x4, align 255 | MNotSaved
    VectorWS m_vecDamagePosition; // offset 0x12F8, size 0xC, align 4 | MNotSaved
    Vector m_vecDamageDirection; // offset 0x1304, size 0xC, align 4 | MNotSaved
    DamageTypes_t m_nDamageType; // offset 0x1310, size 0x4, align 4 | MNotSaved
    char _pad_1314[0xC]; // offset 0x1314
};
