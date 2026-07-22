#pragma once

class CWeaponTaser : public CCSWeaponBaseGun /*0x0*/  // sizeof 0x1080, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    GameTime_t m_fFireTime; // offset 0x1070, size 0x4, align 255
    int32 m_nLastAttackTick; // offset 0x1074, size 0x4, align 4
    char _pad_1078[0x8]; // offset 0x1078
};
