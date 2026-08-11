#pragma once

class CCitadel_Upgrade_AmmoScavenger : public CCitadel_Item /*0x0*/  // sizeof 0x1080, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    CHandle< CBaseEntity > m_hLastOrbTarget; // offset 0xF78, size 0x4, align 4
    char _pad_0F7C[0x104]; // offset 0xF7C
};
