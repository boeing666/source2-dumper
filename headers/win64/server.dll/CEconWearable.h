#pragma once

class CEconWearable : public CEconEntity /*0x0*/  // sizeof 0xEC0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xEB0]; // offset 0x0
    int32 m_nForceSkin; // offset 0xEB0, size 0x4, align 4
    bool m_bAlwaysAllow; // offset 0xEB4, size 0x1, align 1
    char _pad_0EB5[0xB]; // offset 0xEB5
};
