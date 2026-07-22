#pragma once

class CRemapValueUpdateItem  // sizeof 0x14, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CAnimParamHandle m_hParamIn; // offset 0x0, size 0x2, align 1
    CAnimParamHandle m_hParamOut; // offset 0x2, size 0x2, align 1
    float32 m_flMinInputValue; // offset 0x4, size 0x4, align 4
    float32 m_flMaxInputValue; // offset 0x8, size 0x4, align 4
    float32 m_flMinOutputValue; // offset 0xC, size 0x4, align 4
    float32 m_flMaxOutputValue; // offset 0x10, size 0x4, align 4
};
