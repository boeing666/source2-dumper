#pragma once

class CCitadel_Item_RescueBeam : public CCitadel_Item /*0x0*/  // sizeof 0xF80, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    bool m_bCanPull; // offset 0xF78, size 0x1, align 1 | MNetworkEnable
    char _pad_0F79[0x7]; // offset 0xF79
};
