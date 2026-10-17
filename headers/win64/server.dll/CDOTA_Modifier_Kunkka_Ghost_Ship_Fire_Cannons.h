#pragma once

class CDOTA_Modifier_Kunkka_Ghost_Ship_Fire_Cannons : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_flDistance; // offset 0x1AA8, size 0x4, align 4
    float32 m_flSpeed; // offset 0x1AAC, size 0x4, align 4
    int32 m_nNumCannons; // offset 0x1AB0, size 0x4, align 4
    float32 m_flProjectileRadius; // offset 0x1AB4, size 0x4, align 4
    int32 m_hGhostShipProjectile; // offset 0x1AB8, size 0x4, align 4
    int32 m_nVolleyNumber; // offset 0x1ABC, size 0x4, align 4
};
