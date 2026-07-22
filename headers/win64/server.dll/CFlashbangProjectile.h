#pragma once

class CFlashbangProjectile : public CBaseCSGrenadeProjectile /*0x0*/  // sizeof 0xA70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA60]; // offset 0x0
    float32 m_flTimeToDetonate; // offset 0xA60, size 0x4, align 4
    uint8 m_numOpponentsHit; // offset 0xA64, size 0x1, align 1
    uint8 m_numTeammatesHit; // offset 0xA65, size 0x1, align 1
    char _pad_0A66[0xA]; // offset 0xA66
};
