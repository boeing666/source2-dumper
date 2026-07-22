#pragma once

class CDOTA_Item_BootsOfTravel : public CDOTA_Item /*0x0*/  // sizeof 0x938, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x92C]; // offset 0x0
    float32 m_flTeleportTimeOverride; // offset 0x92C, size 0x4, align 4
    bool m_bPendingSellExcessScrolls; // offset 0x930, size 0x1, align 1
    bool m_bQueueSellScrolls; // offset 0x931, size 0x1, align 1
    char _pad_0932[0x6]; // offset 0x932
};
