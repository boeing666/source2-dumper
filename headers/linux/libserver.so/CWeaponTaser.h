#pragma once

class CWeaponTaser : public CCSWeaponBaseGun /*0x0*/  // sizeof 0x1570, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1568]; // offset 0x0
    GameTime_t m_fFireTime; // offset 0x1568, size 0x4, align 255
    int32 m_nLastAttackTick; // offset 0x156C, size 0x4, align 4
};
