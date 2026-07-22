#pragma once

struct SquadSlotNPCEntry_t  // sizeof 0xC, align 0xFF [trivial_dtor] (client)
{
    SquadSlotId_t nId; // offset 0x0, size 0x4, align 4
    CHandle< C_BaseEntity > hEnemy; // offset 0x4, size 0x4, align 4
    bool bHoldForManualRelease; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x3]; // offset 0x9
};
