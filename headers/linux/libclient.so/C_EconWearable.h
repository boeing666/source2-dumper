#pragma once

class C_EconWearable : public C_EconEntity /*0x0*/  // sizeof 0x27B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x27A8]; // offset 0x0
    int32 m_nForceSkin; // offset 0x27A8, size 0x4, align 4
    bool m_bAlwaysAllow; // offset 0x27AC, size 0x1, align 1
    char _pad_27AD[0x3]; // offset 0x27AD
};
