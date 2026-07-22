#pragma once

struct PairedSequence_t  // sizeof 0x20, align 0x8 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
    CGlobalSymbol m_sRole; // offset 0x0, size 0x8, align 8
    CGlobalSymbol m_sSequenceName; // offset 0x8, size 0x8, align 8
    CAnimNetVar< uint32 > m_hSequence; // offset 0x10, size 0xC, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
