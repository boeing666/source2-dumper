#pragma once

class CDecoyProjectile : public CBaseCSGrenadeProjectile /*0x0*/  // sizeof 0xD70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD50]; // offset 0x0
    int32 m_nDecoyShotTick; // offset 0xD50, size 0x4, align 4
    int32 m_shotsRemaining; // offset 0xD54, size 0x4, align 4
    GameTime_t m_fExpireTime; // offset 0xD58, size 0x4, align 255
    char _pad_0D5C[0xC]; // offset 0xD5C
    uint16 m_decoyWeaponDefIndex; // offset 0xD68, size 0x2, align 2
    char _pad_0D6A[0x6]; // offset 0xD6A
};
