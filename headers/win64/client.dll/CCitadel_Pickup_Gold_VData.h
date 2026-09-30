#pragma once

class CCitadel_Pickup_Gold_VData : public CCitadel_Pickup_VData /*0x0*/  // sizeof 0xA28, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA18]; // offset 0x0
    float32 m_flGoldAmount; // offset 0xA18, size 0x4, align 4
    float32 m_flGoldPerMinuteAmount; // offset 0xA1C, size 0x4, align 4
    bool m_bUseLabelPanel; // offset 0xA20, size 0x1, align 1 | MPropertyDescription
    char _pad_0A21[0x7]; // offset 0xA21
};
