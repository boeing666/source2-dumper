#pragma once

class CCitadel_Modifier_Objective_HealthGrowthVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x770, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    int32 m_iGrowthPerMinute; // offset 0x760, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flTickRate; // offset 0x764, size 0x4, align 4 | MPropertyDescription
    int32 m_iGrowthStartTimeInMinutes; // offset 0x768, size 0x4, align 4
    char _pad_076C[0x4]; // offset 0x76C
};
