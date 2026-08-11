#pragma once

class CCitadelBaseDashCastAbility : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1008, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbilityToTrigger; // offset 0xF70, size 0x4, align 4
    GameTime_t m_flDashCastStartTime; // offset 0xF74, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    Vector m_vDashCastDir; // offset 0xF78, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_0F84[0x84]; // offset 0xF84
};
