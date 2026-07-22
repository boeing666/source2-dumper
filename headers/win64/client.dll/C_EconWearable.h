#pragma once

class C_EconWearable : public C_EconEntity /*0x0*/  // sizeof 0x16F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16F0]; // offset 0x0
    int32 m_nForceSkin; // offset 0x16F0, size 0x4, align 4
    bool m_bAlwaysAllow; // offset 0x16F4, size 0x1, align 1
    char _pad_16F5[0x3]; // offset 0x16F5
};
