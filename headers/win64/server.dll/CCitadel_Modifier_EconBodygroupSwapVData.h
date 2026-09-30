#pragma once

class CCitadel_Modifier_EconBodygroupSwapVData : public CCitadel_Modifier_EconVData /*0x0*/  // sizeof 0x768, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CUtlStringToken m_nBodyGroupName; // offset 0x760, size 0x4, align 4
    int32 m_nBodyGroupChoice; // offset 0x764, size 0x4, align 4
};
