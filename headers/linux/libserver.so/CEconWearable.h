#pragma once

class CEconWearable : public CEconEntity /*0x0*/  // sizeof 0xF80, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    int32 m_nForceSkin; // offset 0xF70, size 0x4, align 4
    bool m_bAlwaysAllow; // offset 0xF74, size 0x1, align 1
    char _pad_0F75[0xB]; // offset 0xF75
};
