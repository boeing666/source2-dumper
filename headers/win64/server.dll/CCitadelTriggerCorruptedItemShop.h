#pragma once

class CCitadelTriggerCorruptedItemShop : public CBaseTrigger /*0x0*/  // sizeof 0xA38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA00]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xA00, size 0x20, align 255
    CEntityIOOutput m_OnItemLimitChanged; // offset 0xA20, size 0x18, align 255
};
