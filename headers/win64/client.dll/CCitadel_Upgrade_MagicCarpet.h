#pragma once

class CCitadel_Upgrade_MagicCarpet : public CCitadel_Item /*0x0*/  // sizeof 0x1850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    GameTime_t m_flFlyingStartTime; // offset 0x16E0, size 0x4, align 255
    char _pad_16E4[0x164]; // offset 0x16E4
    bool m_bFlying; // offset 0x1848, size 0x1, align 1
    bool m_bSummoning; // offset 0x1849, size 0x1, align 1
    char _pad_184A[0x6]; // offset 0x184A
};
