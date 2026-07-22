#pragma once

class CTransitionUpdateData  // sizeof 0x3, align 0x1 [trivial_ctor trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    uint8 m_srcStateIndex; // offset 0x0, size 0x1, align 1
    uint8_t m_nHandshakeMaskToDisableFirst : 7; // offset 0x0
    uint8_t m_bDisabled : 1; // offset 0x0
    uint8 m_destStateIndex; // offset 0x1, size 0x1, align 1
    char _pad_0002[0x1]; // offset 0x2
};
