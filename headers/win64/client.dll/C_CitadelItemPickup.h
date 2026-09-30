#pragma once

class C_CitadelItemPickup : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xDE0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDB8]; // offset 0x0
    int32 m_eLootType; // offset 0xDB8, size 0x4, align 4
    int32 m_nCurrencyValue; // offset 0xDBC, size 0x4, align 4
    CUtlSymbolLarge m_iszModelName; // offset 0xDC0, size 0x8, align 8
    float32 m_flModelScale; // offset 0xDC8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTargetPlayer; // offset 0xDCC, size 0x4, align 4
    float32 m_flFallRate; // offset 0xDD0, size 0x4, align 4
    char _pad_0DD4[0xC]; // offset 0xDD4
};
