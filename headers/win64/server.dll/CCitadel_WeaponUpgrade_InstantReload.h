#pragma once

class CCitadel_WeaponUpgrade_InstantReload : public CCitadel_Item /*0x0*/  // sizeof 0xF80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    bool m_bIsManualReloading; // offset 0xF78, size 0x1, align 1
    char _pad_0F79[0x7]; // offset 0xF79
};
