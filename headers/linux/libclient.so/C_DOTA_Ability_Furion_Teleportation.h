#pragma once

class C_DOTA_Ability_Furion_Teleportation : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    ParticleIndex_t m_nFXIndexStart; // offset 0x828, size 0x4, align 255
    ParticleIndex_t m_nFXIndexEnd; // offset 0x82C, size 0x4, align 255
    ParticleIndex_t m_nFXIndexEndTeam; // offset 0x830, size 0x4, align 255
    char _pad_0834[0x4]; // offset 0x834
};
