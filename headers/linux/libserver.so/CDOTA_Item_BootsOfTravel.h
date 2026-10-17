#pragma once

class CDOTA_Item_BootsOfTravel : public CDOTA_Item /*0x0*/  // sizeof 0x940, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x934]; // offset 0x0
    float32 m_flTeleportTimeOverride; // offset 0x934, size 0x4, align 4
    bool m_bPendingSellExcessScrolls; // offset 0x938, size 0x1, align 1
    bool m_bQueueSellScrolls; // offset 0x939, size 0x1, align 1
    char _pad_093A[0x6]; // offset 0x93A
};
