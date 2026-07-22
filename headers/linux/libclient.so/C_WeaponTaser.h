#pragma once

class C_WeaponTaser : public C_CSWeaponBaseGun /*0x0*/  // sizeof 0x2BA0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x2B8C]; // offset 0x0
    GameTime_t m_fFireTime; // offset 0x2B8C, size 0x4, align 255
    int32 m_nLastAttackTick; // offset 0x2B90, size 0x4, align 4
    char _pad_2B94[0xC]; // offset 0x2B94
};
