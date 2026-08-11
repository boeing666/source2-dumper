#pragma once

class CCitadel_Ability_IceBeam : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2390, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    bool m_bIceBeaming; // offset 0xF70, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0F71[0x40B]; // offset 0xF71
    GameTime_t m_flNextDamageTick; // offset 0x137C, size 0x4, align 255
    CCitadelAbilityBeam_t m_beam; // offset 0x1380, size 0xFC0, align 255 | MNetworkEnable
    char _pad_2340[0x38]; // offset 0x2340
    CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // offset 0x2378, size 0x18, align 8
};
