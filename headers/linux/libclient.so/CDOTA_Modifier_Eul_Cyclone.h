#pragma once

class CDOTA_Modifier_Eul_Cyclone : public CDOTA_Modifier_Cyclone /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A5C]; // offset 0x0
    CHandle< C_BaseEntity > m_hBlocker; // offset 0x1A5C, size 0x4, align 4
    bool m_bBlockerCreated; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x7]; // offset 0x1A61
};
