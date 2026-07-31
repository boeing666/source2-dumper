#pragma once

class C_DOTA_Unit_Undying_Zombie : public C_DOTA_BaseNPC_Creep /*0x0*/  // sizeof 0x1B60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B40]; // offset 0x0
    CountdownTimer m_ctRespawn; // offset 0x1B40, size 0x18, align 8
    C_DOTA_BaseNPC* m_pTombstone; // offset 0x1B58, size 0x8, align 8
};
