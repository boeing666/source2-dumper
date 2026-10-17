#pragma once

class CDOTA_Modifier_Item_Mango_Tree : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTree; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
    CountdownTimer m_Timer; // offset 0x1AB0, size 0x18, align 8
    float32 seconds; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
