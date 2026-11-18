#pragma once

class C_DOTA_Ability_Techies_MutuallyAssuredDestruction : public C_DOTABaseAbility /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    float32 radius; // offset 0x828, size 0x4, align 4
    float32 explosion_delay; // offset 0x82C, size 0x4, align 4
    float32 max_mana_pct_as_damage; // offset 0x830, size 0x4, align 4
    float32 base_damage; // offset 0x834, size 0x4, align 4
    ParticleIndex_t m_castParticle; // offset 0x838, size 0x4, align 255
    GameTime_t m_ActiveExplodeTime; // offset 0x83C, size 0x4, align 255
    GameTime_t m_PassiveExplodeTime; // offset 0x840, size 0x4, align 255
    char _pad_0844[0x1C]; // offset 0x844
    CHandle< C_BaseEntity > m_hPassiveMAD; // offset 0x860, size 0x4, align 4
    char _pad_0864[0x4]; // offset 0x864
};
