#pragma once

class C_RectLight : public C_BarnLight /*0x0*/  // sizeof 0xCC0, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0xCB8]; // offset 0x0
    bool m_bShowLight; // offset 0xCB8, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0CB9[0x7]; // offset 0xCB9
};
