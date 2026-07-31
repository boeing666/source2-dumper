#pragma once

class CDOTA_Modifier_Kunkka_Ghost_Ship_Fire_Cannons : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 m_flDistance; // offset 0x1A78, size 0x4, align 4
    float32 m_flSpeed; // offset 0x1A7C, size 0x4, align 4
    int32 m_nNumCannons; // offset 0x1A80, size 0x4, align 4
    float32 m_flProjectileRadius; // offset 0x1A84, size 0x4, align 4
    int32 m_hGhostShipProjectile; // offset 0x1A88, size 0x4, align 4
    int32 m_nVolleyNumber; // offset 0x1A8C, size 0x4, align 4
};
