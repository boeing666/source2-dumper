#pragma once

class C_DOTA_GuildBannerDynamic : public C_DynamicProp /*0x0*/  // sizeof 0xEE0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xE7C]; // offset 0x0
    bool m_bRespawnClientEntity; // offset 0xE7C, size 0x1, align 1
    bool m_bPlaySpawnAnimation; // offset 0xE7D, size 0x1, align 1
    uint8 m_unGuildTier; // offset 0xE7E, size 0x1, align 1
    uint8 m_unPrimaryColor; // offset 0xE7F, size 0x1, align 1
    uint8 m_unSecondaryColor; // offset 0xE80, size 0x1, align 1
    uint8 m_unPattern; // offset 0xE81, size 0x1, align 1
    char _pad_0E82[0x6]; // offset 0xE82
    uint64 m_unLogo; // offset 0xE88, size 0x8, align 8
    GuildID_t m_unGuildID; // offset 0xE90, size 0x4, align 255
    uint32 m_unGuildFlags; // offset 0xE94, size 0x4, align 4
    bool m_bUsePanelCache; // offset 0xE98, size 0x1, align 1
    char _pad_0E99[0x3]; // offset 0xE99
    CHandle< C_BaseEntity > m_hClientEntity; // offset 0xE9C, size 0x4, align 4
    char _pad_0EA0[0x40]; // offset 0xEA0
};
