#pragma once

class CDOTA_Unit_Hero_Terrorblade : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2038, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2020]; // offset 0x0
    ParticleIndex_t m_nFXDeath; // offset 0x2020, size 0x4, align 255
    char _pad_2024[0x4]; // offset 0x2024
    CUtlString m_szResponseCriteria; // offset 0x2028, size 0x8, align 8
    uint32 m_nArcanaColor; // offset 0x2030, size 0x4, align 4
    char _pad_2034[0x4]; // offset 0x2034
};
