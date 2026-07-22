#pragma once

class C_INIT_RandomSequence : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x210, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nSequenceMin; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeEditor
    int32 m_nSequenceMax; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeEditor
    bool m_bShuffle; // offset 0x1E8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLinear; // offset 0x1E9, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01EA[0x6]; // offset 0x1EA
    CUtlVector< SequenceWeightedList_t > m_WeightedList; // offset 0x1F0, size 0x18, align 8 | MPropertyFriendlyName
    char _pad_0208[0x8]; // offset 0x208
};
