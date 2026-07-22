#pragma once

class CCompositeMaterialEditorDoc  // sizeof 0x38, align 0x8 [vtable] (compositematerialslib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    int32 m_nVersion; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< CompositeMaterialEditorPoint_t > m_Points; // offset 0x10, size 0x18, align 8
    KeyValues3 m_KVthumbnail; // offset 0x28, size 0x10, align 8
};
