#pragma once

class CCitadel_Ability_Perched_Predator : public CCitadelBaseAbility /*0x0*/  // sizeof 0x11F8, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x11F0]; // offset 0x0
    CHandle< CBaseEntity > m_hActiveProjectile; // offset 0x11F0, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_11F4[0x4]; // offset 0x11F4
};
