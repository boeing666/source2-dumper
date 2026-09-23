#pragma once

class CDecoyProjectile : public CBaseCSGrenadeProjectile /*0x0*/  // sizeof 0xE50, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xE30]; // offset 0x0
    int32 m_nDecoyShotTick; // offset 0xE30, size 0x4, align 4
    int32 m_shotsRemaining; // offset 0xE34, size 0x4, align 4
    GameTime_t m_fExpireTime; // offset 0xE38, size 0x4, align 255
    char _pad_0E3C[0xC]; // offset 0xE3C
    uint16 m_decoyWeaponDefIndex; // offset 0xE48, size 0x2, align 2
    char _pad_0E4A[0x6]; // offset 0xE4A
};
