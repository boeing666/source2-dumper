#pragma once

class CDOTA_ShopTrigger : public CBaseTrigger /*0x0*/  // sizeof 0xCC0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA4]; // offset 0x0
    int32 m_ShopType; // offset 0xCA4, size 0x4, align 4
    CEntityIOOutput m_OnTrigger; // offset 0xCA8, size 0x18, align 255
};
