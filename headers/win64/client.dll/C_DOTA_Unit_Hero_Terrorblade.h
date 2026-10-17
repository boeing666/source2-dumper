#pragma once

class C_DOTA_Unit_Hero_Terrorblade : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1EA0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1E88]; // offset 0x0
    ParticleIndex_t m_nFXDeath; // offset 0x1E88, size 0x4, align 255
    char _pad_1E8C[0x4]; // offset 0x1E8C
    CUtlString m_szResponseCriteria; // offset 0x1E90, size 0x8, align 8
    uint32 m_nArcanaColor; // offset 0x1E98, size 0x4, align 4
    char _pad_1E9C[0x4]; // offset 0x1E9C
};
