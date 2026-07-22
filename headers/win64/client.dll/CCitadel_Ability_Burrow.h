#pragma once

class CCitadel_Ability_Burrow : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1690, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1658]; // offset 0x0
    bool m_bInGround; // offset 0x1658, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_1659[0x3]; // offset 0x1659
    GameTime_t m_flLastDamageTime; // offset 0x165C, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_SpinEndTime; // offset 0x1660, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_1664[0x2C]; // offset 0x1664
};
