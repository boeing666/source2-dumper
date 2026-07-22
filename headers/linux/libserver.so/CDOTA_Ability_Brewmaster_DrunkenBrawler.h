#pragma once

class CDOTA_Ability_Brewmaster_DrunkenBrawler : public CDOTABaseAbility /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 m_iBrawlActive; // offset 0x85C, size 0x4, align 4
    bool m_bUpdateIcons; // offset 0x860, size 0x1, align 1
    char _pad_0861[0x3]; // offset 0x861
    ParticleIndex_t m_nDrunkenBrawlerFX; // offset 0x864, size 0x4, align 255
};
