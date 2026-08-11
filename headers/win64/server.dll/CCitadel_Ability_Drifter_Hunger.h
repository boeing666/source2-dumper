#pragma once

class CCitadel_Ability_Drifter_Hunger : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1698, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecCurrentTargets; // offset 0xF70, size 0x18, align 8
    char _pad_0F88[0x4]; // offset 0xF88
    int32 m_nKillsEarned; // offset 0xF8C, size 0x4, align 4 | MNetworkEnable
    int32 m_nAssistsEarned; // offset 0xF90, size 0x4, align 4 | MNetworkEnable
    CUtlStringToken m_TypeIDDarkness; // offset 0xF94, size 0x4, align 4
    char _pad_0F98[0x700]; // offset 0xF98
};
