#pragma once

class CRemapValueComponentUpdater : public CAnimComponentUpdater /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CUtlVector< CRemapValueUpdateItem > m_items; // offset 0x30, size 0x18, align 8
};
