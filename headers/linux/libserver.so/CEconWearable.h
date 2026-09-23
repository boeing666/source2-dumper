#pragma once

class CEconWearable : public CEconEntity /*0x0*/  // sizeof 0x11A0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1190]; // offset 0x0
    int32 m_nForceSkin; // offset 0x1190, size 0x4, align 4
    bool m_bAlwaysAllow; // offset 0x1194, size 0x1, align 1
    char _pad_1195[0xB]; // offset 0x1195
};
