#pragma once

class CDOTA_Ability_Nevermore_Shadowraze : public CDOTABaseAbility /*0x0*/  // sizeof 0x870, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x85C, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x860, size 0x4, align 255
    float32 cooldown_reduction_on_hero_hit; // offset 0x864, size 0x4, align 4
    bool m_bReadyToSetCooldown; // offset 0x868, size 0x1, align 1
    char _pad_0869[0x7]; // offset 0x869
};
