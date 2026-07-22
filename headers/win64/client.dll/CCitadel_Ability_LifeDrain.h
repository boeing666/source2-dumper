#pragma once

class CCitadel_Ability_LifeDrain : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x12E8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    GameTime_t m_tDrainLifeStopTime; // offset 0x11D8, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_tSlowStartTime; // offset 0x11DC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_tSlowStopTime; // offset 0x11E0, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_11E4[0x104]; // offset 0x11E4
};
