#pragma once

class C_WeaponTaser : public C_CSWeaponBaseGun /*0x0*/  // sizeof 0x1FA0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1F90]; // offset 0x0
    GameTime_t m_fFireTime; // offset 0x1F90, size 0x4, align 255
    int32 m_nLastAttackTick; // offset 0x1F94, size 0x4, align 4
    char _pad_1F98[0x8]; // offset 0x1F98
};
