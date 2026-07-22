#pragma once

class C_WeaponTaser : public C_CSWeaponBaseGun /*0x0*/  // sizeof 0x1D20, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1D10]; // offset 0x0
    GameTime_t m_fFireTime; // offset 0x1D10, size 0x4, align 255
    int32 m_nLastAttackTick; // offset 0x1D14, size 0x4, align 4
    char _pad_1D18[0x8]; // offset 0x1D18
};
