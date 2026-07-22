#pragma once

class C_DOTA_GuildBannerDynamic : public C_DynamicProp /*0x0*/  // sizeof 0xD70, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xD10]; // offset 0x0
    bool m_bRespawnClientEntity; // offset 0xD10, size 0x1, align 1
    bool m_bPlaySpawnAnimation; // offset 0xD11, size 0x1, align 1
    uint8 m_unGuildTier; // offset 0xD12, size 0x1, align 1
    uint8 m_unPrimaryColor; // offset 0xD13, size 0x1, align 1
    uint8 m_unSecondaryColor; // offset 0xD14, size 0x1, align 1
    uint8 m_unPattern; // offset 0xD15, size 0x1, align 1
    char _pad_0D16[0x2]; // offset 0xD16
    uint64 m_unLogo; // offset 0xD18, size 0x8, align 8
    GuildID_t m_unGuildID; // offset 0xD20, size 0x4, align 255
    uint32 m_unGuildFlags; // offset 0xD24, size 0x4, align 4
    bool m_bUsePanelCache; // offset 0xD28, size 0x1, align 1
    char _pad_0D29[0x3]; // offset 0xD29
    CHandle< C_BaseEntity > m_hClientEntity; // offset 0xD2C, size 0x4, align 4
    char _pad_0D30[0x40]; // offset 0xD30
};
