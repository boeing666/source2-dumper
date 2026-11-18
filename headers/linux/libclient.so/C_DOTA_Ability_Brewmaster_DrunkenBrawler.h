#pragma once

class C_DOTA_Ability_Brewmaster_DrunkenBrawler : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    int32 m_iBrawlActive; // offset 0x828, size 0x4, align 4
    bool m_bUpdateIcons; // offset 0x82C, size 0x1, align 1
    char _pad_082D[0x3]; // offset 0x82D
    ParticleIndex_t m_nDrunkenBrawlerFX; // offset 0x830, size 0x4, align 255
    char _pad_0834[0x4]; // offset 0x834
};
