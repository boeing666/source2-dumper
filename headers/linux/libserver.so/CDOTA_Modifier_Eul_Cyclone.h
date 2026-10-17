#pragma once

class CDOTA_Modifier_Eul_Cyclone : public CDOTA_Modifier_Cyclone /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AC0]; // offset 0x0
    CHandle< CBaseEntity > m_hBlocker; // offset 0x1AC0, size 0x4, align 4
    bool m_bBlockerCreated; // offset 0x1AC4, size 0x1, align 1
    char _pad_1AC5[0x3]; // offset 0x1AC5
};
