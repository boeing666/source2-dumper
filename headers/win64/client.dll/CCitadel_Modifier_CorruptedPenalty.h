#pragma once

class CCitadel_Modifier_CorruptedPenalty : public CCitadelModifier /*0x0*/  // sizeof 0x150, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    EModifierValue m_ePenaltyValue0; // offset 0x140, size 0x2, align 2
    EModifierValue m_ePenaltyValue1; // offset 0x142, size 0x2, align 2
    float32 m_flPenaltyMagnitude0; // offset 0x144, size 0x4, align 4
    float32 m_flPenaltyMagnitude1; // offset 0x148, size 0x4, align 4
    char _pad_014C[0x4]; // offset 0x14C
};
