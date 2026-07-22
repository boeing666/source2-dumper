#pragma once

struct WeaponPurchaseTracker_t  // sizeof 0x70, align 0xFF [vtable] (client)
{
    char _pad_0000[0x8]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t > m_weaponPurchases; // offset 0x8, size 0x68, align 8
};
