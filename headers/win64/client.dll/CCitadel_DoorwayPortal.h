#pragma once

class CCitadel_DoorwayPortal : public CBaseAnimGraph /*0x0*/  // sizeof 0xF10, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDF8]; // offset 0x0
    CHandle< CCitadel_DoorwayPortal > m_hLinkedDoorway; // offset 0xDF8, size 0x4, align 4 | MNotSaved
    char _pad_0DFC[0x114]; // offset 0xDFC
};
