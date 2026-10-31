#pragma once

class CCitadel_Modifier_RampSlowModifierVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    float32 m_flRampUpTime; // offset 0x798, size 0x4, align 4
    float32 m_flPercentageMultiplierStart; // offset 0x79C, size 0x4, align 4
    float32 m_flPercentageMultiplierEnd; // offset 0x7A0, size 0x4, align 4
    char _pad_07A4[0x4]; // offset 0x7A4
};
