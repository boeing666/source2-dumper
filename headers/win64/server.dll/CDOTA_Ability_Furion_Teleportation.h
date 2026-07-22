#pragma once

class CDOTA_Ability_Furion_Teleportation : public CDOTABaseAbility /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    ParticleIndex_t m_nFXIndexStart; // offset 0x580, size 0x4, align 255
    ParticleIndex_t m_nFXIndexEnd; // offset 0x584, size 0x4, align 255
    ParticleIndex_t m_nFXIndexEndTeam; // offset 0x588, size 0x4, align 255
    char _pad_058C[0x4]; // offset 0x58C
};
