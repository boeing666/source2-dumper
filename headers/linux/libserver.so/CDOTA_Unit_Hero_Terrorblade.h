#pragma once

class CDOTA_Unit_Hero_Terrorblade : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2310, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x22F8]; // offset 0x0
    ParticleIndex_t m_nFXDeath; // offset 0x22F8, size 0x4, align 255
    char _pad_22FC[0x4]; // offset 0x22FC
    CUtlString m_szResponseCriteria; // offset 0x2300, size 0x8, align 8
    uint32 m_nArcanaColor; // offset 0x2308, size 0x4, align 4
    char _pad_230C[0x4]; // offset 0x230C
};
