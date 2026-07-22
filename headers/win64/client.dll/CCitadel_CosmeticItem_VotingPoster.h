#pragma once

class CCitadel_CosmeticItem_VotingPoster : public CCitadel_Item /*0x0*/  // sizeof 0x1460, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1458]; // offset 0x0
    bool m_bPreview; // offset 0x1458, size 0x1, align 1 | MNetworkEnable
    char _pad_1459[0x3]; // offset 0x1459
    HeroID_t m_nActiveHero; // offset 0x145C, size 0x4, align 255 | MNetworkEnable
};
