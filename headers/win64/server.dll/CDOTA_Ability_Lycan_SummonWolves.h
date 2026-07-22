#pragma once

class CDOTA_Ability_Lycan_SummonWolves : public CDOTABaseAbility /*0x0*/  // sizeof 0x6A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    char[260] szUnitName; // offset 0x580, size 0x104, align 1
    int32 wolf_index; // offset 0x684, size 0x4, align 4
    float32 wolf_duration; // offset 0x688, size 0x4, align 4
    char _pad_068C[0x4]; // offset 0x68C
    CUtlVector< CHandle< CBaseEntity > > m_hExistingUnits; // offset 0x690, size 0x18, align 8
};
