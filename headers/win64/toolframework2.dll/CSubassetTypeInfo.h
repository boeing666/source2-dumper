#pragma once

class CSubassetTypeInfo  // sizeof 0x10, align 0x8 [trivial_dtor] (toolutils2) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    bool m_bFollowReferences; // offset 0x8, size 0x1, align 1
    bool m_bAllowDefinitions; // offset 0x9, size 0x1, align 1
    bool m_bAllowReferences; // offset 0xA, size 0x1, align 1
    char _pad_000B[0x5]; // offset 0xB
};
