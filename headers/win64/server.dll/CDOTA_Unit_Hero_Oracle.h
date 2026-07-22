#pragma once

class CDOTA_Unit_Hero_Oracle : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1F00]; // offset 0x0
    ParticleIndex_t m_nFXDeath; // offset 0x1F00, size 0x4, align 255
    char _pad_1F04[0x4]; // offset 0x1F04
};
