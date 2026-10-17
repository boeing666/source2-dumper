#pragma once

class C_DOTA_GuildBannerDynamic : public C_DynamicProp /*0x0*/  // sizeof 0x1050, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xFF4]; // offset 0x0
    bool m_bRespawnClientEntity; // offset 0xFF4, size 0x1, align 1
    bool m_bPlaySpawnAnimation; // offset 0xFF5, size 0x1, align 1
    uint8 m_unGuildTier; // offset 0xFF6, size 0x1, align 1
    uint8 m_unPrimaryColor; // offset 0xFF7, size 0x1, align 1
    uint8 m_unSecondaryColor; // offset 0xFF8, size 0x1, align 1
    uint8 m_unPattern; // offset 0xFF9, size 0x1, align 1
    char _pad_0FFA[0x6]; // offset 0xFFA
    uint64 m_unLogo; // offset 0x1000, size 0x8, align 8
    GuildID_t m_unGuildID; // offset 0x1008, size 0x4, align 255
    uint32 m_unGuildFlags; // offset 0x100C, size 0x4, align 4
    bool m_bUsePanelCache; // offset 0x1010, size 0x1, align 1
    char _pad_1011[0x3]; // offset 0x1011
    CHandle< C_BaseEntity > m_hClientEntity; // offset 0x1014, size 0x4, align 4
    char _pad_1018[0x38]; // offset 0x1018
};
