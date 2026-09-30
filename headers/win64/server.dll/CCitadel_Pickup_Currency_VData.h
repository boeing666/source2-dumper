#pragma once

class CCitadel_Pickup_Currency_VData : public CCitadel_Pickup_VData /*0x0*/  // sizeof 0xA20, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA10]; // offset 0x0
    ECurrencyType m_Currency; // offset 0xA10, size 0x4, align 4 | MPropertyStartGroup
    bool m_bPlayCurrencySound; // offset 0xA14, size 0x1, align 1
    char _pad_0A15[0x3]; // offset 0xA15
    CUtlString m_strLabelName; // offset 0xA18, size 0x8, align 8
};
