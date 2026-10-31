#pragma once

class CCitadelItemPickupRejuv : public CCitadelItemPickup /*0x0*/  // sizeof 0x57D0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x5550]; // offset 0x0
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0x5550, size 0x270, align 255
    char _pad_57C0[0x4]; // offset 0x57C0
    bool m_bPickedUp; // offset 0x57C4, size 0x1, align 1 | MNotSaved
    char _pad_57C5[0xB]; // offset 0x57C5
};
