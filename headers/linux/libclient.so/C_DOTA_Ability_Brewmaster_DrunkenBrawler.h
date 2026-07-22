#pragma once

class C_DOTA_Ability_Brewmaster_DrunkenBrawler : public C_DOTABaseAbility /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 m_iBrawlActive; // offset 0x824, size 0x4, align 4
    bool m_bUpdateIcons; // offset 0x828, size 0x1, align 1
    char _pad_0829[0x3]; // offset 0x829
    ParticleIndex_t m_nDrunkenBrawlerFX; // offset 0x82C, size 0x4, align 255
};
