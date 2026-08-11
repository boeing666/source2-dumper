#pragma once

struct WeaponPurchaseTracker_t  // sizeof 0x70, align 0xFF [vtable] (server)
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t > m_weaponPurchases; // offset 0x8, size 0x68, align 8
};
