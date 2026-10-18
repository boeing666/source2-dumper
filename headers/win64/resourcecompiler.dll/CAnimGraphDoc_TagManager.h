#pragma once

class CAnimGraphDoc_TagManager  // sizeof 0x38, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimTagBase > > m_tags; // offset 0x18, size 0x18, align 8
    char _pad_0030[0x8]; // offset 0x30
};
