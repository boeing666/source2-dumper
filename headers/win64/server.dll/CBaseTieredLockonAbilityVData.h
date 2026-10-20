#pragma once

class CBaseTieredLockonAbilityVData : public CBaseLockonAbilityVData /*0x0*/  // sizeof 0x10B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10A0]; // offset 0x0
    CUtlVector< float32 > m_vecLockonStackDurations; // offset 0x10A0, size 0x18, align 8 | MPropertyStartGroup MPropertyDescription
};
