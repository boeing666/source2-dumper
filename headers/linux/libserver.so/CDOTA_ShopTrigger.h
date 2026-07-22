#pragma once

class CDOTA_ShopTrigger : public CBaseTrigger /*0x0*/  // sizeof 0xBE0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC4]; // offset 0x0
    int32 m_ShopType; // offset 0xBC4, size 0x4, align 4
    CEntityIOOutput m_OnTrigger; // offset 0xBC8, size 0x18, align 255
};
