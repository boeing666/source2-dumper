#pragma once

class CStateAction  // sizeof 0x18, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CSmartPtr< CAnimGraphDoc_Action > m_pAction; // offset 0x8, size 0x8, align 8
    StateActionBehavior m_eBehavior; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
