#pragma once

class CCitadelBaseTriggerAbility : public CCitadelBaseAbility /*0x0*/  // sizeof 0xF80, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbilityToTrigger; // offset 0xF70, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_SwappedToTime; // offset 0xF74, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_0F78[0x8]; // offset 0xF78
};
