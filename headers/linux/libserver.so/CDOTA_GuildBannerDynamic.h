#pragma once

class CDOTA_GuildBannerDynamic : public CDynamicProp /*0x0*/  // sizeof 0xCD0, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xCB0]; // offset 0x0
    bool m_bRespawnClientEntity; // offset 0xCB0, size 0x1, align 1
    bool m_bPlaySpawnAnimation; // offset 0xCB1, size 0x1, align 1
    uint8 m_unGuildTier; // offset 0xCB2, size 0x1, align 1
    uint8 m_unPrimaryColor; // offset 0xCB3, size 0x1, align 1
    uint8 m_unSecondaryColor; // offset 0xCB4, size 0x1, align 1
    uint8 m_unPattern; // offset 0xCB5, size 0x1, align 1
    char _pad_0CB6[0x2]; // offset 0xCB6
    uint64 m_unLogo; // offset 0xCB8, size 0x8, align 8
    GuildID_t m_unGuildID; // offset 0xCC0, size 0x4, align 255
    uint32 m_unGuildFlags; // offset 0xCC4, size 0x4, align 4
    bool m_bUsePanelCache; // offset 0xCC8, size 0x1, align 1
    char _pad_0CC9[0x7]; // offset 0xCC9
};
