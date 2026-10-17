#pragma once

class C_DOTA_Item_BootsOfTravel : public C_DOTA_Item /*0x0*/  // sizeof 0x768, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x760]; // offset 0x0
    float32 m_flTeleportTimeOverride; // offset 0x760, size 0x4, align 4
    bool m_bPendingSellExcessScrolls; // offset 0x764, size 0x1, align 1
    bool m_bQueueSellScrolls; // offset 0x765, size 0x1, align 1
    char _pad_0766[0x2]; // offset 0x766
};
