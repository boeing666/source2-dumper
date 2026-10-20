#pragma once

class CCitadel_Item_ActiveReload : public CCitadel_Item /*0x0*/  // sizeof 0x14B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    bool m_bPlayedStartSound; // offset 0x14B0, size 0x1, align 1
    bool m_bActiveReloadFailed; // offset 0x14B1, size 0x1, align 1
    char _pad_14B2[0x6]; // offset 0x14B2
};
