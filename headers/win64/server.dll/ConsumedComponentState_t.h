#pragma once

struct ConsumedComponentState_t  // sizeof 0x58, align 0xFF [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x30]; // offset 0x0
    CUtlStringToken m_unComponentID; // offset 0x30, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    int32 m_nRefCount; // offset 0x34, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bPurchased; // offset 0x38, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0039[0x7]; // offset 0x39
    CUtlVector< CUtlStringToken > m_vecImbuedAbilityIDs; // offset 0x40, size 0x18, align 8
};
