#pragma once

class CCitadel_Ability_Frank_Revive : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x17F8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11DA]; // offset 0x0
    bool m_bReviveIsActive; // offset 0x11DA, size 0x1, align 1 | MNetworkEnable
    char _pad_11DB[0x1]; // offset 0x11DB
    GameTime_t m_TimeOfDeath; // offset 0x11DC, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_TimeOfRevive; // offset 0x11E0, size 0x4, align 255 | MNetworkEnable
    float32 m_flTotalPendingHeal; // offset 0x11E4, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_11E8[0x610]; // offset 0x11E8
};
