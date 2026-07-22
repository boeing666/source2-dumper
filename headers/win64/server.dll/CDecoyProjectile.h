#pragma once

class CDecoyProjectile : public CBaseCSGrenadeProjectile /*0x0*/  // sizeof 0xAA0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA78]; // offset 0x0
    int32 m_nDecoyShotTick; // offset 0xA78, size 0x4, align 4
    int32 m_shotsRemaining; // offset 0xA7C, size 0x4, align 4
    GameTime_t m_fExpireTime; // offset 0xA80, size 0x4, align 255
    char _pad_0A84[0xC]; // offset 0xA84
    uint16 m_decoyWeaponDefIndex; // offset 0xA90, size 0x2, align 2
    char _pad_0A92[0xE]; // offset 0xA92
};
