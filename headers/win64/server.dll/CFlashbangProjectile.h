#pragma once

class CFlashbangProjectile : public CBaseCSGrenadeProjectile /*0x0*/  // sizeof 0xB50, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB40]; // offset 0x0
    float32 m_flTimeToDetonate; // offset 0xB40, size 0x4, align 4
    uint8 m_numOpponentsHit; // offset 0xB44, size 0x1, align 1
    uint8 m_numTeammatesHit; // offset 0xB45, size 0x1, align 1
    char _pad_0B46[0xA]; // offset 0xB46
};
