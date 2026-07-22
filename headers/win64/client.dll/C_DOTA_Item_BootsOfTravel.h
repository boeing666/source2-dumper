#pragma once

class C_DOTA_Item_BootsOfTravel : public C_DOTA_Item /*0x0*/  // sizeof 0x760, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x758]; // offset 0x0
    float32 m_flTeleportTimeOverride; // offset 0x758, size 0x4, align 4
    bool m_bPendingSellExcessScrolls; // offset 0x75C, size 0x1, align 1
    bool m_bQueueSellScrolls; // offset 0x75D, size 0x1, align 1
    char _pad_075E[0x2]; // offset 0x75E
};
