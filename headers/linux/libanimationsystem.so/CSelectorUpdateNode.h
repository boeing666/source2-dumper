#pragma once

class CSelectorUpdateNode : public CAnimUpdateNodeBase /*0x0*/  // sizeof 0xB8, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x60]; // offset 0x0
    CUtlVector< CAnimUpdateNodeRef > m_children; // offset 0x60, size 0x18, align 8
    CUtlVector< int8 > m_tags; // offset 0x78, size 0x18, align 8
    char _pad_0090[0x4]; // offset 0x90
    CBlendCurve m_blendCurve; // offset 0x94, size 0x8, align 4
    CAnimValue< float32 > m_flBlendTime; // offset 0x9C, size 0x8, align 4
    CAnimParamHandle m_hParameter; // offset 0xA4, size 0x2, align 1
    char _pad_00A6[0x2]; // offset 0xA6
    int32 m_nTagIndex; // offset 0xA8, size 0x4, align 4
    SelectorTagBehavior_t m_eTagBehavior; // offset 0xAC, size 0x4, align 4
    bool m_bResetOnChange; // offset 0xB0, size 0x1, align 1
    bool m_bLockWhenWaning; // offset 0xB1, size 0x1, align 1
    bool m_bSyncCyclesOnChange; // offset 0xB2, size 0x1, align 1
    char _pad_00B3[0x5]; // offset 0xB3
};
