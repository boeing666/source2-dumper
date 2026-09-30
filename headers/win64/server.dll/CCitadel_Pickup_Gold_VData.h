#pragma once

class CCitadel_Pickup_Gold_VData : public CCitadel_Pickup_VData /*0x0*/  // sizeof 0xA20, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA10]; // offset 0x0
    float32 m_flGoldAmount; // offset 0xA10, size 0x4, align 4
    float32 m_flGoldPerMinuteAmount; // offset 0xA14, size 0x4, align 4
    bool m_bUseLabelPanel; // offset 0xA18, size 0x1, align 1 | MPropertyDescription
    char _pad_0A19[0x7]; // offset 0xA19
};
