#pragma once

class CWeaponCZ75a : public CCSWeaponBaseGun /*0x0*/  // sizeof 0x1570, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1568]; // offset 0x0
    bool m_bMagazineRemoved; // offset 0x1568, size 0x1, align 1
    char _pad_1569[0x7]; // offset 0x1569
};
