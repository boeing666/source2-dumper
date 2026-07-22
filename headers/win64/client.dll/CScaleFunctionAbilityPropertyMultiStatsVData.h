#pragma once

class CScaleFunctionAbilityPropertyMultiStatsVData : public CScaleFunctionVData /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CUtlVector< EStatsType > m_vecScalingStats; // offset 0x40, size 0x18, align 8
};
