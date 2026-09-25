#pragma once

class C_WeaponTaser : public C_CSWeaponBaseGun /*0x0*/  // sizeof 0x2DE0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x2DCC]; // offset 0x0
    GameTime_t m_fFireTime; // offset 0x2DCC, size 0x4, align 255
    int32 m_nLastAttackTick; // offset 0x2DD0, size 0x4, align 4
    char _pad_2DD4[0xC]; // offset 0x2DD4
};
