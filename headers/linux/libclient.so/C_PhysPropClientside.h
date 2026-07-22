#pragma once

class C_PhysPropClientside : public C_BreakableProp /*0x0*/  // sizeof 0x12A0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1278]; // offset 0x0
    GameTime_t m_flTouchDelta; // offset 0x1278, size 0x4, align 255 | MNotSaved
    GameTime_t m_fDeathTime; // offset 0x127C, size 0x4, align 255 | MNotSaved
    VectorWS m_vecDamagePosition; // offset 0x1280, size 0xC, align 4 | MNotSaved
    Vector m_vecDamageDirection; // offset 0x128C, size 0xC, align 4 | MNotSaved
    DamageTypes_t m_nDamageType; // offset 0x1298, size 0x4, align 4 | MNotSaved
    char _pad_129C[0x4]; // offset 0x129C
};
