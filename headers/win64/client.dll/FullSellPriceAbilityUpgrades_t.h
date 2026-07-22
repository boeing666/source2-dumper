#pragma once

struct FullSellPriceAbilityUpgrades_t  // sizeof 0x10, align 0x8 (client) {MNetworkStructNotInNetworkUtlVectorEmbedded MGetKV3ClassDefaults}
{
    CUtlString m_strAbilityUpgrade; // offset 0x0, size 0x8, align 8 | MNetworkEnable
    GameTime_t m_unGameTimePurchased; // offset 0x8, size 0x4, align 255 | MNetworkEnable
    char _pad_000C[0x4]; // offset 0xC
};
