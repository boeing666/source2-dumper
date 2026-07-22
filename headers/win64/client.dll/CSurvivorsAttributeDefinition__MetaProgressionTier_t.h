#pragma once

struct CSurvivorsAttributeDefinition::MetaProgressionTier_t  // sizeof 0x58, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CSurvivorsAttributeDefinition::MetaProgressionTierCost_t m_cost; // offset 0x0, size 0x50, align 8
    float32 m_flValue; // offset 0x50, size 0x4, align 4
    char _pad_0054[0x4]; // offset 0x54
};
