#pragma once

class CCitadel_Upgrade_MagicCarpet : public CCitadel_Item /*0x0*/  // sizeof 0x1088, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    GameTime_t m_flFlyingStartTime; // offset 0xF78, size 0x4, align 255
    char _pad_0F7C[0x104]; // offset 0xF7C
    bool m_bFlying; // offset 0x1080, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bSummoning; // offset 0x1081, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_1082[0x6]; // offset 0x1082
};
