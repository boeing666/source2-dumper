#pragma once

class CCitadel_Ability_StickyBomb : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1408, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF74]; // offset 0x0
    CHandle< CBaseEntity > m_hAutoTarget; // offset 0xF74, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flHookEndTime; // offset 0xF78, size 0x4, align 255 | MNetworkEnable
    float32 m_flBombBonusHits; // offset 0xF7C, size 0x4, align 4 | MNetworkEnable
    float32 m_flBombBonusKills; // offset 0xF80, size 0x4, align 4 | MNetworkEnable
    char _pad_0F84[0x484]; // offset 0xF84
};
