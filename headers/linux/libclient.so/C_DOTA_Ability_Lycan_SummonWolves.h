#pragma once

class C_DOTA_Ability_Lycan_SummonWolves : public C_DOTABaseAbility /*0x0*/  // sizeof 0x1848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    char[4096] szUnitName; // offset 0x824, size 0x1000, align 1
    int32 wolf_index; // offset 0x1824, size 0x4, align 4
    float32 wolf_duration; // offset 0x1828, size 0x4, align 4
    char _pad_182C[0x4]; // offset 0x182C
    CUtlVector< CHandle< C_BaseEntity > > m_hExistingUnits; // offset 0x1830, size 0x18, align 8
};
