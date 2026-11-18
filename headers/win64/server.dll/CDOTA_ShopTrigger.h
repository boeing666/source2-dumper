#pragma once

class CDOTA_ShopTrigger : public CBaseTrigger /*0x0*/  // sizeof 0xA50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    int32 m_ShopType; // offset 0xA30, size 0x4, align 4
    char _pad_0A34[0x4]; // offset 0xA34
    CEntityIOOutput m_OnTrigger; // offset 0xA38, size 0x18, align 255
};
