#pragma once

class CCitadel_Ability_StickyBomb : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1670, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11DC]; // offset 0x0
    CHandle< C_BaseEntity > m_hAutoTarget; // offset 0x11DC, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flHookEndTime; // offset 0x11E0, size 0x4, align 255 | MNetworkEnable
    float32 m_flBombBonusHits; // offset 0x11E4, size 0x4, align 4 | MNetworkEnable
    float32 m_flBombBonusKills; // offset 0x11E8, size 0x4, align 4 | MNetworkEnable
    char _pad_11EC[0x484]; // offset 0x11EC
};
