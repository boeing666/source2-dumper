#pragma once

class CCitadel_Upgrade_MagicCarpet : public CCitadel_Item /*0x0*/  // sizeof 0x1848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    GameTime_t m_flFlyingStartTime; // offset 0x16D8, size 0x4, align 255
    char _pad_16DC[0x164]; // offset 0x16DC
    bool m_bFlying; // offset 0x1840, size 0x1, align 1
    bool m_bSummoning; // offset 0x1841, size 0x1, align 1
    char _pad_1842[0x6]; // offset 0x1842
};
