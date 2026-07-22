#pragma once

class C_DOTA_Ability_Lycan_SummonWolves : public C_DOTABaseAbility /*0x0*/  // sizeof 0x7D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    char[260] szUnitName; // offset 0x6A8, size 0x104, align 1
    int32 wolf_index; // offset 0x7AC, size 0x4, align 4
    float32 wolf_duration; // offset 0x7B0, size 0x4, align 4
    char _pad_07B4[0x4]; // offset 0x7B4
    CUtlVector< CHandle< C_BaseEntity > > m_hExistingUnits; // offset 0x7B8, size 0x18, align 8
};
