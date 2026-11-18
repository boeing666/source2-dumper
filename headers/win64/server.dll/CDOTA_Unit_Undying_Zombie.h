#pragma once

class CDOTA_Unit_Undying_Zombie : public CDOTA_BaseNPC_Creep /*0x0*/  // sizeof 0x1A78, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CountdownTimer m_ctRespawn; // offset 0x1A58, size 0x18, align 8
    CDOTA_BaseNPC* m_pTombstone; // offset 0x1A70, size 0x8, align 8
};
