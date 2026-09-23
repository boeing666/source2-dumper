#pragma once

class CFlashbangProjectile : public CBaseCSGrenadeProjectile /*0x0*/  // sizeof 0xE20, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xE18]; // offset 0x0
    float32 m_flTimeToDetonate; // offset 0xE18, size 0x4, align 4
    uint8 m_numOpponentsHit; // offset 0xE1C, size 0x1, align 1
    uint8 m_numTeammatesHit; // offset 0xE1D, size 0x1, align 1
    char _pad_0E1E[0x2]; // offset 0xE1E
};
