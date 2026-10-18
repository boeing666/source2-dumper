#pragma once

class CAnimConflictBase  // sizeof 0x70, align 0xFF [vtable abstract] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CUtlString m_sConflictDesc; // offset 0x18, size 0x8, align 8
    int32 m_nResolveIdx; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
    CAnimConflictInfo_t[2] m_conflictData; // offset 0x28, size 0x40, align 8
    AnimConflictType_t m_eConflictType; // offset 0x68, size 0x4, align 4
    char _pad_006C[0x4]; // offset 0x6C
};
