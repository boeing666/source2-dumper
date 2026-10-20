#pragma once

class CCitadel_Ability_StickyBomb : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1D28, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E4]; // offset 0x0
    CHandle< C_BaseEntity > m_hAutoTarget; // offset 0x16E4, size 0x4, align 4
    GameTime_t m_flHookEndTime; // offset 0x16E8, size 0x4, align 255
    float32 m_flBombBonusHits; // offset 0x16EC, size 0x4, align 4
    float32 m_flBombBonusKills; // offset 0x16F0, size 0x4, align 4
    char _pad_16F4[0x634]; // offset 0x16F4
};
