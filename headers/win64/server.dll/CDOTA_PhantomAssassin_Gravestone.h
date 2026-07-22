#pragma once

class CDOTA_PhantomAssassin_Gravestone : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x18A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18A0]; // offset 0x0
    PlayerID_t m_nVictimPlayerID; // offset 0x18A0, size 0x4, align 255
    char _pad_18A4[0x4]; // offset 0x18A4
};
