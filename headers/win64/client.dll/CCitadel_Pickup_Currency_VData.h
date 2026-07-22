#pragma once

class CCitadel_Pickup_Currency_VData : public CCitadel_Pickup_VData /*0x0*/  // sizeof 0xA08, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    ECurrencyType m_Currency; // offset 0x9F0, size 0x4, align 4 | MPropertyStartGroup
    int32 m_nCurrencyAmount; // offset 0x9F4, size 0x4, align 4
    bool m_bPlayCurrencySound; // offset 0x9F8, size 0x1, align 1
    char _pad_09F9[0x7]; // offset 0x9F9
    CUtlString m_strLabelName; // offset 0xA00, size 0x8, align 8
};
