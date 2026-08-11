#pragma once

class CDOTAPropPlusPlayerGuildBanner : public CDOTA_GuildBannerDynamic /*0x0*/  // sizeof 0xA20, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA10]; // offset 0x0
    int32 m_nPlayerID; // offset 0xA10, size 0x4, align 4
    char _pad_0A14[0xC]; // offset 0xA14
};
