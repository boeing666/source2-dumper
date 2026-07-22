#pragma once

class CCitadel_Ability_FireBomb : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1300, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x12E0]; // offset 0x0
    CCitadelAutoScaledTime m_flDetonateTime; // offset 0x12E0, size 0x18, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flStartTime; // offset 0x12F8, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_12FC[0x4]; // offset 0x12FC
};
