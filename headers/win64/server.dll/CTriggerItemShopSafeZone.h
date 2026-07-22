#pragma once

class CTriggerItemShopSafeZone : public CBaseTrigger /*0x0*/  // sizeof 0x930, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x900]; // offset 0x0
    CEntityIOOutput m_OnContested; // offset 0x900, size 0x18, align 255
    CEntityIOOutput m_OnNotContested; // offset 0x918, size 0x18, align 255
};
