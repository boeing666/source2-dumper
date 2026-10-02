#pragma once

class C_CitadelItemPickup : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xE38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE10]; // offset 0x0
    int32 m_eLootType; // offset 0xE10, size 0x4, align 4
    int32 m_nCurrencyValue; // offset 0xE14, size 0x4, align 4
    CUtlSymbolLarge m_iszModelName; // offset 0xE18, size 0x8, align 8
    float32 m_flModelScale; // offset 0xE20, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTargetPlayer; // offset 0xE24, size 0x4, align 4
    float32 m_flFallRate; // offset 0xE28, size 0x4, align 4
    char _pad_0E2C[0xC]; // offset 0xE2C
};
