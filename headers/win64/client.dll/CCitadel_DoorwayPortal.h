#pragma once

class CCitadel_DoorwayPortal : public CBaseAnimGraph /*0x0*/  // sizeof 0xDC0, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    CHandle< CCitadel_DoorwayPortal > m_hLinkedDoorway; // offset 0xDA0, size 0x4, align 4 | MNetworkEnable MNotSaved
    char _pad_0DA4[0x1C]; // offset 0xDA4
};
