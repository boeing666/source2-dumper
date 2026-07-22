#pragma once

class CAnimTagManagerUpdater  // sizeof 0x78, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimTagBase > > m_tags; // offset 0x38, size 0x18, align 8
    char _pad_0050[0x28]; // offset 0x50
};
