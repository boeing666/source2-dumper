#pragma once

class CActionComponentUpdater : public CAnimComponentUpdater /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions; // offset 0x30, size 0x18, align 8
};
