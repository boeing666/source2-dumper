#pragma once

class CResponseCriteriaSet  // sizeof 0x38, align 0xFF [vtable] (resourcecompiler)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    int32 m_nNumPrefixedContexts; // offset 0x30, size 0x4, align 4
    bool m_bOverrideOnAppend; // offset 0x34, size 0x1, align 1
    char _pad_0035[0x3]; // offset 0x35
};
