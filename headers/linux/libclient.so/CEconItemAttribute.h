#pragma once

class CEconItemAttribute  // sizeof 0x48, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    uint16 m_iAttributeDefinitionIndex; // offset 0x30, size 0x2, align 2
    char _pad_0032[0x2]; // offset 0x32
    float32 m_flValue; // offset 0x34, size 0x4, align 4
    float32 m_flInitialValue; // offset 0x38, size 0x4, align 4
    int32 m_nRefundableCurrency; // offset 0x3C, size 0x4, align 4
    bool m_bSetBonus; // offset 0x40, size 0x1, align 1
    char _pad_0041[0x7]; // offset 0x41
};
