#pragma once

class CToggleComponentActionUpdater : public CAnimActionUpdater /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    AnimComponentID m_componentID; // offset 0x18, size 0x4, align 4
    bool m_bSetEnabled; // offset 0x1C, size 0x1, align 1
    char _pad_001D[0x3]; // offset 0x1D
};
