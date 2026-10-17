#pragma once

class C_DOTA_Item_BootsOfTravel : public C_DOTA_Item /*0x0*/  // sizeof 0x8E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8D4]; // offset 0x0
    float32 m_flTeleportTimeOverride; // offset 0x8D4, size 0x4, align 4
    bool m_bPendingSellExcessScrolls; // offset 0x8D8, size 0x1, align 1
    bool m_bQueueSellScrolls; // offset 0x8D9, size 0x1, align 1
    char _pad_08DA[0x6]; // offset 0x8DA
};
