#pragma once

class C_DOTA_Ability_Hoodwink_Bushwhack : public C_DOTABaseAbility /*0x0*/  // sizeof 0xA48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    float32 trap_radius; // offset 0x828, size 0x4, align 4
    int32 m_nProjectileHandle; // offset 0x82C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x830, size 0x4, align 255
    char _pad_0834[0x214]; // offset 0x834
};
