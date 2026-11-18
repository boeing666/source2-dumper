#pragma once

class CDOTA_GuildBannerDynamic : public CDynamicProp /*0x0*/  // sizeof 0xEB0, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xE90]; // offset 0x0
    bool m_bRespawnClientEntity; // offset 0xE90, size 0x1, align 1
    bool m_bPlaySpawnAnimation; // offset 0xE91, size 0x1, align 1
    uint8 m_unGuildTier; // offset 0xE92, size 0x1, align 1
    uint8 m_unPrimaryColor; // offset 0xE93, size 0x1, align 1
    uint8 m_unSecondaryColor; // offset 0xE94, size 0x1, align 1
    uint8 m_unPattern; // offset 0xE95, size 0x1, align 1
    char _pad_0E96[0x2]; // offset 0xE96
    uint64 m_unLogo; // offset 0xE98, size 0x8, align 8
    GuildID_t m_unGuildID; // offset 0xEA0, size 0x4, align 255
    uint32 m_unGuildFlags; // offset 0xEA4, size 0x4, align 4
    bool m_bUsePanelCache; // offset 0xEA8, size 0x1, align 1
    char _pad_0EA9[0x7]; // offset 0xEA9
};
