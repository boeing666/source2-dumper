#pragma once

class C_PointClientUIDialog : public C_BaseClientUIEntity /*0x0*/  // sizeof 0x9E0, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x9D8]; // offset 0x0
    CHandle< C_BaseEntity > m_hActivator; // offset 0x9D8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bStartEnabled; // offset 0x9DC, size 0x1, align 1
    char _pad_09DD[0x3]; // offset 0x9DD
};
