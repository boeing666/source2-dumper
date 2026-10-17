#pragma once

class CDOTA_Unit_SpiritBear : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2028, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2020]; // offset 0x0
    bool m_bShouldRespawn; // offset 0x2020, size 0x1, align 1
    bool m_bStolen; // offset 0x2021, size 0x1, align 1
    char _pad_2022[0x6]; // offset 0x2022
};
