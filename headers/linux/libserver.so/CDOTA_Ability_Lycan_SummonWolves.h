#pragma once

class CDOTA_Ability_Lycan_SummonWolves : public CDOTABaseAbility /*0x0*/  // sizeof 0x1880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85B]; // offset 0x0
    char[4096] szUnitName; // offset 0x85B, size 0x1000, align 1
    char _pad_185B[0x1]; // offset 0x185B
    int32 wolf_index; // offset 0x185C, size 0x4, align 4
    float32 wolf_duration; // offset 0x1860, size 0x4, align 4
    char _pad_1864[0x4]; // offset 0x1864
    CUtlVector< CHandle< CBaseEntity > > m_hExistingUnits; // offset 0x1868, size 0x18, align 8
};
