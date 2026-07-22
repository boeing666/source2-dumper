#pragma once

class CCitadel_Upgrade_MagicCarpet : public CCitadel_Item /*0x0*/  // sizeof 0x12E8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    GameTime_t m_flFlyingStartTime; // offset 0x11D8, size 0x4, align 255
    char _pad_11DC[0x104]; // offset 0x11DC
    bool m_bFlying; // offset 0x12E0, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bSummoning; // offset 0x12E1, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_12E2[0x6]; // offset 0x12E2
};
