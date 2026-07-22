#pragma once

class CFlashbangProjectile : public CBaseCSGrenadeProjectile /*0x0*/  // sizeof 0xD40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD38]; // offset 0x0
    float32 m_flTimeToDetonate; // offset 0xD38, size 0x4, align 4
    uint8 m_numOpponentsHit; // offset 0xD3C, size 0x1, align 1
    uint8 m_numTeammatesHit; // offset 0xD3D, size 0x1, align 1
    char _pad_0D3E[0x2]; // offset 0xD3E
};
