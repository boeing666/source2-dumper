#pragma once

class CDOTA_Modifier_Clinkz_Infernal_Shred_ArmorPiercing : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 max_armor_piercing_pct; // offset 0x1A78, size 0x4, align 4
    int32 allowed_particle_arrows; // offset 0x1A7C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A80, size 0x4, align 255
    ParticleIndex_t m_nFXStackIndex; // offset 0x1A84, size 0x4, align 255
};
