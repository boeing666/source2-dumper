#pragma once

class C_Citadel_Pickup_Item : public C_Citadel_Pickup /*0x0*/  // sizeof 0xDF0, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0xDE0]; // offset 0x0
    CUtlStringToken m_unItemID; // offset 0xDE0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    char _pad_0DE4[0x4]; // offset 0xDE4
    CitadelItemVData* m_pItemData; // offset 0xDE8, size 0x8, align 8
};
