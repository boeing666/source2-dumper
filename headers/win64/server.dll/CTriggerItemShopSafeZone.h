#pragma once

class CTriggerItemShopSafeZone : public CBaseTrigger /*0x0*/  // sizeof 0xA40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA10]; // offset 0x0
    CEntityIOOutput m_OnContested; // offset 0xA10, size 0x18, align 255
    CEntityIOOutput m_OnNotContested; // offset 0xA28, size 0x18, align 255
};
