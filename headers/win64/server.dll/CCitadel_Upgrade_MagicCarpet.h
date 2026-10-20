#pragma once

class CCitadel_Upgrade_MagicCarpet : public CCitadel_Item /*0x0*/  // sizeof 0x1620, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    GameTime_t m_flFlyingStartTime; // offset 0x14B0, size 0x4, align 255
    char _pad_14B4[0x164]; // offset 0x14B4
    bool m_bFlying; // offset 0x1618, size 0x1, align 1
    bool m_bSummoning; // offset 0x1619, size 0x1, align 1
    char _pad_161A[0x6]; // offset 0x161A
};
