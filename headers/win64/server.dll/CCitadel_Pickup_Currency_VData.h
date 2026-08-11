#pragma once

class CCitadel_Pickup_Currency_VData : public CCitadel_Pickup_VData /*0x0*/  // sizeof 0x9F0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x9D8]; // offset 0x0
    ECurrencyType m_Currency; // offset 0x9D8, size 0x4, align 4 | MPropertyStartGroup
    int32 m_nCurrencyAmount; // offset 0x9DC, size 0x4, align 4
    bool m_bPlayCurrencySound; // offset 0x9E0, size 0x1, align 1
    char _pad_09E1[0x7]; // offset 0x9E1
    CUtlString m_strLabelName; // offset 0x9E8, size 0x8, align 8
};
