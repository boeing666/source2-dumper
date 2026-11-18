#pragma once

class C_DOTA_GuildBannerDynamic : public C_DynamicProp /*0x0*/  // sizeof 0xF40, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xEE0]; // offset 0x0
    bool m_bRespawnClientEntity; // offset 0xEE0, size 0x1, align 1
    bool m_bPlaySpawnAnimation; // offset 0xEE1, size 0x1, align 1
    uint8 m_unGuildTier; // offset 0xEE2, size 0x1, align 1
    uint8 m_unPrimaryColor; // offset 0xEE3, size 0x1, align 1
    uint8 m_unSecondaryColor; // offset 0xEE4, size 0x1, align 1
    uint8 m_unPattern; // offset 0xEE5, size 0x1, align 1
    char _pad_0EE6[0x2]; // offset 0xEE6
    uint64 m_unLogo; // offset 0xEE8, size 0x8, align 8
    GuildID_t m_unGuildID; // offset 0xEF0, size 0x4, align 255
    uint32 m_unGuildFlags; // offset 0xEF4, size 0x4, align 4
    bool m_bUsePanelCache; // offset 0xEF8, size 0x1, align 1
    char _pad_0EF9[0x3]; // offset 0xEF9
    CHandle< C_BaseEntity > m_hClientEntity; // offset 0xEFC, size 0x4, align 4
    char _pad_0F00[0x40]; // offset 0xF00
};
