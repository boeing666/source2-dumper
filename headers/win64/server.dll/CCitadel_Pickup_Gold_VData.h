#pragma once

class CCitadel_Pickup_Gold_VData : public CCitadel_Pickup_VData /*0x0*/  // sizeof 0x9E0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x9D8]; // offset 0x0
    float32 m_flGoldAmount; // offset 0x9D8, size 0x4, align 4
    float32 m_flGoldPerMinuteAmount; // offset 0x9DC, size 0x4, align 4
};
