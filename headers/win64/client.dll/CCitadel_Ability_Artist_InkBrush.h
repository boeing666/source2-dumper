#pragma once

class CCitadel_Ability_Artist_InkBrush : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1D90, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16F0]; // offset 0x0
    bool m_bButtonDown; // offset 0x16F0, size 0x1, align 1
    char _pad_16F1[0x43]; // offset 0x16F1
    float32 m_flAccumulatedDrawDistance; // offset 0x1734, size 0x4, align 4
    char _pad_1738[0x658]; // offset 0x1738
};
