#pragma once

class CIronSightController  // sizeof 0x18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    bool m_bIronSightAvailable; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x3]; // offset 0x9
    float32 m_flIronSightAmount; // offset 0xC, size 0x4, align 4
    float32 m_flIronSightAmountGained; // offset 0x10, size 0x4, align 4
    float32 m_flIronSightAmountBiased; // offset 0x14, size 0x4, align 4
};
