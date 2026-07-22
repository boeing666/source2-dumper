#pragma once

struct StreetBrawlGameRoundDrafts_t  // sizeof 0xB8, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlVector< StreetBrawlItemDraftRoundParams_t > m_vecItemDraftRounds; // offset 0x0, size 0x18, align 8
    WeightedChance_t m_chanceRare; // offset 0x18, size 0x28, align 8
    WeightedChance_t m_chanceEnhanced; // offset 0x40, size 0x28, align 8
    char _pad_0068[0x50]; // offset 0x68
};
