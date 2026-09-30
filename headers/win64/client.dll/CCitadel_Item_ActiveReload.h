#pragma once

class CCitadel_Item_ActiveReload : public CCitadel_Item /*0x0*/  // sizeof 0x16E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    bool m_bPlayedStartSound; // offset 0x16D8, size 0x1, align 1
    bool m_bActiveReloadFailed; // offset 0x16D9, size 0x1, align 1
    char _pad_16DA[0x6]; // offset 0x16DA
};
