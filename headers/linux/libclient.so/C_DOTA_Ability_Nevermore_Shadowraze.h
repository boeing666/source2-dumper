#pragma once

class C_DOTA_Ability_Nevermore_Shadowraze : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x824, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x828, size 0x4, align 255
    float32 cooldown_reduction_on_hero_hit; // offset 0x82C, size 0x4, align 4
    bool m_bReadyToSetCooldown; // offset 0x830, size 0x1, align 1
    char _pad_0831[0x7]; // offset 0x831
};
