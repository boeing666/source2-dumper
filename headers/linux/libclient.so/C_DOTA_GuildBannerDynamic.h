#pragma once

class C_DOTA_GuildBannerDynamic : public C_DynamicProp /*0x0*/  // sizeof 0x10C0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1064]; // offset 0x0
    bool m_bRespawnClientEntity; // offset 0x1064, size 0x1, align 1
    bool m_bPlaySpawnAnimation; // offset 0x1065, size 0x1, align 1
    uint8 m_unGuildTier; // offset 0x1066, size 0x1, align 1
    uint8 m_unPrimaryColor; // offset 0x1067, size 0x1, align 1
    uint8 m_unSecondaryColor; // offset 0x1068, size 0x1, align 1
    uint8 m_unPattern; // offset 0x1069, size 0x1, align 1
    char _pad_106A[0x6]; // offset 0x106A
    uint64 m_unLogo; // offset 0x1070, size 0x8, align 8
    GuildID_t m_unGuildID; // offset 0x1078, size 0x4, align 255
    uint32 m_unGuildFlags; // offset 0x107C, size 0x4, align 4
    bool m_bUsePanelCache; // offset 0x1080, size 0x1, align 1
    char _pad_1081[0x3]; // offset 0x1081
    CHandle< C_BaseEntity > m_hClientEntity; // offset 0x1084, size 0x4, align 4
    char _pad_1088[0x38]; // offset 0x1088
};
