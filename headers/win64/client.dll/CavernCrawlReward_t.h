#pragma once

struct CavernCrawlReward_t  // sizeof 0x38, align 0xFF (client)
{
    uint32 m_nActionID; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_rewardName; // offset 0x8, size 0x8, align 8
    CavernCrawlItemType_t m_nItemType; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x7]; // offset 0x11
    CUtlString m_locString; // offset 0x18, size 0x8, align 8
    CUtlString m_tooltipString; // offset 0x20, size 0x8, align 8
    CUtlString m_image; // offset 0x28, size 0x8, align 8
    CavernCrawlRewardType_t m_nStyleUnlockRewardType; // offset 0x30, size 0x1, align 255
    uint8 m_nPriority; // offset 0x31, size 0x1, align 1
    style_index_t m_nBundleItemDefStyle; // offset 0x32, size 0x1, align 255
    bool m_bImageIsBundleItemDef; // offset 0x33, size 0x1, align 1
    bool m_bCannotBeReplacedWithUltraRareReward; // offset 0x34, size 0x1, align 1
    bool m_bIsUltraRareReward; // offset 0x35, size 0x1, align 1
    char _pad_0036[0x2]; // offset 0x36
};
