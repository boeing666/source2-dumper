#pragma once

class CCitadel_Ability_Artist_InkBrush : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1B58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14B8]; // offset 0x0
    bool m_bButtonDown; // offset 0x14B8, size 0x1, align 1
    char _pad_14B9[0x43]; // offset 0x14B9
    float32 m_flAccumulatedDrawDistance; // offset 0x14FC, size 0x4, align 4
    char _pad_1500[0x658]; // offset 0x1500
};
