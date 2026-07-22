#pragma once

class CCitadel_Modifier_Objective_HealthGrowthVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x760, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    int32 m_iGrowthPerMinute; // offset 0x750, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flTickRate; // offset 0x754, size 0x4, align 4 | MPropertyDescription
    int32 m_iGrowthStartTimeInMinutes; // offset 0x758, size 0x4, align 4
    char _pad_075C[0x4]; // offset 0x75C
};
