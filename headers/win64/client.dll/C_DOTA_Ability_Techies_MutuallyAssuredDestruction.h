#pragma once

class C_DOTA_Ability_Techies_MutuallyAssuredDestruction : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 radius; // offset 0x6A8, size 0x4, align 4
    float32 explosion_delay; // offset 0x6AC, size 0x4, align 4
    float32 max_mana_pct_as_damage; // offset 0x6B0, size 0x4, align 4
    float32 base_damage; // offset 0x6B4, size 0x4, align 4
    GameTime_t m_ActiveExplodeTime; // offset 0x6B8, size 0x4, align 255
    GameTime_t m_PassiveExplodeTime; // offset 0x6BC, size 0x4, align 255
    char _pad_06C0[0x18]; // offset 0x6C0
    CHandle< C_BaseEntity > m_hPassiveMAD; // offset 0x6D8, size 0x4, align 4
    char _pad_06DC[0x4]; // offset 0x6DC
};
