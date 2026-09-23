#pragma once

class C_WeaponCZ75a : public C_CSWeaponBaseGun /*0x0*/  // sizeof 0x1F50, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1F40]; // offset 0x0
    bool m_bMagazineRemoved; // offset 0x1F40, size 0x1, align 1
    char _pad_1F41[0xF]; // offset 0x1F41
};
