#pragma once

class CCitadel_Ability_PassiveBeefy : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1290, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF88]; // offset 0x0
    GameTime_t m_flLastHealTime; // offset 0xF88, size 0x4, align 255
    float32 m_flTotalPendingHeal; // offset 0xF8C, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_0F90[0x300]; // offset 0xF90
};
