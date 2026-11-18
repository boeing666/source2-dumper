#pragma once

class C_DOTA_Unit_Hero_Terrorblade : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x20B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x209C]; // offset 0x0
    ParticleIndex_t m_nFXDeath; // offset 0x209C, size 0x4, align 255
    CUtlString m_szResponseCriteria; // offset 0x20A0, size 0x8, align 8
    uint32 m_nArcanaColor; // offset 0x20A8, size 0x4, align 4
    char _pad_20AC[0x4]; // offset 0x20AC
};
