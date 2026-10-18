#pragma once

class CAnimGraphDoc_ComponentManager  // sizeof 0x28, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimGraphDoc_Component > > m_components; // offset 0x8, size 0x18, align 8
    char _pad_0020[0x8]; // offset 0x20
};
