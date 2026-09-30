#pragma once

class CGameModifier_BodyGroupChoiceVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x768, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CUtlStringToken m_sBodyGroupName; // offset 0x760, size 0x4, align 4
    int32 m_nBodyGroupChoice; // offset 0x764, size 0x4, align 4
};
