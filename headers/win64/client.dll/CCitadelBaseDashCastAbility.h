#pragma once

class CCitadelBaseDashCastAbility : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1270, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbilityToTrigger; // offset 0x11D8, size 0x4, align 4
    GameTime_t m_flDashCastStartTime; // offset 0x11DC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    Vector m_vDashCastDir; // offset 0x11E0, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_11EC[0x84]; // offset 0x11EC
};
