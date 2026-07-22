#pragma once

class CDOTA_Ability_Techies_MutuallyAssuredDestruction : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 radius; // offset 0x580, size 0x4, align 4
    float32 explosion_delay; // offset 0x584, size 0x4, align 4
    float32 max_mana_pct_as_damage; // offset 0x588, size 0x4, align 4
    float32 base_damage; // offset 0x58C, size 0x4, align 4
    GameTime_t m_ActiveExplodeTime; // offset 0x590, size 0x4, align 255
    GameTime_t m_PassiveExplodeTime; // offset 0x594, size 0x4, align 255
    char _pad_0598[0x18]; // offset 0x598
    CHandle< CBaseEntity > m_hPassiveMAD; // offset 0x5B0, size 0x4, align 4
    char _pad_05B4[0x4]; // offset 0x5B4
};
