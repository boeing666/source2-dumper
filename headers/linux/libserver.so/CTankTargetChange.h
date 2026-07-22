#pragma once

class CTankTargetChange : public CPointEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CVariantBase< CVariantDefaultAllocator > m_newTarget; // offset 0x788, size 0x10, align 8 | MNotSaved
    CUtlSymbolLarge m_newTargetName; // offset 0x798, size 0x8, align 8
};
