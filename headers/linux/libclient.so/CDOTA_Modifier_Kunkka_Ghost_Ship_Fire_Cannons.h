#pragma once

class CDOTA_Modifier_Kunkka_Ghost_Ship_Fire_Cannons : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_flDistance; // offset 0x1AF8, size 0x4, align 4
    float32 m_flSpeed; // offset 0x1AFC, size 0x4, align 4
    int32 m_nNumCannons; // offset 0x1B00, size 0x4, align 4
    float32 m_flProjectileRadius; // offset 0x1B04, size 0x4, align 4
    int32 m_hGhostShipProjectile; // offset 0x1B08, size 0x4, align 4
    int32 m_nVolleyNumber; // offset 0x1B0C, size 0x4, align 4
};
