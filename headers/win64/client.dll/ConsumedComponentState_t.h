#pragma once

struct ConsumedComponentState_t  // sizeof 0x40, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    CUtlStringToken m_unComponentID; // offset 0x30, size 0x4, align 4
    int32 m_nRefCount; // offset 0x34, size 0x4, align 4
    bool m_bPurchased; // offset 0x38, size 0x1, align 1
    char _pad_0039[0x7]; // offset 0x39
};
