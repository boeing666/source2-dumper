#pragma once

class CWeaponTaser : public CCSWeaponBaseGun /*0x0*/  // sizeof 0x12B0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x12A0]; // offset 0x0
    GameTime_t m_fFireTime; // offset 0x12A0, size 0x4, align 255
    int32 m_nLastAttackTick; // offset 0x12A4, size 0x4, align 4
    char _pad_12A8[0x8]; // offset 0x12A8
};
