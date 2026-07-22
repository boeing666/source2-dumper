#pragma once

class CRectLight : public CBarnLight /*0x0*/  // sizeof 0xA70, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xA68]; // offset 0x0
    bool m_bShowLight; // offset 0xA68, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0A69[0x7]; // offset 0xA69
};
