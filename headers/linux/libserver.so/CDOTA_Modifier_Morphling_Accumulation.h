#pragma once

class CDOTA_Modifier_Morphling_Accumulation : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bActive; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x3]; // offset 0x1AF9
    float32 percent_to_increment; // offset 0x1AFC, size 0x4, align 4
    float32 m_flStrengthGain; // offset 0x1B00, size 0x4, align 4
    float32 m_flAgilityGain; // offset 0x1B04, size 0x4, align 4
    float32 m_flIntellectGain; // offset 0x1B08, size 0x4, align 4
    int32 m_nAttributeLevels; // offset 0x1B0C, size 0x4, align 4
    int32 bonus_primary_stat_per_level_of_attributes; // offset 0x1B10, size 0x4, align 4
    int32 bonus_int_per_level_of_attributes; // offset 0x1B14, size 0x4, align 4
    int32 m_nPrimaryStat; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
