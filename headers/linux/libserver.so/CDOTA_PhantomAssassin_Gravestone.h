#pragma once

class CDOTA_PhantomAssassin_Gravestone : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1B90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B88]; // offset 0x0
    PlayerID_t m_nVictimPlayerID; // offset 0x1B88, size 0x4, align 255
    char _pad_1B8C[0x4]; // offset 0x1B8C
};
