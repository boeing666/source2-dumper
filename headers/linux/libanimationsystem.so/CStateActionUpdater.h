#pragma once

class CStateActionUpdater  // sizeof 0x10, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CSmartPtr< CAnimActionUpdater > m_pAction; // offset 0x0, size 0x8, align 8
    StateActionBehavior m_eBehavior; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
};
