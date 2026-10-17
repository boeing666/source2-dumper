#pragma once

class CDOTA_ShopTrigger : public CBaseTrigger /*0x0*/  // sizeof 0x9F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9D0]; // offset 0x0
    int32 m_ShopType; // offset 0x9D0, size 0x4, align 4
    char _pad_09D4[0x4]; // offset 0x9D4
    CEntityIOOutput m_OnTrigger; // offset 0x9D8, size 0x18, align 255
};
