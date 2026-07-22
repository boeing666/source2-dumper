#pragma once

struct CSurvivorsAttributeDefinition::MetaProgressionTierCost_t  // sizeof 0x50, align 0x8 (client) {MGetKV3ClassDefaults}
{
    int32 m_nMinigameCurrency; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlVector< OverworldTokenID_t > m_vecOverworldTokens; // offset 0x8, size 0x18, align 8
    char _pad_0020[0x30]; // offset 0x20
};
