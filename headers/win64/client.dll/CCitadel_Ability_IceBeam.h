#pragma once

class CCitadel_Ability_IceBeam : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2708, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    bool m_bIceBeaming; // offset 0x11D8, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_11D9[0x40B]; // offset 0x11D9
    GameTime_t m_flNextDamageTick; // offset 0x15E4, size 0x4, align 255
    CCitadelAbilityBeam_t m_beam; // offset 0x15E8, size 0x10D0, align 255 | MNetworkEnable
    char _pad_26B8[0x38]; // offset 0x26B8
    CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // offset 0x26F0, size 0x18, align 8
};
