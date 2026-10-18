#pragma once

class CAnimGraphDoc_ParameterManager  // sizeof 0x60, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimParameterBase > > m_Parameters; // offset 0x20, size 0x18, align 8
    char _pad_0038[0x28]; // offset 0x38
};
