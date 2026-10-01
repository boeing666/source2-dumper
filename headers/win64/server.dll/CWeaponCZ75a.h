#pragma once

class CWeaponCZ75a : public CCSWeaponBaseGun /*0x0*/  // sizeof 0x12B0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x12A0]; // offset 0x0
    bool m_bMagazineRemoved; // offset 0x12A0, size 0x1, align 1
    char _pad_12A1[0xF]; // offset 0x12A1
};
