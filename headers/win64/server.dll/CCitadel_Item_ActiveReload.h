#pragma once

class CCitadel_Item_ActiveReload : public CCitadel_Item /*0x0*/  // sizeof 0x14B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    bool m_bPlayedStartSound; // offset 0x14A8, size 0x1, align 1
    bool m_bActiveReloadFailed; // offset 0x14A9, size 0x1, align 1
    char _pad_14AA[0x6]; // offset 0x14AA
};
