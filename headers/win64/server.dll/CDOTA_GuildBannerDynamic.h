#pragma once

class CDOTA_GuildBannerDynamic : public CDynamicProp /*0x0*/  // sizeof 0xBE0, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xBC0]; // offset 0x0
    bool m_bRespawnClientEntity; // offset 0xBC0, size 0x1, align 1
    bool m_bPlaySpawnAnimation; // offset 0xBC1, size 0x1, align 1
    uint8 m_unGuildTier; // offset 0xBC2, size 0x1, align 1
    uint8 m_unPrimaryColor; // offset 0xBC3, size 0x1, align 1
    uint8 m_unSecondaryColor; // offset 0xBC4, size 0x1, align 1
    uint8 m_unPattern; // offset 0xBC5, size 0x1, align 1
    char _pad_0BC6[0x2]; // offset 0xBC6
    uint64 m_unLogo; // offset 0xBC8, size 0x8, align 8
    GuildID_t m_unGuildID; // offset 0xBD0, size 0x4, align 255
    uint32 m_unGuildFlags; // offset 0xBD4, size 0x4, align 4
    bool m_bUsePanelCache; // offset 0xBD8, size 0x1, align 1
    char _pad_0BD9[0x7]; // offset 0xBD9
};
