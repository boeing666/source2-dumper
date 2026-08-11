#pragma once

class CCitadel_CosmeticItem_VotingPoster : public CCitadel_Item /*0x0*/  // sizeof 0x1200, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11F8]; // offset 0x0
    bool m_bPreview; // offset 0x11F8, size 0x1, align 1 | MNetworkEnable
    char _pad_11F9[0x3]; // offset 0x11F9
    HeroID_t m_nActiveHero; // offset 0x11FC, size 0x4, align 255 | MNetworkEnable
};
