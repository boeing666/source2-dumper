#pragma once

class CCitadel_DoorwayPortal : public CBaseAnimGraph /*0x0*/  // sizeof 0xC20, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAE0]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xAE0, size 0x20, align 255
    CHandle< CCitadel_DoorwayPortal > m_hLinkedDoorway; // offset 0xB00, size 0x4, align 4 | MNotSaved
    char _pad_0B04[0x11C]; // offset 0xB04
};
