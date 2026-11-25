#pragma once

class CCitadel_Pickup_SoulBag_VData : public CCitadel_Pickup_VData /*0x0*/  // sizeof 0xA20, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA10]; // offset 0x0
    float32 m_flHoverRate; // offset 0xA10, size 0x4, align 4
    float32 m_flHoverHeight; // offset 0xA14, size 0x4, align 4
    float32 m_flHoverTurnRate; // offset 0xA18, size 0x4, align 4
    char _pad_0A1C[0x4]; // offset 0xA1C
};
