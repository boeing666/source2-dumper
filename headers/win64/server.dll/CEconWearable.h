#pragma once

class CEconWearable : public CEconEntity /*0x0*/  // sizeof 0xCA0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC90]; // offset 0x0
    int32 m_nForceSkin; // offset 0xC90, size 0x4, align 4
    bool m_bAlwaysAllow; // offset 0xC94, size 0x1, align 1
    char _pad_0C95[0xB]; // offset 0xC95
};
