#pragma once

class CCitadel_Modifier_CorruptedPenalty : public CCitadelModifier /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    EModifierValue m_ePenaltyValue0; // offset 0x150, size 0x2, align 2
    EModifierValue m_ePenaltyValue1; // offset 0x152, size 0x2, align 2
    float32 m_flPenaltyMagnitude0; // offset 0x154, size 0x4, align 4
    float32 m_flPenaltyMagnitude1; // offset 0x158, size 0x4, align 4
    char _pad_015C[0x4]; // offset 0x15C
};
