#pragma once

class C_DOTA_Unit_SpiritBear : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F08, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1F02]; // offset 0x0
    bool m_bShouldRespawn; // offset 0x1F02, size 0x1, align 1
    bool m_bStolen; // offset 0x1F03, size 0x1, align 1
    char _pad_1F04[0x4]; // offset 0x1F04
};
