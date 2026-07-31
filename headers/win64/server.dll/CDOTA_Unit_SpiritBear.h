#pragma once

class CDOTA_Unit_SpiritBear : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1F08]; // offset 0x0
    bool m_bShouldRespawn; // offset 0x1F08, size 0x1, align 1
    bool m_bStolen; // offset 0x1F09, size 0x1, align 1
    char _pad_1F0A[0x6]; // offset 0x1F0A
};
