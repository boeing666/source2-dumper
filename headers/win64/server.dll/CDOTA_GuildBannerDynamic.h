#pragma once

class CDOTA_GuildBannerDynamic : public CDynamicProp /*0x0*/  // sizeof 0xB80, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xB60]; // offset 0x0
    bool m_bRespawnClientEntity; // offset 0xB60, size 0x1, align 1
    bool m_bPlaySpawnAnimation; // offset 0xB61, size 0x1, align 1
    uint8 m_unGuildTier; // offset 0xB62, size 0x1, align 1
    uint8 m_unPrimaryColor; // offset 0xB63, size 0x1, align 1
    uint8 m_unSecondaryColor; // offset 0xB64, size 0x1, align 1
    uint8 m_unPattern; // offset 0xB65, size 0x1, align 1
    char _pad_0B66[0x2]; // offset 0xB66
    uint64 m_unLogo; // offset 0xB68, size 0x8, align 8
    GuildID_t m_unGuildID; // offset 0xB70, size 0x4, align 255
    uint32 m_unGuildFlags; // offset 0xB74, size 0x4, align 4
    bool m_bUsePanelCache; // offset 0xB78, size 0x1, align 1
    char _pad_0B79[0x7]; // offset 0xB79
};
