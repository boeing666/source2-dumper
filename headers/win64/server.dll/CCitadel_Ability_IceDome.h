#pragma once

class CCitadel_Ability_IceDome : public CCitadelBaseAbility /*0x0*/  // sizeof 0xFF8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xFF0]; // offset 0x0
    GameTime_t m_flDomeStartTime; // offset 0xFF0, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flDomeEndTime; // offset 0xFF4, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
};
