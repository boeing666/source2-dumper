#pragma once

class C_DOTA_Ability_Techies_MutuallyAssuredDestruction : public C_DOTABaseAbility /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 radius; // offset 0x824, size 0x4, align 4
    float32 explosion_delay; // offset 0x828, size 0x4, align 4
    float32 max_mana_pct_as_damage; // offset 0x82C, size 0x4, align 4
    float32 base_damage; // offset 0x830, size 0x4, align 4
    GameTime_t m_ActiveExplodeTime; // offset 0x834, size 0x4, align 255
    GameTime_t m_PassiveExplodeTime; // offset 0x838, size 0x4, align 255
    char _pad_083C[0x1C]; // offset 0x83C
    CHandle< C_BaseEntity > m_hPassiveMAD; // offset 0x858, size 0x4, align 4
    char _pad_085C[0x4]; // offset 0x85C
};
