#pragma once

class CDOTA_Ability_Nevermore_Shadowraze : public CDOTABaseAbility /*0x0*/  // sizeof 0x590, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x580, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x584, size 0x4, align 255
    float32 cooldown_reduction_on_hero_hit; // offset 0x588, size 0x4, align 4
    bool m_bReadyToSetCooldown; // offset 0x58C, size 0x1, align 1
    char _pad_058D[0x3]; // offset 0x58D
};
