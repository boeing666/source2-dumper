#pragma once

class CCitadelItemPickupRejuv : public C_CitadelItemPickup /*0x0*/  // sizeof 0x1020, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE38]; // offset 0x0
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0xE38, size 0x1E0, align 255
    bool m_bPickedUp; // offset 0x1018, size 0x1, align 1 | MNotSaved
    char _pad_1019[0x7]; // offset 0x1019
};
