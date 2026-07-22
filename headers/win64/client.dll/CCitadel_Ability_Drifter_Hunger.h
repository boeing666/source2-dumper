#pragma once

class CCitadel_Ability_Drifter_Hunger : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1900, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecCurrentTargets; // offset 0x11D8, size 0x18, align 8
    char _pad_11F0[0x4]; // offset 0x11F0
    int32 m_nKillsEarned; // offset 0x11F4, size 0x4, align 4 | MNetworkEnable
    int32 m_nAssistsEarned; // offset 0x11F8, size 0x4, align 4 | MNetworkEnable
    CUtlStringToken m_TypeIDDarkness; // offset 0x11FC, size 0x4, align 4
    char _pad_1200[0x700]; // offset 0x1200
};
