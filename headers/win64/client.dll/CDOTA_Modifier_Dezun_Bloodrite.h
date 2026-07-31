#pragma once

class CDOTA_Modifier_Dezun_Bloodrite : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 health_pct; // offset 0x1A78, size 0x4, align 4
    float32 aoe_pct; // offset 0x1A7C, size 0x4, align 4
    bool m_bAoERecursionBlock; // offset 0x1A80, size 0x1, align 1
    bool m_bHealthCostRecursionBlock; // offset 0x1A81, size 0x1, align 1
    char _pad_1A82[0x6]; // offset 0x1A82
};
