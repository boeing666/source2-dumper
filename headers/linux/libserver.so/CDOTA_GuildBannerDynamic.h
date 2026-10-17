#pragma once

class CDOTA_GuildBannerDynamic : public CDynamicProp /*0x0*/  // sizeof 0xE40, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xE20]; // offset 0x0
    bool m_bRespawnClientEntity; // offset 0xE20, size 0x1, align 1
    bool m_bPlaySpawnAnimation; // offset 0xE21, size 0x1, align 1
    uint8 m_unGuildTier; // offset 0xE22, size 0x1, align 1
    uint8 m_unPrimaryColor; // offset 0xE23, size 0x1, align 1
    uint8 m_unSecondaryColor; // offset 0xE24, size 0x1, align 1
    uint8 m_unPattern; // offset 0xE25, size 0x1, align 1
    char _pad_0E26[0x2]; // offset 0xE26
    uint64 m_unLogo; // offset 0xE28, size 0x8, align 8
    GuildID_t m_unGuildID; // offset 0xE30, size 0x4, align 255
    uint32 m_unGuildFlags; // offset 0xE34, size 0x4, align 4
    bool m_bUsePanelCache; // offset 0xE38, size 0x1, align 1
    char _pad_0E39[0x7]; // offset 0xE39
};
