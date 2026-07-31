#pragma once

class CDOTA_Unit_Hero_Terrorblade : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1F08]; // offset 0x0
    ParticleIndex_t m_nFXDeath; // offset 0x1F08, size 0x4, align 255
    char _pad_1F0C[0x4]; // offset 0x1F0C
    CUtlString m_szResponseCriteria; // offset 0x1F10, size 0x8, align 8
    uint32 m_nArcanaColor; // offset 0x1F18, size 0x4, align 4
    char _pad_1F1C[0x4]; // offset 0x1F1C
};
