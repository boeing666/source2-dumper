#pragma once

class CCitadel_Pickup_Item : public CCitadel_Pickup /*0x0*/  // sizeof 0xB20, align 0x10 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xB10]; // offset 0x0
    CUtlStringToken m_unItemID; // offset 0xB10, size 0x4, align 4 | MNetworkEnable
    char _pad_0B14[0xC]; // offset 0xB14
};
