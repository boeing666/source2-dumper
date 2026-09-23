#pragma once

class CDecoyProjectile : public CBaseCSGrenadeProjectile /*0x0*/  // sizeof 0xB80, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB58]; // offset 0x0
    int32 m_nDecoyShotTick; // offset 0xB58, size 0x4, align 4
    int32 m_shotsRemaining; // offset 0xB5C, size 0x4, align 4
    GameTime_t m_fExpireTime; // offset 0xB60, size 0x4, align 255
    char _pad_0B64[0xC]; // offset 0xB64
    uint16 m_decoyWeaponDefIndex; // offset 0xB70, size 0x2, align 2
    char _pad_0B72[0xE]; // offset 0xB72
};
