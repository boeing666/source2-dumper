#pragma once

class CDOTA_GuildBannerDynamic : public CDynamicProp /*0x0*/  // sizeof 0xA10, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    bool m_bRespawnClientEntity; // offset 0x9F0, size 0x1, align 1
    bool m_bPlaySpawnAnimation; // offset 0x9F1, size 0x1, align 1
    uint8 m_unGuildTier; // offset 0x9F2, size 0x1, align 1
    uint8 m_unPrimaryColor; // offset 0x9F3, size 0x1, align 1
    uint8 m_unSecondaryColor; // offset 0x9F4, size 0x1, align 1
    uint8 m_unPattern; // offset 0x9F5, size 0x1, align 1
    char _pad_09F6[0x2]; // offset 0x9F6
    uint64 m_unLogo; // offset 0x9F8, size 0x8, align 8
    GuildID_t m_unGuildID; // offset 0xA00, size 0x4, align 255
    uint32 m_unGuildFlags; // offset 0xA04, size 0x4, align 4
    bool m_bUsePanelCache; // offset 0xA08, size 0x1, align 1
    char _pad_0A09[0x7]; // offset 0xA09
};
