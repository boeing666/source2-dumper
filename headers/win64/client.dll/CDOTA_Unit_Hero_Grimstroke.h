#pragma once

class CDOTA_Unit_Hero_Grimstroke : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1D88, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1D80]; // offset 0x0
    ParticleIndex_t m_nFXDeath; // offset 0x1D80, size 0x4, align 255
    char _pad_1D84[0x4]; // offset 0x1D84
};
