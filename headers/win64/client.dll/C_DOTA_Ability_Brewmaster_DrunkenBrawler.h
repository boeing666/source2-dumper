#pragma once

class C_DOTA_Ability_Brewmaster_DrunkenBrawler : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 m_iBrawlActive; // offset 0x6A8, size 0x4, align 4
    bool m_bUpdateIcons; // offset 0x6AC, size 0x1, align 1
    char _pad_06AD[0x3]; // offset 0x6AD
    ParticleIndex_t m_nDrunkenBrawlerFX; // offset 0x6B0, size 0x4, align 255
    char _pad_06B4[0x4]; // offset 0x6B4
};
