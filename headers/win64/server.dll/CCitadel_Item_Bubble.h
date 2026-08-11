#pragma once

class CCitadel_Item_Bubble : public CCitadel_Item /*0x0*/  // sizeof 0x1100, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    GameTime_t m_flEndTime; // offset 0xF78, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_0F7C[0x184]; // offset 0xF7C
};
