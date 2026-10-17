#pragma once

class CDOTA_Modifier_Dezun_Bloodrite : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 health_pct; // offset 0x1AA8, size 0x4, align 4
    float32 aoe_pct; // offset 0x1AAC, size 0x4, align 4
    bool m_bAoERecursionBlock; // offset 0x1AB0, size 0x1, align 1
    bool m_bHealthCostRecursionBlock; // offset 0x1AB1, size 0x1, align 1
    char _pad_1AB2[0x6]; // offset 0x1AB2
};
