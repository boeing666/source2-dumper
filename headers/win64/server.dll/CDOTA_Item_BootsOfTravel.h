#pragma once

class CDOTA_Item_BootsOfTravel : public CDOTA_Item /*0x0*/  // sizeof 0x668, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x660]; // offset 0x0
    float32 m_flTeleportTimeOverride; // offset 0x660, size 0x4, align 4
    bool m_bPendingSellExcessScrolls; // offset 0x664, size 0x1, align 1
    bool m_bQueueSellScrolls; // offset 0x665, size 0x1, align 1
    char _pad_0666[0x2]; // offset 0x666
};
