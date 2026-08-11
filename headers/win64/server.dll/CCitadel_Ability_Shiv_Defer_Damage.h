#pragma once

class CCitadel_Ability_Shiv_Defer_Damage : public CCitadelBaseShivAbility /*0x0*/  // sizeof 0x1198, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x1170]; // offset 0x0
    float32 m_flTotalPendingDamage; // offset 0x1170, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_1174[0x1C]; // offset 0x1174
    GameTime_t m_flLastDeferredDamageApplicationTime; // offset 0x1190, size 0x4, align 255
    char _pad_1194[0x4]; // offset 0x1194
};
