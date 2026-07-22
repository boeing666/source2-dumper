#pragma once

class CCitadelBaseTriggerAbility : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x11E8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbilityToTrigger; // offset 0x11D8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_SwappedToTime; // offset 0x11DC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_11E0[0x8]; // offset 0x11E0
};
