#pragma once

class C_WeaponTaser : public C_CSWeaponBaseGun /*0x0*/  // sizeof 0x1F60, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1F50]; // offset 0x0
    GameTime_t m_fFireTime; // offset 0x1F50, size 0x4, align 255
    int32 m_nLastAttackTick; // offset 0x1F54, size 0x4, align 4
    char _pad_1F58[0x8]; // offset 0x1F58
};
