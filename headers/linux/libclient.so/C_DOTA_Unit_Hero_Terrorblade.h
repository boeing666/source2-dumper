#pragma once

class C_DOTA_Unit_Hero_Terrorblade : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F18, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1F04]; // offset 0x0
    ParticleIndex_t m_nFXDeath; // offset 0x1F04, size 0x4, align 255
    CUtlString m_szResponseCriteria; // offset 0x1F08, size 0x8, align 8
    uint32 m_nArcanaColor; // offset 0x1F10, size 0x4, align 4
    char _pad_1F14[0x4]; // offset 0x1F14
};
