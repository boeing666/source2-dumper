#pragma once

class CCitadel_Ability_IceDome : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1260, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1258]; // offset 0x0
    GameTime_t m_flDomeStartTime; // offset 0x1258, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flDomeEndTime; // offset 0x125C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
};
