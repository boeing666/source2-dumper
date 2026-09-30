#pragma once

class CCitadelItemPickupRejuv : public C_CitadelItemPickup /*0x0*/  // sizeof 0xFC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDE0]; // offset 0x0
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0xDE0, size 0x1E0, align 255
    bool m_bPickedUp; // offset 0xFC0, size 0x1, align 1 | MNotSaved
    char _pad_0FC1[0x7]; // offset 0xFC1
};
