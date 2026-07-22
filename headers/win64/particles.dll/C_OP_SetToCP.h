#pragma once

class C_OP_SetToCP : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecOffset; // offset 0x1DC, size 0xC, align 4 | MPropertyFriendlyName
    bool m_bOffsetLocal; // offset 0x1E8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E9[0x7]; // offset 0x1E9
};
