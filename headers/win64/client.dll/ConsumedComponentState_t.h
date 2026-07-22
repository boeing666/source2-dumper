#pragma once

struct ConsumedComponentState_t  // sizeof 0x40, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x30]; // offset 0x0
    CUtlStringToken m_unComponentID; // offset 0x30, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    int32 m_nRefCount; // offset 0x34, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bPurchased; // offset 0x38, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0039[0x7]; // offset 0x39
};
