#pragma once

class CDOTA_Ability_Techies_MutuallyAssuredDestruction : public CDOTABaseAbility /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 radius; // offset 0x85C, size 0x4, align 4
    float32 explosion_delay; // offset 0x860, size 0x4, align 4
    float32 max_mana_pct_as_damage; // offset 0x864, size 0x4, align 4
    float32 base_damage; // offset 0x868, size 0x4, align 4
    GameTime_t m_ActiveExplodeTime; // offset 0x86C, size 0x4, align 255
    GameTime_t m_PassiveExplodeTime; // offset 0x870, size 0x4, align 255
    char _pad_0874[0x1C]; // offset 0x874
    CHandle< CBaseEntity > m_hPassiveMAD; // offset 0x890, size 0x4, align 4
    char _pad_0894[0x4]; // offset 0x894
};
