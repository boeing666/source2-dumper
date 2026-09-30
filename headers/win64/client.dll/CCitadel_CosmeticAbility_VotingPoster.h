#pragma once

class CCitadel_CosmeticAbility_VotingPoster : public CCitadel_CosmeticAbility /*0x0*/  // sizeof 0x1A50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A48]; // offset 0x0
    bool m_bPreview; // offset 0x1A48, size 0x1, align 1
    char _pad_1A49[0x3]; // offset 0x1A49
    HeroID_t m_nActiveHero; // offset 0x1A4C, size 0x4, align 255
};
