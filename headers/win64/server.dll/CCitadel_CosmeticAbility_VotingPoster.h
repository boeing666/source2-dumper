#pragma once

class CCitadel_CosmeticAbility_VotingPoster : public CCitadel_CosmeticAbility /*0x0*/  // sizeof 0x1818, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1810]; // offset 0x0
    bool m_bPreview; // offset 0x1810, size 0x1, align 1
    char _pad_1811[0x3]; // offset 0x1811
    HeroID_t m_nActiveHero; // offset 0x1814, size 0x4, align 255
};
