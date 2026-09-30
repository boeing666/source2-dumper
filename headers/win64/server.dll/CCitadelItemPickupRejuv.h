#pragma once

class CCitadelItemPickupRejuv : public CCitadelItemPickup /*0x0*/  // sizeof 0x5770, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x5500]; // offset 0x0
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0x5500, size 0x268, align 255
    char _pad_5768[0x4]; // offset 0x5768
    bool m_bPickedUp; // offset 0x576C, size 0x1, align 1 | MNotSaved
    char _pad_576D[0x3]; // offset 0x576D
};
