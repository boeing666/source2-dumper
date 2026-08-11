#pragma once

class CCitadel_Ability_Frank_Revive : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1590, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF72]; // offset 0x0
    bool m_bReviveIsActive; // offset 0xF72, size 0x1, align 1 | MNetworkEnable
    char _pad_0F73[0x1]; // offset 0xF73
    GameTime_t m_TimeOfDeath; // offset 0xF74, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_TimeOfRevive; // offset 0xF78, size 0x4, align 255 | MNetworkEnable
    float32 m_flTotalPendingHeal; // offset 0xF7C, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_0F80[0x610]; // offset 0xF80
};
