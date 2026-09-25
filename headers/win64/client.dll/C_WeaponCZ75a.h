#pragma once

class C_WeaponCZ75a : public C_CSWeaponBaseGun /*0x0*/  // sizeof 0x1F60, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1F50]; // offset 0x0
    bool m_bMagazineRemoved; // offset 0x1F50, size 0x1, align 1
    char _pad_1F51[0xF]; // offset 0x1F51
};
