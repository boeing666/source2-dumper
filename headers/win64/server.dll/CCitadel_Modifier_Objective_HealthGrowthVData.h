#pragma once

class CCitadel_Modifier_Objective_HealthGrowthVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    int32 m_iGrowthPerMinute; // offset 0x790, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flTickRate; // offset 0x794, size 0x4, align 4 | MPropertyDescription
    int32 m_iGrowthStartTimeInMinutes; // offset 0x798, size 0x4, align 4
    char _pad_079C[0x4]; // offset 0x79C
};
