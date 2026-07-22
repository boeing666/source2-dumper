#pragma once

class CDOTA_Unit_Hero_Terrorblade : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x21F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x21D8]; // offset 0x0
    ParticleIndex_t m_nFXDeath; // offset 0x21D8, size 0x4, align 255
    char _pad_21DC[0x4]; // offset 0x21DC
    CUtlString m_szResponseCriteria; // offset 0x21E0, size 0x8, align 8
    uint32 m_nArcanaColor; // offset 0x21E8, size 0x4, align 4
    char _pad_21EC[0x4]; // offset 0x21EC
};
